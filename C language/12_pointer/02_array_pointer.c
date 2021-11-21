//enter ten values in array and print in all values using pointer;
/*#include<stdio.h>

int main(){
    int b[20],a,*x;
    x=&b[0];
    printf("Enter 10 value in array=\n");   
    for(a=0;a<=9;a++)
    {
        scanf("%d",x);
        x++;
    }
    x=&b[0];
    printf("value in array:\n");
    for(a=0;a<=9;a++)
    {
        printf("%d\n",*x);
        x++;
    }
    return 0;
}*/

//Enter ten value in array and print their sum;
/*#include<stdio.h>

int main(){
    int a[20],b,*p,sum=0;
    printf("Enter ten vlaue in array=\n");
    p=&a[0];
    for(b=0;b<=9;b++)
    {
        scanf("%d",p);
        p++;
    }
    p=&a[0];
    printf("Now ten value in array=\n");
    for(b=0;b<=9;b++)
    {
        printf("%d\n",*p);
        sum=sum+*p;
        p++;
    }
    printf("Sum =%d",sum);
    return 0;
}*/

//Enter ten value in array and search a value;
/*#include<stdio.h>

int main(){
    int a[20],b,f,*p,x;
    printf("Enter 10 value in array=\n");
    p=&a[0];
    for(b=0;b<=9;b++)
    {
        scanf("%d",p);
        p++;
    }
    printf("Enter search element=");
    scanf("%d",&x);
    p=&a[0];

    for(b=0;b<=9;b++)
    {
        if(*p==x)
        {
            f=1;
            break;
        }
        p++;
    }
    if(f==1)
    {
        printf("Element is %d found",x);
    }
    else
    {
        printf("Element is %d not found",x);
    }
    return 0;
}*/

//      aadura question

//Enter ten values in array and insert a new no. ;
/*#include<stdio.h>
int main(){
    int a[11],b,*p,x,y,i;
    printf("Enter 10 value in array=\n");
    p=&a[0];
    for(b=0;b<=9;b++)
    {
        scanf("%d",p);
        p++;
    }
    printf("Insert new number=");
    scanf("%d",&x);
    printf("Enter position=");
    scanf("%d",&y);

    printf("Insert element after in array=\n");
    for(b=9;b<=y-1;b--)
    {
        *p++=*p;
        p--;
    }

    *p--=x;
    p=&a[0];
    for(b=0;b<=10;b++)
    {
        printf("%d\n",*p);
        p++;
    }
    return 0;
}*/

//enter ten values in array and print their sum with function and pointer;
/*#include<stdio.h>
int add(int *y)
{
    int j,sum=0;
    for(j=0;j<=9;j++)
    {
        sum=sum+*y;
        y++;
    }
    return(sum);
}
int main(){
    int a[10],b,*p,x;
    printf("Enter 10 values in array=\n");
    p=&a[0];
    for(b=0;b<=9;b++)
    {
        scanf("%d",p);
        p++;
    }
    p=&a[0];
    x=add(p);
    printf("sum=%d",x);
    return 0;
}*/


