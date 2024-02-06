//To print prime number between given numbers

#include <stdio.h>

int main(){
    int num1,num2,flag;
    
    printf("Enter the interval:");
    scanf("%d %d",&num1,&num2);
    printf("\nThe prime numbers in the range %d to %d are:\n",num1,num2);
    while (num1<=num2){
        flag=0;
        if(num1<=1){
            num1++;
        }
        else{
            for(int i=2;i<=num1/2;i++){
                if (num1%i==0){
                    flag=1;
                    break;
                }
            }

        if (flag!=1){
            printf("%d\n",num1);
            }
        
        num1++;
        }
    }
    

}