// #include <stdio.h>

// int main() {
//     int a, b;
//     scanf("%d %d", &a, &b);
//     if(x>y){
//         printf("%d",x);
//     }
//     else{
//         printf("%d",y);
//     }
//     return 0;
// }
#include <stdio.h>

int main() {
    int a, b;
    
    // Taking input of two space-separated integers
    scanf("%d %d", &a, &b);
    
    // Using if-else condition to find the greater number
    if (a > b) {
        printf("%d\n", a);
    } else {
        printf("%d\n", b);
    }
    
    return 0;
}