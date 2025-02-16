#include <stdio.h>

int main() {
    int costPrice, sellingPrice;

    // Read two space-separated integers: cost price and selling price
    scanf("%d %d", &costPrice, &sellingPrice);

    // Compare selling price with cost price
    if (sellingPrice > costPrice) {
        printf("Profit\n");
    }
    else if (sellingPrice < costPrice) {
        printf("Loss\n");
    }
    else {
        // sellingPrice == costPrice
        printf("No Profit No Loss\n");
    }

    return 0;
}
