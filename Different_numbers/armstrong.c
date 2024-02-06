//Armstrong number is a number that is equal to the sum of cubes of its digits.
//153= 1^3+5^3+3^3=1+125+27

#include <stdio.h>
int main(){
    int org_num,check_num,d,sum; //declaring variables
    sum=0; //initialising sum to 0
    printf("Enter the number you want to check:");
    scanf(" %d",&org_num); //taking user input for the number he wants to check
    check_num=org_num; //duplicating the original number to use in loop without losing the original number
    while(check_num!=0){ //loop runs until check_num is not equal to 0
        d=check_num%10;  //extracting digits from the number
        sum+=(d*d*d);   //adding the cube of digit to variable sum
        check_num/=10;  //dividing to remove the already used digit

     }
    if (sum==org_num){  //check to see if the number is equal to the cube of its digits
        printf("%d is an Armstrong number",org_num);
    }
    else{
        printf("%d is not an Armstrong number",org_num);
    }

}
