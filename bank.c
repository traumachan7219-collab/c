#include <stdio.h>

void CheckBalance(float balance);
float Deposit();
float Withdraw(float balance);

int main(){
    int choice = 0;
    float balance = 0.0f;

    printf("***WELCOME TO ATM***\n");
    do {
        printf("\nCHOSE an OPTION\n");
        printf("\n1.CheckBalance!\n");
        printf("2.Deposit!\n");
        printf("3.Withdraw!\n");
        printf("4.Exit\n");
        printf("\nENTER NUMBER 1-4: ");
        scanf("%d",&choice);

        switch (choice) {
            case 1:
                CheckBalance(balance);
                break;
            case 2:
                balance += Deposit();
                break;
            case 3:
                balance -= Withdraw(balance);
                break;
            case 4:
                printf("\nThanks for using Our ATM\n");
                break;
            default:
                printf("\nINVALID\n");
        }
    
    }while (choice!=4);

    return 0;
}

void CheckBalance(float balance){
    printf("\nYour Balance is $%.2f",balance);
}
float Deposit(){
    float Amount = 0.0f;
    printf("\nEnter Amount You like to Deposit: $");
    scanf("%f",&Amount);
    if (Amount<0) {
        printf("\nInvalid amount\n");
        return 0.0f;
    }
    else {
        printf("\nYou Deposited $%.2f",Amount);
        return Amount;
    }
}
float Withdraw(float balance){
     float Amount = 0.0f;
    printf("\nEnter Amount You like to Withdraw: $");
    scanf("%f",&Amount);
    if (Amount<0) {
        printf("\nInvalid amount\n");
        return 0.0f;
    }
    else if (Amount>balance) {
        printf("Insufficent Funds, Your balance is $%.2f\n",balance);
        return 0.0f;
    
    }
    else {
        printf("\nYou Withdrawed $%.2f",Amount);
        return Amount;
    }
    
};