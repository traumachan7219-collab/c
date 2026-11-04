#include <stdio.h>
//#include <string.h>
//#include <stdbool.h>
#include <windows.h>
#include <time.h>

int main(){
    srand(time(NULL));

    int guess = 0;
    int tries = 0;
    int min = 1;
    int max = 100;
    int answer = (rand() % (max-min+1))+min;

    printf("***NUMBER GUESSING GAME***\n");
    do {
        printf("ENTER NUMBER BETWEEN %d-%d: ",min,max);
        scanf("%d",&guess);
        tries += 1;
        if (guess>answer) {
            printf("TOO HIGH\n");
        }
        else if (guess<answer) {
            printf("TOO LOW\n");
        }
        else {
            printf("CORRECT\n");
        }
    
    }while (guess!=answer);
    printf("THE ANSWER IS %d\n",answer);
    printf("IT TOOK YOU %d TRIES",tries);
    

    return 0;
}
