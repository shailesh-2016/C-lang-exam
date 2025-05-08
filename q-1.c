#include<stdio.h>
int main(){
    int value1,value2;
    int operator;

    printf("enter value1 : ");
    scanf("%d",&value1)
    printf("enter value2 : ");
    scanf("%d",&value2)

    printf("enter any operator +,-,%,/ : ");
    scanf("%d",&operator);

    switch(operator){
        case "+":
            printf("%d + %d : "value1,value2,value1 + value2);
            break; 
        case "-":
            printf("%d - %d : "value1,value2,value1 - value2);
            break; 
        case "%":
            printf("%d % %d : "value1,value2,value1 % value2);
            break; 
        case "/":
            printf("%d / %d : "value1,value2,value1 / value2);
            break; 
        
    }



}