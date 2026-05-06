#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 30   // since 4 = M,N = 25
#define QUEUESZ 20000

typedef struct {
    int r, c, o;   // row, col, orientation (0=horizontal, 1=vertical)
} State;

typedef struct {
    State s;
    int d;
} Node;

int M, N;
char G[MAX][MAX];

// BFS queue
Node Q[QUEUESZ];
int front = 0, back = 0;
int visited[MAX][MAX][2]; // visited[r][c][o]

int inBounds(int r, int c) {
    return (r >= 0 && r < M && c >= 0 && c < N);
}

int freeCell(int r, int c) {
    return inBounds(r,c) && G[r][c] != 'H';
}

// check if sofa can be placed at (r,c) with orientation o
int canPlace(int r, int c, int o) {
    if (o == 0) { // horizontal: (r,c) and (r,c+1)
        return (r >= 0 && r < M && c >= 0 && c+1 < N &&
                freeCell(r,c) && freeCell(r,c+1));
    } else { // vertical: (r,c) and (r+1,c)
        return (r >= 0 && r+1 < M && c >= 0 && c < N &&
                freeCell(r,c) && freeCell(r+1,c));
    }
}

// check if sofa can rotate within 2x2 square at (r,c)
int canRotate(int r, int c) {
    if (!(r >= 0 && r+1 < M && c >= 0 && c+1 < N)) return 0;
    for (int i = r; i <= r+1; i++) {
        for (int j = c; j <= c+1; j++) {
            if (G[i][j] == 'H') return 0;
        }
    }
    return 1;
}

void enqueue(State s, int d) {
    // (Optional) prevent overflow
    if ((back + 1) % QUEUESZ == front) {
        fprintf(stderr, "Queue overflow!\n");
        exit(1);
    }
    Q[back].s = s;
    Q[back].d = d;
    back = (back+1) % QUEUESZ;
}

Node dequeue() {
    Node n = Q[front];
    front = (front+1) % QUEUESZ;
    return n;
}

int isEmpty() {
    return front == back;
}

int main() {
    scanf("%d %d", &M, &N);
    for (int i=0; i<M; i++) {
        for (int j=0; j<N; j++) {
            scanf(" %c", &G[i][j]);
        }
    }

    // find start and goal
    int sr=-1, sc=-1, so=-1;
    int gr=-1, gc=-1, go=-1;
    int sCount=0, dCount=0;
    int sR[2], sC[2], dR[2], dC[2];

    for (int i=0; i<M; i++) {
        for (int j=0; j<N; j++) {
            if (G[i][j]=='S' && sCount<2) {
                sR[sCount] = i; sC[sCount] = j; sCount++;
            }
            if (G[i][j]=='D' && dCount<2) {
                dR[dCount] = i; dC[dCount] = j; dCount++;
            }
        }
    }

    if (sCount != 2 || dCount != 2) {
        printf("Impossible\n");
        return 0;
    }

    // start orientation
    if (sR[0]==sR[1]) { sr=sR[0]; sc=(sC[0]<sC[1]?sC[0]:sC[1]); so=0; }
    else { sr=(sR[0]<sR[1]?sR[0]:sR[1]); sc=sC[0]; so=1; }

    // goal orientation
    if (dR[0]==dR[1]) { gr=dR[0]; gc=(dC[0]<dC[1]?dC[0]:dC[1]); go=0; }
    else { gr=(dR[0]<dR[1]?dR[0]:dR[1]); gc=dC[0]; go=1; }

    memset(visited, 0, sizeof(visited));
    State start = {sr,sc,so};
    enqueue(start,0);
    visited[sr][sc][so]=1;

    int dr[4]={1,-1,0,0}, dc[4]={0,0,1,-1};

    while(!isEmpty()) {
        Node cur = dequeue();
        State s = cur.s;
        int d = cur.d;

        if (s.r==gr && s.c==gc && s.o==go) {
            printf("%d\n", d);
            return 0;
        }

        // translations
        for(int k=0;k<4;k++) {
            int nr=s.r+dr[k], nc=s.c+dc[k];
            if(canPlace(nr,nc,s.o) && !visited[nr][nc][s.o]) {
                visited[nr][nc][s.o]=1;
                State ns=(State){nr,nc,s.o};
                enqueue(ns,d+1);
            }
        }
        // rotation
        if(canRotate(s.r,s.c)) {
            int no=1-s.o;
            if(canPlace(s.r,s.c,no) && !visited[s.r][s.c][no]) {
                visited[s.r][s.c][no]=1;
                State ns=(State){s.r,s.c,no};
                enqueue(ns,d+1);
            }
        }
    }

    printf("Impossible\n");
    return 0;
}

