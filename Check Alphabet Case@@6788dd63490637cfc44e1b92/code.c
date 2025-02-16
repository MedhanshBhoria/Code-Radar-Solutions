#include <stdio.h>

int main() {
    char c;
    scanf("%c",&c);
    if(c>='A' && c<='Z'){
        printf("Uppercase");
    }
    if else(c>='a' && c<='z'){
        printf("Lowercase");
    }
    // else{
    //     printf("Not an alphabet");
    // }
    return 0;
}