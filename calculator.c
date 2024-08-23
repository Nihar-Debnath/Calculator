#include <stdio.h>
int main()
{
    float num1, num2;
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the Second number: ");
    scanf("%f", &num2);

    char choice;
    printf("Which Operation do you want to perform!\n");
    printf("1. Addidionn\n");
    printf("2. Substraction\n");
    printf("3. Multliplication\n");
    printf("4. Divide\n");
    printf("Enter the operation serial number: ");
    scanf("%s", &choice);

    switch (choice)
    {
    case '1':
        printf("The Result is: %f",num1+num2);
        break;
    case '2':
        printf("The Result is: %f",num1-num2);
        break;
    case '3':
        printf("The Result is: %f",num1*num2);
        break;
    case '4':
        if(num2==0){
            printf("Second number cannot be zero!");
        }else{
            printf("The Result is: %f",num1/num2);
        }
        break;
    default:
    printf("Enter the correct serial number!");
        break;
    }
    return 0;
}