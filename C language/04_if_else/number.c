/*Enter a number between 1 to 5 and print it in words
1 - ONE
2 - TWO
3 - THREE
4 - FOUR
5 - FIVE
anything else - invalid number*/

/*#include<stdio.h>

int main(){
    int Number;
    printf("Enter number =");
    scanf("%d", &Number);
    if (Number==1)
    {
       printf("ONE");
    }
    else if (Number==2)
    {
        printf("TWO");
    }
    else if (Number==3)
    {
        printf("THREE");
    }
    else if (Number==4)
    {
        printf("FOUR");
    }
    else if (Number==5)
    {
        printf("FIVE");
    }
    else
    {
        printf("invalid number");
    }
    
    return 0;
} */
/*
#include<stdio.h>

int main(){
    int Number;
    printf("Enter number =");
    scanf("%d",&Number);
    
    if (Number==1)
    { 
        printf("ONE");
    }
    if (Number==2)
    { 
        printf("TWO");
    }
    if (Number==3)
    {
        printf("THREE");
    }
    if (Number==4)
    {
        printf("FOUR");
    }
    if (Number==5)
    {
        printf("FIVE");
    }
    if (Number>5 || Number<0)
    {
        printf("invalid number");
    }
    return 0;
}

*/

/*wap to enter a no. betwen 1 to 7 and print its corresponding day*/
/*#include<stdio.h>

int main(){
    int Number;
    printf("Enter number =");
    scanf("%d", &Number);
    if (Number== 1)
    {
        printf("Sunday");
    }
    if (Number==2)
    {
        printf("Monday");
    }
    if (Number==3)
    {
        printf("Tuesday");
    }
    if (Number==4)
    {
        printf("Wednesday");
    }
    if (Number==5)
    {
        printf("Thursday");
    }
    if (Number==6)
    {
        printf("Friday");
    }
    if (Number==7)
    {
        printf("Saturday");
    }
    if(Number>7 || Number<1)
    {
        printf("invalid number");
    }
    return 0;
}

*/
/* enter 2 value print largest value*/
/*#include<stdio.h>

int main(){
    int x,y;
    printf("Enter first value = ");
    scanf("%d",& x);
    printf("Enter second value = ");
    scanf("%d",& y);
    if (x>y)
    {
        printf("largest value x=%d\n",x);
    }
    else
    {
        printf("largest value y=%d\n",y);
    }
    
    
    return 0;
}*/

/*#include<stdio.h>

int main(){
    int x,y,z;
    printf("Enter first value = ");
    scanf("%d",&x);
    printf("Enter second value =");
    scanf("%d",&y);
    z = x>y?x:y;
    printf("largest value =%d\n",z);
    return 0;
}
*/


/*enter 3 value print largest value*/ 
/*#include<stdio.h>

int main(){
    int a,b,c,x;
    printf("Enter value x =");
    scanf("%d",& a);
    printf("Enter value y =");
    scanf("%d",& b);
    printf("Enter value z =");
    scanf("%d",& c);
    x = a>b?(a>c?a:c):(b>c?b:c);
    printf("largest value =%d\n",x);
    return 0;
}
*/
/*#include<stdio.h>

int main(){
    int a,b,c,x,y,z;
    printf("Enter value x =");
    scanf("%d",& a);
    printf("Enter value y =");
    scanf("%d",& b);
    printf("Enter value z =");
    scanf("%d",& c);
     x = a>b?a:b;
     y = c>x?c:x;
    printf("largest value =%d\n",y);
    return 0;
}*/




