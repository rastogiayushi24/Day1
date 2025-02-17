#include <stdio.h>

int main() {
    int n, accepted = 0, rejected = 0, weight;
    
    printf("Enter number of products: ");
    scanf("%d", &n);
    
    printf("Enter weights (in grams): ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &weight);
        
        if (weight >= 950 && weight <= 1050) {
            accepted++;
        } else {
            rejected++;
        }
    }
    
    printf("Accepted Products: %d\n", accepted);
    printf("Rejected Products: %d\n", rejected);
    
    return 0;
}
