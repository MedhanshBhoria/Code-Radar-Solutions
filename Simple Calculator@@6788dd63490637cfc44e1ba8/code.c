#include<stdio.h>
int main(){
    int x,y;
    char c;
    scanf("%d %d %c",&x,&y,&c);
    switch(c){
        case'+':
            printf("%d",x+y);
            break;
        case'-':
            printf("%d",x-y);
            break;
        case'*':
            printf("%d",x*y);
            break;
        case'/':
            if(y==0){
                printf("error\n");
            }
            else{
                printf("%d",x/y);
            }
            break;
        default:
            printf("Error");
    }

}