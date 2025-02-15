#include <stdio.h>

int main() {
    int x, result;

    // Read a single integer
    scanf("%d", &x);

    // Perform bitwise one's complement
    result = ~x;

    // Print the result
    printf("%d\n", result);

    return 0;
}
