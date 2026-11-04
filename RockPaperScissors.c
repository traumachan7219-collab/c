#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getComputerChoice();
int getUserChoice();
void Checkwinner(int UserChoice, int ComputerChoice);

int main(){
    srand(time(NULL));
    printf("*** ROCK PAPER AND SCCIORS ***\n");
    int user = getUserChoice();
    int com = getComputerChoice();
    switch (user) {
        case 1:
            printf("YOU CHOSE ROCK!\n");
            break;
        case 2:
            printf("YOU CHOSE PAPER!\n");
            break;
        case 3:
            printf("YOU CHOSE SCISSORS!\n");
            break;
    }
     switch (com) {
        case 1:
            printf("AI CHOSE ROCK!\n");
            break;
        case 2:
            printf("AI CHOSE PAPER!\n");
            break;
        case 3:
            printf("AI CHOSE SCISSORS!\n");
            break;
    }
    Checkwinner(user,com);
    return 0;
}

int getComputerChoice(){
    return (rand() % 3)+1;

};
int getUserChoice(){
    int choice = 0;
    do {
        printf("CHOSE OPTION\n");
        printf("1.ROCK!\n");
        printf("2.PAPER!\n");
        printf("3.SCISSORS!\n");
        printf("ENTER NUMBER 1-3: ");
        scanf("%d",&choice);
    }while (choice<1||choice>3);
    return choice;

};
void Checkwinner(int UserChoice, int ComputerChoice){
    if (UserChoice==ComputerChoice) {
        printf("TIE!");
    }
    else if ((UserChoice==1&&ComputerChoice==3)||(UserChoice==2&&ComputerChoice==1)||(UserChoice==3&&ComputerChoice==2)) {
        printf("YOU WIN!!!");
    }
    else {
        printf("YOU LOSE :P");
    }

};