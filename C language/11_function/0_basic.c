/*
function:- Function are two type in c;
1. library function --> printf(),clrscr(),gets()...
2. user difine function :
    user define function are four type in c;
    1. simple function 
    2. return function 
    3. parameter no return function 
    4. parameter with return function 
*/
// 4===>all
// 3--->1,3


//1. simple function :

//calculate area of rectangle
/*#include<stdio.h>

int area()
{
    int l,b,a;
    printf("Enter length=");
    scanf("%d",&l);
    printf("Enter breath=");
    scanf("%d",&b);
    a=l*b;
    printf("Area of rectangle=%d\n",a);
}
int main()
{
    area();
    area();// 2 times run for this code 
    return 0;
}*/

//2. Return function

//calculate area of rectangle
/*#include<stdio.h>

int area()
{
    int l,b,a;
    printf("Enter length=");
    scanf("%d",&l);
    printf("Enter breath=");
    scanf("%d",&b);
    a=l*b;
    return(a);
}
int main()
{
    int k;
    k=area();
    printf("Area of rectangle=%d\n",k);
    return 0;
}*/

//3. Parameter no return function:

//calculate area of rectangle
/*#include<stdio.h>

int area(int x,int y)
{
 /   int a;
    a=x*y;
    printf("Area of rectangle=%d\n",a);
}
int main()
{
    int l,b;
    printf("Enter length=");
    scanf("%d",&l);
    printf("Enter breath=");
    scanf("%d",&b);
    area(l,b);
    return 0;
}*/

//4. parameter with return function

//calculate area of rectangle
/*#include<stdio.h>

int area(int x,int y)
{
    int a;
    a=x*y;
    return(a);
}
int main()
{
    int l,b,k;
    printf("Enter length=");
    scanf("%d",&l);
    printf("Enter breath=");
    scanf("%d",&b);
    k=area(l,b);
    printf("Area of rectangle=%d\n",k);
    return 0;
}*/