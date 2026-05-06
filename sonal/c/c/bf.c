#include <stdio.h>

int main() {
    int age, interests, personality, hobbies;

    
    printf("Welcome to find a boyfriend page!\n\n");
    printf("Answer the following questions honestly .\n\n");

    printf("1. How old are you? ");
    scanf("%d", &age);

    printf("2. Do you both share common interests? (1 for Yes, 0 for No): ");
    scanf("%d", &interests);
 
    printf("3. Do your personalities match? (1 for Yes, 0 for No): ");
    scanf("%d", &personality);

    printf("4. Do you both have similar hobbies? (1 for Yes, 0 for No): ");
    scanf("%d", &hobbies);

    int compatibilityScore = age / 5 + interests + personality + hobbies;
    
    if (compatibilityScore >= 6) {
        printf("\nCongratulations! You're sonal ka boyfriend! ??\n");
    } else if (compatibilityScore >= 4) {
        printf("\nYou're somewhat compatible. Give it time and see how it goes! ??\n");
    } else {
        printf("\nIt seems like you might need to work on some things. But don't worry, relationships take time! ??\n");
    }

    return 0;
}

