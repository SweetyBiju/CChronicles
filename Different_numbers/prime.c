//To print prime number between given numbers
//A prime number is one which has factors 1 and itself only
#include <stdio.h>

int main(){
    int num1,num2,flag;    //declaring variables
    
    printf("Enter the interval:");
    scanf("%d %d",&num1,&num2);  //user input to print till desired range
    printf("\nThe prime numbers in the range %d to %d are:\n",num1,num2);
    while (num1<=num2){  //loop terminates when num1>num2
        flag=0;          //flag variable
        if(num1<=1){     //numbers should be natural numbers
            num1++;
        }
        else{
            for(int i=2;i<=num1/2;i++){      
                if (num1%i==0){         //means the number can have another factor
                    flag=1;             //changing flag to 1
                    break;              //break the loop
                }
            }

        if (flag!=1){                //if flag==0
            printf("%d\n",num1);     //print the prime number
            }
        
        num1++;                      //increment num1 by 1
        }
    }
    

}