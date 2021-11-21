/*//enter two values and print largest

#include<stdio.h>

int main(){
    int x,y;
    printf("Enter the value of x\t");
    scanf("%d",&x);
    printf("Enter the value of y\t");
    scanf("%d",&y);
    if (x>y)
    {
        printf("largest is value%d\t",x);
    }
    else
    {
        printf("largest is value%d\t",y);
    }
    return 0;
}*/

/*#include<stdio.h>

int main(){
    int x;
    printf("Enter number");
    scanf("%d",&x);
    if(x>0)
    {
        printf("number is positive\n");
    }

    else{
        if(x<0)
        {
        printf("number is negative\n");
       }
       else
       {
           printf("zero");
       }
    } 
    return 0;
}*/

/*enter qty ,rate print payable amt as follow    
    qty > 1000  10%
    500 - 1000  5%
        <500    2%*/
/*#include<stdio.h>

int main(){
    int qty ,amount,payableamt,discount;
    printf("Enter qty\t");
    scanf("%d",&qty);
    printf("Enter amount\t");
    scanf("%d",&amount);
    if (qty>1000)
    {
        discount = qty*amount*.10;
    }
    else{
        if (qty>500)
        {
            discount = qty*amount*.05;
        }
        else{
            discount = qty*amount*.02;
        }
    }
    payableamt = qty*amount-discount;
    printf("Please pay rs %d",payableamt);
    return 0;
}*/



