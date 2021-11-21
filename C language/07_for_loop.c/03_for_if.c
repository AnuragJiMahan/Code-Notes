// enter 10 value and print even value of count
/*#include<stdio.h>
int main(){
    int a,b,count=0;
    for(a=1;a<=10;a++)
    {
        scanf("%d",&b);
        if(b%2==0)
        {
        count=count+1;
        }
    }
    printf("count is=%d\n",count);
    return 0;
}*/

// enter 10 value and print even value of sum
/*#include<stdio.h>

int main(){
    int a,b,sum=0;
    for(a=1;a<=10;a++)
    {
        scanf("%d",&b);
        if(b%2==0)
        {
            sum=sum+b;
        }
    }
    printf("sum is =%d\n",sum);
    return 0;
}*/

// enter 10 value and print odd value of sum
/*#include<stdio.h>

int main(){
    int a,b,sum=0;
    for(a=1;a<=10;a++)
    {
        scanf("%d",&b);
        if(b%2==1)
        {
            sum=sum+b;
        }
    }
    printf("sum is =%d\n",sum);
    return 0;
}*/

//enter 10 value and print negative ,positive value count(x,y)
/*#include<stdio.h>

int main(){
    int a,b,x=0,y=0;
    for(a=1;a<=10;a++)
    {
        scanf("%d",&b);
        if(b<0)
        {
            x=x+1;
        }
        if (b>0)
        {
            y=y+1;
        }
    }
    printf("Negative count is =%d\n",x);
    printf("positive count is =%d\n",y);
    return 0;
}*/

//Enter 10 value and print largest value
/*#include<stdio.h>

int main(){
    int a,b,c=0;
    for(a=1;a<=10;a++)
    {
        scanf("%d",&b);
        if(b>c)
        {
        c=b;
        }
    }
    printf("Largest value is=%d\n",c);
    return 0;
}*/

//Enter 10 value and print smallest value
/*#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d",&b);
    c=b;
    for(a=1;a<=10;a++)
    {
        scanf("%d",&b);
        if(c>b)
        {
        c=b;
        }
    }
    printf("Smallest value is=%d\n",c);
    return 0;
}*/

//find no. 15 factor and print them
/*#include<stdio.h>

int main(){
    int a,b=15;
    printf("The factor 15 of :\n");
    for(a=1;a<=15;a++)
    {
        if(b%a==0)
        printf("%d ",a);
    }
    return 0;
}*/


//enter number and print factor value 
/*#include<stdio.h>

int main(){
    int num,a,count=0;
    printf("Enter the number=");
    scanf("%d",&num);
    printf("The factor of %d are:\n",num);
    for(a=1;a<=num;a++)
    {
        if(num%a==0)
        {
            printf("%d ",a);
        }
    }
    return 0;
}*/

//enter a no. and sum of all factors;
/*#include<stdio.h>

int main(){
    int a,b,sum=0;
    printf("Enter no.=");
    scanf("%d",&b);
    for(a=1;a<=b;a++)
    {
        if(b%a==0)
        {
            printf("%d \n",a);
            sum=sum+a;
        }
    }
    printf("sum is=%d\n",sum);
    return 0;
}*/

//enter a no. and print no. is perfect or not 6 = 1+2+3=6 28=1+2+4+7+14=28
/*#include<stdio.h>

int main(){
    int a,b,sum=0;
    printf("Enter no.=");
    scanf("%d",&b);
    for(a=1;a<b;a++)
    {
        if(b%a==0)
        {
            sum=sum+a;
        }
    }
        if(sum==b)
        {
            printf("number is perfect\n");
        }
        else
        {
            printf("number is not perfect\n");
        }    
    return 0;
}*/

//enter a no. and print no. is prime or not prime
/*#include<stdio.h>

int main(){
    int a,b,f=0;
    printf("Enter no.=");
    scanf("%d",&b);//12
    for(a=2;a<b;a++)
    {
        if(b%a==0)
        {
            f=1;
            break;
        }
    }   
        if(f==0)
        {
            printf("it is prime no.\n");
        }
        else
        {
            printf("it is not prime no.\n");
        }
    return 0;
}*/

//Enter number and print reverse number and find largest value , smallest value difference 1578-->8751-->8-1=7 
/*#include<stdio.h>

int main(){
    int a,r,x=0,y=0;
    printf("Enter number=");
    scanf("%d",&a);
    printf("Reverse number of %d is=\n",a);
    for(a;a>0;a=a/10)
    {
        r=a%10;
        printf("%d",r);
        if(r>x)
        {
            x=r;
        }
        if(r<y)
        {
            r=y;
        }
    }   
    printf("\nlargest value is =%d\n",x);
    printf("smallest value is =%d\n",r);
    printf("Difference between largest,smallest value is=%d\n",x-r);
    return 0;
}*/

//Enter no. and print no. is palindrome or not;
//123     321 no. is not palindrome
//121     121 no. is palindrome;
/*#include<stdio.h>

int main(){
    int a,r,x=0,b;
    printf("Enter no.=");
    scanf("%d",&a);
    b=a;
    for(a;a>0;a=a/10)
    {
        r=a%10;
        x=(x*10)+r;
    }   
        if(x==b)
        { 
            printf("it is palindrome number");
        }
        else     
        {
            printf("it is not palindrome number");
        }
    return 0;
}*/

//enter a no. and print no. is armstrong or not;
//371   armstrong;
//3^3=27
//7^3=343
//1^3=1
//371
/*#include<stdio.h>
#include<math.h>

int main(){
    int a,r,sum=0,x;
    printf("Enter armstrong no.=");
    scanf("%d",&a);
    for(x=a;a!=0;a=a/10)
    {
        r=a%10;
        sum=sum+pow(r,3);
    }
        if(sum==x)
        {
            printf("it is armstrong number");
        }
        else
        {
            printf("it is not armstrong number");
        }
    return 0;
}*/

/*#include<stdio.h>
#include<math.h>
int main(){
    int a,r,sum=0,count=0,x,p,y,f;
    printf("Enter armstrong no.=");
    scanf("%d",&a); // 371
    y=a;//y=371
    while(y>0)
    {
        count++; //c=3
        y=y/10; 
    }
    
    for(x=a;a!=0;a=a/10)
    {
        r=a%10;//r=1
        f=1;//f=1
        p=count;// p=3
            while(p>=1)
            {
                 f=f*r;//1*1=1
                p--;
            }
    sum=sum+f;
    }
    if(sum==x)
    {
        printf("it is armstrong");
    }
    else
    {
        printf("it is not armstrong");
    }
    return 0;
}*/


//1 to x print perfect no. and count 
/*#include<stdio.h>

int main(){
    int a,b,x,sum,count=0;
    printf("Enter last value=");
    scanf("%d",&x);
    for(a=1;a<=x;a++)
    {
        sum=0;
        for(b=1;b<a;b++) 
        {
            if(a%b==0)
            {
                sum=sum+b;
            }
        }
        if(sum==a)
        {
            count++;
            printf("Perfect no.=%d\n",sum);

        }
    }
    printf("count is=%d\n",count);
    return 0;
}*/

//enter no. 1 to x and  print no. is prime and count them 
/*#include<stdio.h>

int main(){
    int a,b,x,sum=0,count=0,f;
    printf("Enter last value=");
    scanf("%d",&x);
    for(a=2;a<=x;a++)
    {
        f=0;
        for(b=2;b<a;b++)
        {
            if (a%b==0)
            {
                f=1;
                break;
            }
             
        }
        if (f==0)
        {
            count++;
            printf("prime no. is=%d\n",a);
        }
    }
    printf("count is =%d\n",count);
    return 0;
}*/

//1 to x and print no. is palindrome count;
//123     321 no. is not palindrome
//121     121 no. is palindrome;
/*#include<stdio.h>

int main(){
    int a,b,r,x,y,count=0,i;
    printf("Enter last value=");
    scanf("%d",&x);
    for(a=1;a<=x;a++)
    {
        y=0;
        for(i=a;i>0;i=i/10)
        {
            r=i%10;
            y=(y*10)+r;
        }
        if(y==a)
        {
            count=count+1;
            printf("palindrome no. is=%d\n",y);
        }
    }
    printf("count is=%d\n",count);
    return 0;
}*/


//enter 1 to x and print no. is armstrong or count them;
//371   armstrong;
//3^3=27
//7^3=343
//1^3=1
//371
/*#include<stdio.h>

int main(){
    int a,b,x,count,sum,r,p,y,f,ac=0;
    printf("Enter last no.=");
    scanf("%d",&x);
    for(a=1;a<=x;a++)
    {   
        count=0;
        sum=0;
        for(y=a;y>0;y=y/10)
        {
            count++;
        }

        for(b=a;b!=0;b=b/10)
        {
            r=b%10;
            f=1;
            p=count;
                    while(p>=1)
                    {
                        f=f*r;
                        p--;
                    }
            sum=sum+f;
        }
        if (sum==a)
        {
            ac++;
            printf("armstrong no. =%d\n",sum);           
        }
    }
    printf("count is=%d\n",ac);
    return 0;
}*/


