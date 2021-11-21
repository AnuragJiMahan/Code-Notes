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

//calculate area of triangle
/*#include<stdio.h>

int area()
{
    float l,h,x;
    printf("Enter length=");
    scanf("%f",&l);
    printf("Enter hight=");
    scanf("%f",&h);
    x=(l*h)/2;
    return(x);
}
int main()
{
    float i;
    i=area();
    printf("Area of triangle=%.3f\n",i);
    return 0;
}*/

//calculate area of circle
/*#include<stdio.h>
float area()
{
    float p,r,x;
    printf("Enter radius=");
    scanf("%f",&r);
    p=3.14;
    x=p*r*r;
    return(x);
}
int main(){
    float i;
    i=area();
    printf("Area of circle=%.3f\n",i);
    return 0;
}*/

//calculate area of circle circumference
/*#include<stdio.h>
float area()
{
    float p,r,x;
    printf("Enter radius=");
    scanf("%f",&r);
    p=3.14;
    x=2*p*r;
    return(x);
}
int main()
{
    float i;
    i=area();
    printf("Area of circle circumference=%.3f\n",i);
    return 0;
}*/

// Enter x value and print factorial numbers
/*#include<stdio.h>
int factorial()
{
    int f=1,x;
    printf("Enter value of x=");
    scanf("%d",&x);
    while (x>=1)
    {
        f=f*x;
        x--;
    }
    return(f);
}
int main(){
    int i;
    i=factorial();
    printf("factoril of %d",i);
    return 0;
}*/

//Enter 10 value in array and print sum with function
/*#include<stdio.h>
int add()
{
    int a[10],b,sum=0;
    printf("Enter 10 value in array=\n");
    for(b=0;b<=9;b++)
    {
        scanf("%d",&b[a]);
    }
    printf("Now then 10 value in array\n");
    for(b=0;b<=9;b++)
    {
        sum=sum+b[a];
    }
    return(sum);
}
int main()
{
    int i;
    i=add();
    printf("Total sum=%d",i);    
    return 0;
}*/

//Enter 10 value in array and search value use with function
/*#include<stdio.h>
int search()
{
    int a[10],b,x,f;
    printf("Enter 10 value in array=\n");
    for(b=0;b<=9;b++)
    {
        scanf("%d",&b[a]);
    }
    printf("Enter search element=");
    scanf("%d",&x);
    f=0;
    for(b=0;b<=9;b++)
    {
       if(b[a]==x)
       {
           f=1;
           break;
       }
    }
    return(f);
}
int main(){
    int i=0;
    i=search();
    if(i==1)
    {
        printf("Element is found");
    }
    else
    {
        printf("Element is not found");
    }
    return 0;
}*/

//Enter no. and print palindrome or not using with return function 
/*#include<stdio.h>
int palindrome()
{
    int a,x=0,r,b,f=0;
    printf("Enter No.=");
    scanf("%d",&b);

    for(a=b;a>0;a=a/10)
    {
        r=a%10;
        x=(x*10)+r;
    }
    if (x==b)
    {
        f=1;
    }
    else
    {
        f=0;
    }
    return(f);
}
int main()
{
    int i=0;
    i=palindrome();
    if(i==1)
    {
        printf("it is palindrome numbers");
    }
    else
    {
        printf("it is not palindrome numbers");
    }
    return 0;
}*/

//enter string and count vowels using functions;
/*#include<stdio.h>
#include<string.h>
int vowel()
{
    int l=0,i,vc=0;
    char b[20];
    printf("Enter sentences=");
    gets(b);
    l=strlen(b);
    for(i=0;i<=l-1;i++)
    {
       if(b[i]=='a'|| b[i]=='e'|| b[i]=='i'|| b[i]=='o'|| b[i]=='u')
       {
           vc++;
       } 
    }
    return(vc);
}
int main(){
    int x;
    x=vowel();
    printf("Total vowel=%d\n",x);
    return 0;
}*/