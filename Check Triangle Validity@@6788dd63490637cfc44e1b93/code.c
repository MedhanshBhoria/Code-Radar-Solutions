#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%c %c %c",&a,&b,&c);
    if(a+b>c && c+a>b && b+c>a){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}