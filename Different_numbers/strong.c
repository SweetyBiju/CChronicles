//A strong number is one which is equal to sum of factorial of its digit
//145=1!+4!+5!=1+24+120

#include <stdio.h>
int fact(int digit){            //Function to find factorial of digit
    int f=1;
    for (int i=1;i<=digit;i++){
        f*=i;
    }
    
    return f;                  //Returns factorial
}
int main(){
    int org_num,check_num,sum,d;  //declaring variables
    sum=0;
    printf("Enter the number you want to check:");
    scanf(" %d",&org_num);        //user input for the number he wants to check
    check_num=org_num;
    while(check_num!=0){ 
        d=check_num%10;            //extracting digits
        sum+=fact(d);               //calling fact function on the digit and adding it to sum
        check_num/=10;               //dividing num by 10 to remove alrready used digit

    }
    
    if (sum==org_num){               //check whether sum is equal to original number or not
        printf("%d is a strong number",org_num);
    }
    else{
        printf("%d is not a strong number",org_num);
    }



}