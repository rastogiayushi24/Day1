#include<stdio.h>
int main()
{
    char name[200];
    int id;
    int units;
    float fixedCharge,totalBill,surcharge;

    printf("Enter the customer name:\n");
    scanf("%s",name);
    printf("Enter customer id:\n");
    scanf("%d",&id);
    printf("Enter the units consumed:\n");
    scanf("%d",&units);
    
    fixedCharge = 100;

    if(units<=100)
    {
        fixedCharge = units*5;
    }
    else if(units<=300)
    {
        fixedCharge = fixedCharge+(100*5)+(units-100)*7;
    }
    else 
    {
     fixedCharge = fixedCharge + (100*5)+(200*7)+((units - 300)*10);
    }
    if (fixedCharge > 1000) {
      surcharge = fixedCharge * 0.05; 
  }

  totalBill = fixedCharge + surcharge;
  
    printf("\nCustomer Name: %s\n", name);
    printf("Customer ID: %d\n", id);
    printf("Units Consumed: %d\n", units);
    printf("Base Bill: ₹%.2f\n", fixedCharge);
    printf("Surcharge: ₹%.2f\n", surcharge);
    printf("Total Bill: ₹%.2f\n", totalBill);

    return 0;

}
