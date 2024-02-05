//A Simple Calculator Program
//Showcases use of arithmetic operators
#include<stdio.h>

int main(){
    char op;
    double num1;
    double num2;
    double result;

    printf("Enter number 1: ");
    scanf("%lf",&num1);

    printf("Enter number 2: ");
    scanf("%lf",&num2);

    printf("Enter the operation you want to perform: ");
    scanf(" %c",&op);                                             /*a space before %c in the format specifier is added to consume any
                                                                  leading whitespace characters that might be present in the input buffer.*/

    if (op == '+'){
        result=num1+num2;
        printf("Result:%lf",result);
    }
    else if (op == '-'){
        result=num1-num2;
        printf("Result:%lf",result);
    }
    else if (op == '/'){
        result=num1/num2;
        printf("Result:%lf",result);
    }
    else if (op == '*'){
        result=num1*num2;
        printf("Result:%lf",result);
    }
    else if (op == '%'){
        result=(int)num1%(int)num2;
        printf("Result:%lf",result);
    }
    
    else{
        printf("Invalid operation");
    }

}