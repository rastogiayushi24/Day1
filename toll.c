#include <stdio.h>
#include <string.h>

int main() {
    int n, totalCollection = 0;
    char vehicleType[10];
    
    printf("Enter number of vehicles: ");
    scanf("%d", &n);
    
    printf("Enter vehicle types: ");
    for (int i = 0; i < n; i++) {
        scanf("%s", vehicleType);
        
        if (strcmp(vehicleType, "Car") == 0) {
            totalCollection += 50;
        } else if (strcmp(vehicleType, "Truck") == 0) {
            totalCollection += 100;
        } else if (strcmp(vehicleType, "Bike") == 0) {
            totalCollection += 20;
        } else {
            printf("Invalid vehicle type entered!\n");
            return 1;
        }
    }
    
    printf("Total Toll Collection: ₹%d\n", totalCollection);
    
    return 0;
}

