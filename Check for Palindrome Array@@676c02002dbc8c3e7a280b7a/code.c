#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        for(int j=n-1;j<n; j++){
            if(arr[i]==arr[j]){
                printf("YES");
            }
            else{
                printf("NO");
            }
        }
    }
}