#include <stdio.h>
#include <string.h>
#include <math.h>

void calculator(){
   
    float x = 0.0f;
    char y = '\0';
    float z = 0.0f;
    float r = 0.0f;
    
    printf("\n enter your firts number : ");
    scanf("%f", &x);
    printf("\n enter your operator(+-*/) : ");
    scanf(" %c", &y);
    printf("\n enter your second number : ");
    scanf("%f", &z);

    if (y == '+') {
        r = x+z;
        printf("\n your result is :%f",r);
    }
    else if (y == '-') {
        r = x-z;
        printf("\n your result is :%f",r);
    }
    else if (y == '*') {
        r = x*z;
        printf("\n your result is :%f",r);
    }
    else if (y == '/') {
        if (z==0) {
            printf("\nplease dont divide by zero for worlds safety");
        }
        else {
            r = x/z;
            printf("\n your result is :%f",r);
        };
    }
    else {
        printf("\nYOU CANT EVEN TYPE OPERATOR CORRECTLY SUCH A LOSER(SORRY)");
    }
};
void shoppingcart(){

    char item[50] = "";
    float price = 0.0f;
    int amount = 0;
    float total = 0.0f;

    printf("what would you like to buy?: ");
    fgets(item,sizeof(item), stdin);
    item[strlen(item) -1] = '\0';

    printf("what is price of each item?: ");
    scanf("%f",&price);

    printf("how many would you like to buy?: ");
    scanf("%d",&amount);

    total = price*amount;
    printf("total price of %d %s is %.2f$",amount,item, total);
};
void game(){

    double x = 27.8778;

    //x = sqrt(x);
    //x = pow(x,27);
    x = round(x);

    printf("%lf",x);

};
void circle(){

    double radius = 0.0;
    double area = 0.0;
    double surfacearea = 0.0;
    double volume = 0.0;
    const double pi = 3.14159;

    printf("\nEnter Radius of Circle(/sphere): ");
    scanf("%lf",&radius);

    area = pi*pow(radius,2);

    printf("\narea = %.2lf (if its 2d circle)",area);
    
    surfacearea = 4*pi*pow(radius,2);

    printf("\nsurfacearea = %.2lf",surfacearea);

    volume = 4.0/3*pi*pow(radius,3);

    printf("\nvolume = %.2lf",volume);



};
void weightconveter(){

    int choice = 0;
    float kg = 0.0f;
    float p = 0.0f;

    printf("\nWelcome to Weight Converter");
    printf("\n1: Kilograms to Pounds");
    printf("\n2: Pounds to Kilograms");
    printf("\nEnter 1 or 2 : ");
    scanf("%d",&choice);

    if(choice == 1){
        printf("\nEnter Amount of Killograms; ");
        scanf("%f",&kg);
        p = kg*2.2046;
        printf("%.3fkg is equal to %.3f pounds",kg,p);
    }
    else if(choice == 2){
        printf("\nEnter Amount of pounds; ");
        scanf("%f",&p);
        kg = p/2.2046;
        printf("\n%.3fpounds is equal to %.3fkgs",p,kg);
    }
    else {
    printf("\n invalid");
    }




}
void switch1(){
       
    float x = 0.0f;
    char y = '\0';
    float z = 0.0f;
    float r = 0.0f;
    
    printf("\n enter your firts number : ");
    scanf("%f", &x);
    printf("\n enter your operator(+-*/) : ");
    scanf(" %c", &y);
    printf("\n enter your second number : ");
    scanf("%f", &z);

    switch(y){
        case '+':
            r = x+z;
            printf("\n your result is :%f",r);
            break;
        case '-':
            r = x-z;
            printf("\n your result is :%f",r);
            break;
        case '*':
            r = x*z;
            printf("\n your result is :%f",r);
            break;
        case '/':
            if (z==0) {
                printf("\nplease dont divide by zero for worlds safety");
            }
            else {
                r = x/z;
                printf("\n your result is :%f",r);
            };
            break;
        default:
            printf("\nYOU CANT EVEN TYPE OPERATOR CORRECTLY SUCH A LOSER(SORRY)");
            break;   
    }

}

int main(){
    //calculator();
    //shoppingcart();
    //game();
    //circle();
    //weightconveter();
    //switch1();
    int option = 0;
    
        printf("\n=== MULTI-TOOL SUITE ===");
        printf("\n1. Calculator");
        //printf("\n2. Shopping Cart");
        printf("\n2. Circle Geometry");
        printf("\n3. Weight Converter");
        printf("\n4. Switch Calculator");
        printf("\n5. Game");
        printf("\n6. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &option);


        switch (option) {
            case 1:
                calculator();
                break;
            //case 2:
                shoppingcart();
                break;
            case 2:
                circle();
                break;
            case 3:
                weightconveter();
                break;
            case 4:
                switch1();
                break;
            case 5:
                game();
                break;
            case 6:
                return 1;
            default:
                    printf("invalid");
                return 1;
        
        }
    
    
    return 0;
}