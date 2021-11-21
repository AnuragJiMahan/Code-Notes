//3. Parameter no return function:

//calculate area of rectangle
/*#include<stdio.h>

int area(int x,int y)
{
    int a;
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

//calculate area of triangle
/*#include<stdio.h>
int area(int i,int j)
{
    int x;
    x=(i*j)/2;
    printf("Area of triangle=%d\n",x);
}
int main()
{
    int l,h;
    printf("Enter length=");
    scanf("%d",&l);
    printf("Enter hight=");
    scanf("%d",&h);
    area(l,h);
    return 0;
}*/

//calculate area of circle
/*#include<stdio.h>
int area(float i,float j)
{
    float x;
    x=j*i*i;
    printf("Area of circle=%.3f\n",x);
}
int main()
{
    float p,r;
    printf("Enter radius=");
    scanf("%f",&r);   
    p=3.14; 
    area(r,p);
    return 0;
}*/

//calculate area of circle circumference
/*#include<stdio.h>
int area(float i) // (float i,float p)
{
    float x,p;
    p=3.14;
    x=2*p*i;    //  x=2*p*r;
    printf("Area of circle circumference=%.3f\n",x);
}
int main()
{
    float r; // float r,p;
    printf("Enter radius=");
    scanf("%f",&r);
    area(r);  // area(r,p);
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
    printf("Factorial of %d",f);   
}
int main()
{
    int x;
    printf("Enter value of x=");
    scanf("%d",&x);
    factorial(x);
    return 0;
}*/

//Enter 10 value in array and print sum with function
/*#include<stdio.h>
int add(int j[])
{
    int sum=0,i;
    for(i=0;i<=9;i++)
    {
        sum=sum+j[i];
    }
    printf("Total sum=%d",sum);
}
int main()
{   
    int a[10],b,sum=0;
    printf("Enter 10 val/ue in array=\n");
    for(b=0;b<=9;b++)
    {
        scanf("%d",&b[a]);
    }
    add(a);
    return 0;
}*/

//Enter 10 value in array and search value use with function
/*#include<stdio.h>
int search(int j[])
{
    int f=0,i,x;
    printf("Enter search value=");
    scanf("%d",&x);
    for(i=0;i<=9;i++)
    {
        if(j[i]==x)
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
    int a[10],b,f=0;
    printf("Enter 10 value in array=");
    for(b=0;b<=9;b++)
    {
        scanf("%d",&a[b]);
    }
    search(a);
    return 0;
}*/

//table of x use with function
/*#include<stdio.h>
int table(int i)
{
    int j,k;
    for(j=1;j<=10;j++)
    {
        printf("%d\n",i*j);
    }
}
int main(){
    int b,x;
    printf("Enter table of x=\n");
    scanf("%d",&x);
    table(x);
    return 0;
}*/

//Enter no. and print palindrome or not using with function 
/*#include<stdio.h>
int palindrome(int i)
{
    int b,x=0,r;
    b=i;
    for(i;i>0;i=i/10)
    {
        r=i%10;
        x=(x*10)+r;
    }
    if(x==b)
    {
        printf("it is palindrome numbers");
    }
    else
    {
        printf("it is not palindrome numbers");
    }
    
}
int main(){
    int a,z;
    printf("Enter No.=");
    scanf("%d",&a);
    palindrome(a);
    return 0;
}*/

//enter ten values in array and interchange first five value to last five values using functino method
/*#include<stdio.h>
int interchange(int i[])
{
    int t,y;
    for(y=0;y<=4;y++)
    {
        t=i[y];
        i[y]=i[y+5];
        i[y+5]=t;
    }
    printf("After interchange of elements=\n");
    for(y=0;y<=9;y++)
    {
        printf("%d\n",i[y]);
    }
}
int main()
{
    int a[10],b,x,y;
    printf("Enter 10 value in array=\n");
    for(b=0;b<=9;b++)
    {
        scanf("%d",&a[b]);
    }
    interchange(a);
    return 0;
}*/

//enter string and count vowels using functions;
/*#include<stdio.h>
#include<string.h>
int vowel(int j,char k[])
{
    int i,vc=0;
    for(i=0;i<=j-1;i++)
    {
        if(k[i]=='a'|| k[i]=='e'|| k[i]=='i'|| k[i]=='o'|| k[i]=='u')
        {
            vc++;
        }
    }
    printf("Total vowel=%d\n",vc);
}
int main(){
    int l=0;
    char b[20];
   ;; printf("Enter sentence=");
    gets(b);
    l=strlen(b);
    vowel(l,b);
    return 0;
}*/

//Enter string and print reverse string with using function
/*#include<stdio.h>
#include<string.h>
int reverse(int j, char i[])
{   
    int a;
    for(a=j-1;a>=0;a--)
    {
        printf("%c",i[a]);
    }
}
int main()
{
    int l=0;
    char b[20];
    printf("Enter string=");
    gets(b);
    l=strlen(b);
    reverse(l,b);
    return 0;
}*/

//enter string and count --->total space, words, vowel, conentes , digits and symbols;
/*#include<stdio.h>
#include<string.h>
int count(int j,char k[])
{   
    int i,sc=0,vc=0,cc=0,dc=0,syc=0;
    for(i=0;i<=j-1;i++)
    {
        if(k[i]>=48 && k[i]<=57)
        {
                dc++;
        }
        else if(k[i]==' ')
        {
            sc++;
        }
        else if(k[i]=='a'|| k[i]=='e' || k[i]=='i' || k[i]=='o' || k[i]=='u')
        {
            vc++;
        }        
        else if (k[i]>=97 && k[i]<=122)
        {
            cc++;
        }
        else
        {
            syc++;
        }
    }
    printf("total count=%d\n",j);
    printf("total space=%d\n",sc);
    printf("total words=%d\n",sc+1); 
    printf("total vowel=%d\n",vc);
    printf("total consonant=%d\n",cc);
    printf("Total Digit=%d\n",dc);
    printf("total symbols=%d\n",syc);
}
int main(){
    int x,l=0;
    char b[20];
    printf("Enter string=");
    gets(b);
    l=strlen(b);
    x=count(l,b);
    return 0;
}*/

//Enter two value and swap with function 
/*#include<stdio.h>
int swap(int x,int y)
{
    x=x+y;
    y=x-y;
    x=x-y;
    printf("After swapping a=%d,b=%d\n", x,y);
}
int main(){
    int a,b,i;
    printf("Enter first value(a)=");
    scanf("%d",&a);
    printf("Enter second value(b)=");
    scanf("%d",&b);
    i=swap(a,b);
    return 0;
}*/