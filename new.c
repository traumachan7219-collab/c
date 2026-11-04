#include <stdio.h>
//#include <string.h>
//#include <stdbool.h>
#include <windows.h>
#include <time.h>

int main(){
    int numbers[]={3,1,4,1,5,9,2,6,5,3};
    char name[] ="😊";
    int size = sizeof(name)/sizeof(name[0]);
    for (int i=0;i<6;i++) {
        for(int j=0;j<6;j++){
            printf("(%s)",name);
        }
        printf("\n");
    }

    return 0;
}
