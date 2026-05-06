#include <iostream>
#include <vector>
using namespace std;

void calculateTimes(vector<int>& burstTime, int numProcesses) {
    vector<int> waitingTime(numProcesses, 0);
    vector<int> turnAroundTime(numProcesses, 0);

    for (int i = 1; i < numProcesses; i++) {
        waitingTime[i] = burstTime[i - 1] + waitingTime[i - 1];
    }
    for (int i = 0; i < numProcesses; i++) {
        turnAroundTime[i] = burstTime[i] + waitingTime[i];
    }
    int totalWaitingTime = 0;
    int totalTurnAroundTime = 0;
    cout << "\nProcess\tBurst Time\tWaiting Time\tTurnaround Time" << endl;
    for (int i = 0; i < numProcesses; i++) {
        cout << "P" << i + 1 << "\t" << burstTime[i] << "\t\t" << waitingTime[i] 
             << "\t\t" << turnAroundTime[i] << endl;
        totalWaitingTime += waitingTime[i];
        totalTurnAroundTime += turnAroundTime[i];
    }
    float avgWaitingTime = (float)totalWaitingTime / numProcesses;
    float avgTurnAroundTime = (float)totalTurnAroundTime / numProcesses;
    
    cout << "\nAverage Waiting Time: " << avgWaitingTime << endl;
    cout << "Average Turnaround Time: " << avgTurnAroundTime << endl;
}

int main() {
    int numProcesses;
    cout << "Enter the number of processes: ";
    cin >> numProcesses;
    vector<int> burstTime(numProcesses);
    
    for (int i = 0; i < numProcesses; i++) {
        cout << "Enter burst time for Process " << i + 1 << ": ";
        cin >> burstTime[i];
    }

    calculateTimes(burstTime, numProcesses);
    return 0;
}

