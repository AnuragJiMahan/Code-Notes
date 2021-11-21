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

//calculate area of triangle
/*#include<stdio.h>
int area(int i,int j)
{
    int a;
    a=(i*j)/2;
    return(a);
}
int main(){
    int l,h,x;
    printf("Enter length=");
    scanf("%d",&l);
    printf("Enter hight=");
    scanf("%d",&h);
    x=area(l,h);
    printf("Area of triangle=%d\n",x);
    return 0;
}*/

//calculate area of circle
/*#include<stdio.h>
float area(float i,float j)
{
    float a;
    a=j*i*i;
    return(a);
}
int main(){
    float p,r,x;
    printf("Enter radius=");
    scanf("%f",&r);
    p=3.14;
    x=area(r,p);
    printf("Area of circle=%.3f\n",x);
    return 0;
}*/

//calculate area of circle circumference
/*#include<stdio.h>
float area(float i,float j)
{
    float a;
    a=2*j*i;
    return(a);
}
int main(){
    float p,r,x;
    printf("Enter radius=");
    scanf("%f",&r);
    p=3.14;
    x=area(r,p);
    printf("Area of circle=%.3f\n",x);
    return 0;
}*/

// Enter x value and print factorial numbers
/*#include<stdio.h>
int factorial(int i)
{
    int f=1;
    while (i>=1)
    {
        f=f*i;
        i--;
    }
    return(f);
}
int main()
{
    int x,a;
    printf("Enter value of x=");
    scanf("%d",&x);
    a=factorial(x);
    printf("Factorial of %d",a);
    return 0;
}*/

//Enter 10 value in array and print sum with function
/*#include<stdio.h>
int add(int i[])
{
    int sum=0,j;
    for(j=0;j<=9;j++)
    {
        sum=sum+i[j];
    }
    return(sum);
}
int main()
{
    int a[10],b,k;
    printf("Enter 10 value in array=\n");
    for(b=0;b<=9;b++)
    {
        scanf("%d",&b[a]);
    }
    k=add(a);
    printf("Total sum=%d",k);
    return 0;
}*/

// 1-->all
// 2--->all;
// 3-->1 and 3;

//Enter 10 value in array and search value use with function
/*#include<stdio.h>
int search(int i[])
{
    int j,x,f=0;
    printf("Enter search value=");
    scanf("%d",&x);
    for(j=0;j<=9;j++)
    {
        if(i[j]==x)
        {
            f=1;
            break;
        }
    }
    return(f);
}
int main(){
    
    int a[10],b,k=0;
    printf("Enter 10 values in array=\n");
    for(b=0;b<=9;b++)
    {
        scanf("%d",&a[b]);
    }
    k=search(a);
    if(k==1)
    {
        printf("Element is found");
    }
    else
    {
        printf("Element is not found");
    }    
    return 0;
}*/

//Enter no. and print palindrome or not using with function 
/*#include<stdio.h>
int palindrome(int i)
{
    int x=0,r;
    for(i;i>0;i=i/10)
    {
        r=i%10;
        x=(x*10)+r;
    }
    return(x);
}
int main(){
    int a,b,z;
    printf("Enter No.=");
    scanf("%d",&a);
    b=a;
    z=palindrome(a);
    if(z==b)
    {
        printf("it is palindrome number");
    }
    else
    {
        printf("it is not palindrome number");
    }
    return 0;
}*/

//enter string and count vowels using functions;
/*#include<stdio.h>
#include<string.h>
int vowel(int j, char k[])
{
    int i,vc=0;
    for(i=0;i<=j-1;i++)
    {
        if(k[i]=='a'||k[i]=='e'|| k[i]=='i'|| k[i]=='o'|| k[i]=='u')
        {
            vc++;    
        }
    }
    return(vc);
}
int main(){
    int l=0,x;
    char b[20];
    printf("Enter sentences=");
    gets(b);
    l=strlen(b);
    x=vowel(l,b);
    printf("Total vowel=%d\n",x);
    return 0;
}*/

//factorial of x using recursion:
/*#include<stdio.h>


int factorial(int x){
    printf("Calling factorial(%d)\n", x);
    if(x==1 || x==0)
    {
        return 1;
    }
    else
    {
        return x * factorial(x-1);
    }
}

int main(){
    int a = 5;
    printf("The value of factorial %d is %d", a, factorial(a));
    return 0;
}*/

//print fibonacci series using recursion ;
/*#include<stdio.h>
int fibo(int a)
{
    // if(a==0)
    // {
    //     return 0;        
    // }
    if(a==1 || a==0)
    {
        return a;
    }
    else
    {
        return fibo(a-1) + fibo(a-2);
    }
    
}
int main(){
    int x,i;
    printf("Enter terms=");
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        printf("%d ",fibo(i));
    }
    return 0;
}*/


