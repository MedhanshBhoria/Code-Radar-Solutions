#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Taking input for the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Checking if the array is a palindrome
    int isPalindrome = 1; // Assume it's a palindrome initially
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - 1 - i]) {
            isPalindrome = 0; // Not a palindrome
            break;
        }
    }

    // Printing the result
    if (isPalindrome) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
