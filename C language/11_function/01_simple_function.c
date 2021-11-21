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

//calculate area of triangle
/*#include<stdio.h>
int area()
{
    int l,h,x;
    printf("Enter lenght=");
    scanf("%d",&l);
    printf("Enter hight=");
    scanf("%d",&h);
    x=(l*h)/2;
    printf("Area of triangle=%d\n",x);
}
int main()
{
    area();
    return 0;
}*/

//calculate area of circle
/*#include<stdio.h>
int area()
{
    float r,x,p;
    printf("Enter radius=");
    scanf("%f",&r);
    p=3.14;
    x=p*r*r;
    printf("Area of circle=%.3f\n",x);
}
int  main()
{
    area();
    return 0;
}*/

//calculate area of circle circumference
/*#include<stdio.h>
int area()
{
    float r,x,p;
    printf("Enter radius=");
    scanf("%f",&r);
    p=3.14;
    x=2*p*r;
    printf("Area of circle circumference=%.3f\n",x);
}
int main()
{
    area();    
    return 0;
}*/

// Enter x value and print factorial numbers
/*#include<stdio.h>
int factoril()
{
    int f=1,x;
    printf("Enter value of x=");
    scanf("%d",&x);
    while(x>=1)
    {
        f=f*x;
        x--;
    }
    printf("Factoril of %d",f);
}
int main(){
    factoril();
    return 0;
}*/

//Enter 10 value in array and print sum
/*#include<stdio.h>
int add()
{
    int a[10],sum=0,b;
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
    printf("Total sum =%d",sum);
}
int main(){
    add();
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
    for(b=0;b<=9;b++)
    {
       if(b[a]==x)
       {
           f=1;
           break;
       }
    }
    if(f==1)
    {
        printf("Element is %d found",x);
    }
    else
    {
        printf("Element is %d not found",x);
    }
}
int main(){
    search();
    return 0;
}*/

//table of x use with function
/*#include<stdio.h>
int table()
{
    int x,j;
    printf("Enter table of x=\n");
    scanf("%d",&x);
    for(j=1;j<=10;j++)
    {
        printf("%d\n",x*j);
    }
}
int main(){
    table();
    return 0;
}*/

//Enter no. and print palindrome or not using with function 
/*#include<stdio.h>
int palindrome()
{
    int a,x=0,r,b;
    printf("Enter No.=");
    scanf("%d",&a);
    b=a;
    for(a;a>0;a=a/10)
    {
        r=a%10;
        x=(x*10)+r;
    }
    if(x==b)
    {
        printf("it is palinfrome number");
    }
    else
    {
        printf("it is not palindrome number");
    }
}
int main(){
    palindrome();
    return 0;
}*/

//enter ten values in array and interchange first five value to last five values using functino method
/*#include<stdio.h>
int interchange()
{
    int a[10],b,t;
    printf("Enter 10 element in array:\n");
    for(b=0;b<=9;b++)
    {                                                    
        scanf("%d",&a[b]);                              
    }
    printf("Before interchange of elements=\n");
    for(b=0;b<=4;b++)
    {
        t=a[b];//t=2
        a[b]=a[b+5];//a[b]=6
        a[b+5]=t;
    }
    printf("After interchange of elements=\n");
    for(b=0;b<=9;b++)
    {
        printf("%d\n",a[b]);
    }
}
int main(){
    interchange();
    return 0;
}*/

//enter string and count vowels using functions;
/*#include<stdio.h>
#include<string.h>
int vowel()
{
    int l=0,x,vc=0,i;
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
    printf("Total vowel=%d\n",vc);
}
int main(){
    vowel();
    return 0;
}*/

//Enter string and print reverse string with using function
/*#include<stdio.h>
#include<string.h>
int reverse()
{  
    int a,l=0;
    char b[20];
    printf("Enter string=");
    gets(b);
    l=strlen(b);
    for(a=l-1;a>=0;a--)
    {
        printf("%c",b[a]);
    }
}
int main(){
    reverse();
    return 0;
}*/

//enter string and count --->total space, words, vowel, conentes , digits and symbols;
/*#include<stdio.h>
#include<string.h>
int count()
{
    int i,l=0,count=0,sc=0,vc=0,cc=0,dc=0,j,syc=0;
    char b[20];
    printf("Enter string=");
    gets(b);
    l=strlen(b);
    printf("total count=%d\n",l); 
    for(i=0;i<=l-1;i++)
    {
        if(b[i]>=48 && b[i]<=57)
        {
                dc++;
        }
        else if(b[i]==' ')
        {
            sc++;
        }
        else if(b[i]=='a'|| b[i]=='e' || b[i]=='i' || b[i]=='o' || b[i]=='u')
        {
            vc++;
        }        
        else if (b[i]>=97 && b[i]<=122)
        {
            cc++;
        }
        else
        {
            syc++;
        }
    }
    printf("total space=%d\n",sc);
    printf("total words=%d\n",sc+1); 
    printf("total vowel=%d\n",vc);
    printf("total consonant=%d\n",cc);
    printf("Total Digit=%d\n",dc);
    printf("total symbols=%d\n",syc);
}
int main(){
    count();
    return 0;
}*/
