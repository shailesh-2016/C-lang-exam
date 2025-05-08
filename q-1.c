

#include<stdio.h>


int main(){
    int val1,val2;
    char operator;

    printf("Enter the value of val1: ");
    scanf("%d",&val1);
    printf("Enter the value of val2: ");
    scanf("%d",&val2);


    printf("enter the operator you want to perform (+, -, *, /): ");
    scanf(" %c",&operator);

    switch (operator)
    {
    case '+':
        printf("%d + %d = %d\n", val1, val2, val1 + val2);
        break;

        case '-':
        printf("%d - %d = %d\n", val1, val2, val1 - val2);
        break;

        case '*':
        printf("%d * %d = %d\n", val1, val2, val1 * val2);
        break;
        case '/':
        printf("%d / %d = %d\n", val1, val2, val1 / val2);
        break;
    
    default:
    printf("enter valid operator\n");
        break;
    }
}