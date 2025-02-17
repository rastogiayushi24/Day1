#include <stdio.h>
#include<string.h>


int main() {
    char vehicleType[10];
    int distance;
    float baseCharge, totalTax, discount = 0;
    
    printf("Enter Vehicle Type: ");
    scanf("%s", vehicleType);
    printf("Enter Distance Traveled: ");
    scanf("%d", &distance);
    
    if (strcmp(vehicleType, "Car") == 0) {
        baseCharge = 5 * distance;
    } else if (strcmp(vehicleType, "Truck") == 0) {
        baseCharge = 10 * distance;
        if (distance > 500) {
            discount = 0.10 * baseCharge; 
        }
    } else if (strcmp(vehicleType, "Bus") == 0) {
        baseCharge = 8 * distance;
        if (distance > 300) {
            discount = 0.05 * baseCharge; 
        }
    } else {
        printf("Invalid Vehicle Type!\n");
        return 1;
    }
    
    totalTax = baseCharge - discount;
    
    // Displaying results
    printf("\nVehicle Type: %s\n", vehicleType);
    printf("Distance Traveled: %d km\n", distance);
    printf("Base Charge: ₹%.2f\n", baseCharge);
    printf("Discount: ₹%.2f\n", discount);
    printf("Total Toll Tax: ₹%.2f\n", totalTax);
    
    return 0;
}
