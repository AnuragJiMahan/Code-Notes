//enter two values and swap them (interchange) a=5 b=10
/*#include<stdio.h>

int main(){
    int  a,b;
    printf("Enter the value of a\t");
    scanf("%d", &a); 
    printf("Enter the value of b\t");
    scanf("%d", &b);
    printf("Before swapping a=%d,b=%d\n", a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping a=%d,b=%d\n", a,b);
    return 0;
}*/

/* enter age of a person and print wheather he/she can vote or not 
#include<stdio.h>

int main(){
    int age;
    printf("Enter the age of a person\t");
    scanf("%d", &age);
    if (age>=18)
    {
        printf("They can vote");
    }
    else
    {
        printf("They cannot vote");
    }
    return 0;
}*/


/*enter a number and print wheather it is zero or non zero
#include<stdio.h>

int main(){
    int x ;
    printf("Enter number\t");
    scanf("%d", &x);
    if (x==0) 
    {
        printf(" it is zero");
    }
    else{
        printf(" it is non zero");
    }
    return 0;
}*/

/*wap to enter a number and print wheather it is even or odd*/

/*#include<stdio.h>

int main(){
    int x;
    printf("Enter number\t");
    scanf("%d", &x);
    if (x%2==0)
    {
        printf("it is even");
    }
    else{
        printf("it is odd");
    }
    return 0;
}*/


// enter roll number and five subject marks and print total marks , percentage and pass/fail


/*#include<stdio.h>

int main(){
    float roll,hindi,english,maths,social,science,total,percentage;
    printf("Enter roll\n");
    scanf("%f",& roll);
    
    printf("hindi\n");
    scanf("%f", &hindi);
    
    printf("english\n");
    scanf("%f", &english);
    
    printf("maths\n");
    scanf("%f", &maths);
    
    printf("social\n");
    scanf("%f", &social);
    
    printf("science\n");
    scanf("%f",&science);
    
    total =(hindi+english+maths+social+science);
    printf("Total marks%f\n",total);
    
    percentage = (total*100)/500;
    printf("percantage%f\n",percentage);
    if (percentage>=38)
    {
        printf("pass");
    }
    else{
        printf("fail");
    }
    return 0;
}
*/