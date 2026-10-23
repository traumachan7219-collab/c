#include <stdio.h>
#include <string.h>

int main(){
    double x = 0.0f;
    char y = '\0';
    double z = 0.0f;
    double r = 0.0f;
    
    printf("enter your firts number : ");
    scanf("%lf", &x);
    printf("enter your operator(+-*/) : ");
    scanf(" %c", &y);
    printf("enter your second number : ");
    scanf("%lf", &z);

    switch(y){
        case '+':
            r = x+z;
            printf("your result is :%lf",r);
            break;
        case '-':
            r = x-z;
            printf("your result is :%lf",r);
            break;
        case '*':
            r = x*z;
            printf("your result is :%lf",r);
            break;
        case '/':
            if (z==0) {
                printf("please dont divide by zero for worlds safety");
            }
            else {
                r = x/z;
                printf("your result is :%lf",r);
            };
            break;
        default:
            printf("YOU CANT EVEN TYPE OPERATOR CORRECTLY SUCH A LOSER(SORRY)");
            break;   
    }
    return 0;
}