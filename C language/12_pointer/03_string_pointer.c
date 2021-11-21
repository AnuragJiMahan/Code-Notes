//Enter two value and swap with function in pointer
//call by value:- jab actual parameter ki value ko formal parameter mein store karai jati h 
//call by reference:- jab actual parameter mein address pass kiya jata hai or pointer se formal parameter mein receive kiya jata hai.
/*#include<stdio.h>
int swap(int *x,int *y)
{
    int j;
    j=*x;
    *x=*y;
    *y=j;
    printf("After swapping a=%d,b=%d\n", *x,*y);
}
int main(){
    int a,b;
    printf("Enter first value(a)=");
    scanf("%d",&a);
    printf("Enter second value(b)=");
    scanf("%d",&b);
    swap(&a,&b);
    return 0;
}*/

//Enter string and print reverse with pointer
/*#include<stdio.h>
#include<string.h>
int main(){
    int l,i,x;
    char b[20],*a;
    printf("Enter string=");
    gets(b);
    a=&b[0];
    l=strlen(b);
    a=a+l-1;
    for(i=l-1;i>=0;i--)
    {
        printf("%c",*a);
        a--;
    }
    return 0;
}*/

//Enter string and count vowel using pointer
/*#include<stdio.h>
#include<string.h>
int main(){
    int x,l,i,vc=0;
    char b[20],*p;
    printf("Enter string=");
    gets(b);
    p=&b[0];
    l=strlen(b);
    p=&b[0];
    for(i=0;i<=l-1;i++)
    {
        if(*p=='a' || *p=='e' || *p=='i' || *p=='o' || *p=='u')
        {
            vc++;
        }
        p++;
    }
    printf("Total vowel=%d",vc);
    return 0;
}*/

//Enter string and count vowel using pointer with function
/*#include<stdio.h>
#include<string.h>
int vowal(char *j, int k)
{
    int i,vc=0;
    for(i=0;i<=k-1;i++)
    {
        if(*j=='a' || *j=='e' || *j=='i' || *j=='o' || *j=='u')
        {
            vc++;
        }
        j++;
    }
    return(vc);
}
int main()
{
    int x,l,e;
    char b[20],*p;
    printf("Enter string=");
    gets(b);
    p=&b[0];
    l=strlen(b);
    p=&b[0];
    e=vowal(p,l);
    printf("Total vowel=%d",e);    
    return 0;
}*/

//Enter string B-->RAM ,and print A-->RAM (copy) 
/*#include<stdio.h>
#include<string.h>
int main(){
    int l=0,i;
    char b[20],*p,*x;
    printf("Enter string=");
    gets(b);
    l=strlen(b);
    p=&b[0];
    for(i=0;i<=l-1;i++)
    {
        x=p;
        p++;
        x++;
    }
    x=&b[0];
    for(i=0;i<=l-1;i++)
    {
        printf("%c",*x);
        x++;
    }
    return 0;
}*/