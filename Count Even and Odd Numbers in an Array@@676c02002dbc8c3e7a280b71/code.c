#include<stdio.h>
int main(){
    int n;
    int sumodd = 0;
    int sumeven = 0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<=n; i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            sumeven += 1;
        }
        else{
            sumodd += 1;
        }
    }
    printf("%d %d",sumeven,sumodd);
}