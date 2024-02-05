//SWAP TWO NUMBERS WITHOUT A THIRD VARIABLE
#include <stdio.h>

int main(){
    int num1,num2;
    printf("Enter a number:");
    scanf("%d %d",&num1,&num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("You entered %d %d",num1,num2);
    return 0;

}