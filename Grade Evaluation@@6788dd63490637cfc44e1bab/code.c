#include<stdio.h>
int main(){
    char x;
    scanf("%c",&x);
    switch(c){
        case 'A':
            printf("Excellent");
            break;
        case 'B':
            printf("Good");
            break;
        case 'C':
            printf("Average");
            break;
        case 'D':
            printf("Below Average");
            break;
        case 'F':
            printf("Fail");
            break;
        default:
            printf("Invalid Grade");
    }
    return 0;
}