#include <stdio.h>

int main() {
    int salary, creditScore, experience;
  
    printf("Enter Salary: ");
    scanf("%d", &salary);
    printf("Enter Credit Score: ");
    scanf("%d", &creditScore);
    printf("Enter Experience (Years): ");
    scanf("%d", &experience);
  
    if (salary >= 30000 && creditScore >= 750 && experience >= 2) {
        printf("Loan approved\n");
    } else {
        printf("Loan denied\n");
    }
    
    return 0;
}

