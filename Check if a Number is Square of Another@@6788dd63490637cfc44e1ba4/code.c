// #include <stdio.h>

// int main() {
//     int x,y;
//     scanf("%d",&x,&y);
//     if(x==y*y){
//         printf("Yes");
//     }
//     else{
//         printf("No");
//     }
//     return 0;
// }
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if (a == b * b) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}