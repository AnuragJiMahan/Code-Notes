//do while

/*#include<stdio.h>
int main(){  
    int x;
    x=1;
    do
    {
        printf("%d",x);
        x++;
    }
    while (x<=10);
    
}*/



// print 20 to 40 
/*#include<stdio.h>

int main(){
    int a;
    a=20;
    do
    {
        printf("%d\n",a);
        a++;
    }
    while(a<=40);
    return 0;
}
*/

// print even from 20 to 40 
/*#include<stdio.h>

int main(){
    int a;
    a=20;
    do
    {
        printf("%d\n",a);
        a=a+2;
    }
    while(a<=40);
    return 0;
}*/

// print odd from 20 to 40
/*#include<stdio.h>

int main(){
    int a;
    a=21;
    do
    {

        printf("%d\n",a);
        a=a+2;
    }
    while(a<=40);
    return 0;
}*/

// print table of 5
/*#include<stdio.h>

int main(){
    int a;
    a=5;
    do
    {
       printf("%d\n",a);
       a=a+5; 
    } 
    while(a<=50);
      
    return 0;
}*/

// print ur name 20 times 
/*#include<stdio.h>

int main(){
    int a;
    a=1;
    do
    {
        printf("Anurag:\n",a);
        a++;
    } 
    while(a<=20);
    return 0;
}*/

//1 2 4 8 16_ _ _ _ _1024
/*#include<stdio.h>

int main(){
    int a;
    a=1;
    do
    {
        printf("%d\n",a);
        a=a*2;
    }
    while(a<=1024);
    return 0;
}*/

//512 256 128 _ _ _ _ 1
/*#include<stdio.h>

int main(){
    int a;
    a=512;
    do
    {
        printf("%d\n",a);
        a=a/2;
    }
    while(a>=1);
    return 0;
}*/

//table of 9 in full formate 9x1=9,9x2=18_ _ _ _ 9x10=90
/*#include<stdio.h>

int main(){
    int a;
    a=1;
    do
    {
        printf("9 x %d = %d\n",a,9*a);
        a=a+1;
    }
    while(a<=10);
    return 0;
}*/

//squece table from 1 to 10 in full formate
//1x1=1
//2x2=4
//3x3=9
//.
//.
//10x10=100
/*#include<stdio.h>

int main(){
    int a;
    a=1;
    do
    {
        printf("%d x %d = %d\n",a,a,a*a);
        a=a+1;
    } 
    while (a<=10);
    return 0;
}*/

//print  0+10=10
//       1+9=10
//       2+8=10_ _ _ _ 10+0=10

/*#include<stdio.h>

int main(){
    int i,a;
    a=0;
    i=10;
    do
    {
        printf("%d + %d = %d\n",a,i,a+i);
        a=a+1;
        i=i-1;
    }
    while(a<=10);
    return 0;
}*/

// print 1 to x 
/*#include<stdio.h>

int main(){
    int a,x;
    a=1;
    printf("Enter x:");
    scanf("%d",&x);
    do
    {
        printf("%d\n",a);
        a=a+1;
    }
    while(a<=x);
    return 0;
}*/

//       x to 1
/*#include<stdio.h>

int main(){
    int x;
    printf("Enter x=");
    scanf("%d",&x);
    do
    {
        printf("%d\n",x);
        x=x-1;
    } 
    while (x>=1);
    return 0;
}*/

//even from 1 to x 
/*#include<stdio.h>

int main(){
    int a,x;
    a=0;
    printf("Enter x:");
    scanf("%d", &x);
    do
    {
        printf("%d\n",a);
        a=a+2;
    } 
    while (a<=x);
    return 0;
}*/

//odd from 1 to x
/*#include<stdio.h>

int main(){
    int a,x;
    a=1;
    printf("Enter x:");
    scanf("%d", &x);
    do
    {
        printf("%d\n",a);
        a=a+2;
    } 
    while (a<=x);
    return 0;
}*/

//table of x sequences type
/*#include<stdio.h>

int main(){
    int a,x;
    a=1;
    printf("Enter x=");
    scanf("%d", &x);
    do
    {
        printf("%d x %d = %d\n",x,a,a*x);
        a=a+1;
    } 
    while(a<=10);
    return 0;
}*/

// square table from 1 to x in full format
/*#include<stdio.h>

int main(){
    int a,x;
    printf("Enter x=");
    scanf("%d", &x);
    a=1;
    do
    {
        printf("%d x %d = %d\n",a,a,a*a);
        a=a+1;
    }
    while(a<=x);
    return 0;
}*/

// print x to y
/*#include<stdio.h>

int main(){
    int x,y;
    printf("Enter x=");
    scanf("%d", &x);
    printf("Enter y=");
    scanf("%d", &y);
    do
    {
        printf("%d\n",x);
        x++;
    } 
    while (x<=y);
    return 0;
}*/

// print the following
// value       square      cube  
// ---------------------------------
// 1           1           1
// 2           4           8
// .
// .
// x 

/*#include<stdio.h>

int main(){
    int a,x;
    a=1;
    printf("Enter x=");
    scanf("%d",&x);
    printf("value\tsquare\tcube\n--------------------\n");
    do
    {
        printf("%d\t%d\t%d\n",a,a*a,a*a*a);
        a=a+1;
    }
    while(a<=x);
    return 0;
}*/

 
 //pow function

// value     power      result 
// ----------------------------
// x           1         ?
// x           2         ?
// .           .         .
// .           .         .
// x           10        ?

/*#include<stdio.h>
#include<math.h>
int main(){
    int x,a;
    printf("Enter x=");
    scanf("%d",&x);
    a=1;
    printf("value\tpower\tresult\n--------------------\n");
    do
    {
        printf("%d\t%d\t%f\n",x,a,pow(x,a));
        a++;
    }
    while(a<=10);
    return 0;
}*/

/*
1
10
100
1000
10000
100000*/
/*#include<stdio.h>

int main(){
    int a;
    a=1;
    do
    {
        printf("%d\n",a);
        a=a*10;
    }
    while(a<=100000);
    return 0;
}*/

/*
1
11
111
1111
11111
111111
*/
/*#include<stdio.h>

int main(){
    int a;
    a=1;
    do
    {
        printf("%d\n",a);
        a=a*10+1;
    }
    while(a<=111111);
    return 0;
}*/

//sum of squenc from 1 to 10
/*#include<stdio.h>
int main(){
    int a,sum;
    a=1;
    sum=0;
    do
    {
        printf("%d\n",a);
        sum=sum+a;
        a++;
    }
    while(a<=10);
    printf("sum is =%d\n",sum);
    return 0;
}*/

// sum and avg of sequence from 1 to 10 ?
/*#include<stdio.h>
int main(){
    int a,sum,avg;
    a=1;
    sum=0;
    do
    {
        printf("%d\n",a);
        sum=sum+a;
        a++;
    }
    while(a<=10);
    avg=sum/10;
    printf("sum is= %d\n",sum);
    printf("avg is= %d\n",avg)
    return 0;
}*/

// sum of even from 1 to x
/*#include<stdio.h>

int main(){
    int a,sum,x;
    printf("Enter x=");
    scanf("%d",&x);
    a=1;
    sum=0;
    do
    {
        printf("%d\n",a);
        sum=sum+a;
        a=a+2;
    }
    while(a<=x);
    printf("sum is = %d\n",sum);
    return 0;
}*/

// sum of odd from 1 to x
/*#include<stdio.h>
int main(){
    int a,sum,x;
    printf("Enter x=");
    scanf("%d", &x);
    a=0;
    sum=0;
    do
    {
        printf("%d\n",a);
        sum=sum+a;
        a=a+2;
    } 
    while (a<=x);
    printf("sum is = %d\n",sum);    
    return 0;
}*/

// sum and avg of sequence from 1 to x 
/*#include<stdio.h>

int main(){
    int x,a,sum,avg;
    printf("Enter x=");
    scanf("%d", &x);
    a=1;
    sum=0;
    do
    {
        printf("%d\n",a);
        sum=sum+a;
        a=a+1;
    } while (a<=x);
    avg=sum/x;
    printf("sum is= %d\n",sum);
    printf("avg is = %d\n",avg);
    return 0;
}*/

//print sum of squens from x to y
/*#include<stdio.h>

int main(){
    int x,y,sum;
    printf("Enter x=");
    scanf("%d", &x);
    printf("Enter y=");
    scanf("%d", &y);
    sum=0;
    do
    {
        printf("%d\n",x);
        sum=sum+x;
        x++;
    } while (x<=y);
    printf("sum is = %d\n",sum);
    return 0;
}*/

// count even values from 1 to x
/*#include<stdio.h>

int main(){
    int a,x,count;
    a=1;
    count=0;
    printf("Enter x=");
    scanf("%d", &x);
    do
    {
        printf("%d\n",a);
        count=count+1;
        a=a+1;
    } while (a<=x);
    printf("total count is= %d\n",count);
    return 0;
}*/
// find avg of odd from 1 to x
/*#include<stdio.h>

int main(){
    int a,avg,count,sum,x;
    printf("Enter x=");
    scanf("%d", &x);
    a=1;
    sum=0;
    count=0;
    do
    {
        printf("%d\n",a);
        sum=sum+a;
        count=count+1;
        a=a+1;
    } while (a<=x);
    avg=sum/count;
    printf("avg is= %d\n",avg);
    return 0;
}*/

//avg of sequence from x to y
/*#include<stdio.h>

int main(){
    int x,y,sum,avg,count;
    printf("Enter x=");
    scanf("%d", &x);
    printf("Enter y=");
    scanf("%d", &y);
    sum=0;
    count=0;
    do
    {
        printf("%d\n",x);
        sum=sum+x;
        count=count+1;
        x=x+1;
    } while (x<=y);
    avg=sum/count;
    printf("avg is = %d\n",avg);
    return 0;
}*/

// enter 10 value and print sum of value
/*#include<stdio.h>

int main(){
    int a,x,sum;
    a=1;
    sum=0;
    printf("add sum no.=\n");
    do
    {
        scanf("%d",&x);
        sum=sum+x;
        a=a+1;
    }
    while(a<=10);
    printf("sum is = %d\n",sum);
    return 0;
}*/

//enter x value and print their sum and avg
/*#include<stdio.h>

int main(){
    int a,x,y,sum,avg,count;
    printf("Enter x=");
    scanf("%d", &x);
    a=1;
    sum=0;
    count=0;
    do
    {
        scanf("%d",&y);
        sum=sum+y;
        count=count+1;
        a=a+1;
    } while (a<=x);
    avg=sum/count;
    printf("sum is = %d\n",sum);
    printf("avg is = %d\n",avg);
    return 0;
}*/

//1+2+3+4+5+6+7+8+9+10=55 print them
/*#include<stdio.h>
int main(){
    int a,sum;
    a=1;
    sum=0;
    do
    {
        printf("%d+",a);
        sum=sum+a;
        a=a+1;
    }
    while(a<=10);
    printf("\b=%d\n",sum);
    return 0;
}*/

// 1/1 + 1/2 + 1/3 + 1/4 + 1/5 -------- 1/10 = ?
/*#include<stdio.h>

int main(){
    int a,x;
    float sum;
    a=1;
    sum=0;
    do
    {
        printf("1/%d+",a);
        sum=sum+1/(float)a;
        a=a+1;
    } while (a<=10);
    printf("\b=%f\n",sum);
    return 0;
}*/


// 1/2 + 3/4 + 5/6 + 7/8 + 9/10 = ?
/*#include<stdio.h>

int main(){
    int a,x;
    float sum;
    x=1;
    a=2;
    sum=0;
    do
    {
        printf("%d/%d+",x,a);
        sum=sum+x/(float)a;
        x=x+2;
        a=a+2;
    } 
    while (a<=10);
    printf("\b=%f\n",sum);
    return 0;
}*/

//or 1 variable do for this question.
/*#include<stdio.h>

int main(){
    float a,x,sum;
    x=1;
    a=2;
    sum=0;
    do
    {
        printf("%d/%d+",(int)x,(int)a);
        sum=sum+x/a;
        x=x+2;
        a=a+2;
    } 
    while (a<=10);
    printf("\b=%f\n",sum);
    return 0;
}*/

//5/3 + 10/5 + 15/7 + 20/9 + 25/11
/*#include<stdio.h>

int main(){
    int a,x;
    a=5;
    x=3;
    do
    {
        printf("%d/%d+",a,x);
        a=a+5;
        x=x+2;
    } while (a<=25);
    printf("\b ");
    return 0;
}*/

//1/1 + 2/4 + 3/9 + 4/16 + 5/25 = ?
/*#include<stdio.h>
int main(){
    float a,sum;
    a=1;
    sum=0;
    do
    {
      printf("%.0f/%.0f+",a,a*a);
      sum=sum+a/(a*a);
      a=a+1;
    } while (a<=5);
    printf("\b=%f\n",sum);
    return 0;
}*/

//1/1 + 10/11 + 100/111 + 1000/1111 + 10000/11111 + 100000/111111 = ?
   
/*#include<stdio.h>

int main(){
    float a=1,x=1,sum=0;
    do
    {
        printf("%.0f/%.0f+",x,a);
        sum=sum+x/a;
        x=x*10;
        a=a*10+1;
    }
    while(a<=111111);
    printf("\b=%f\n",sum);
    return 0;
}
*/

//1/2 + 3/10 + 5/26 + 7/50 + 9/82
/*#include<stdio.h>

int main(){
    float a,x,sum;
    a=1;
    x=2;
    do
    {
        printf("%.0f/%.0f+",a,x);
        sum=sum+a/x;
        a=a+2;
        x=a*a+1;
    }
    while(a<=9);
    printf("\b=%f\n",sum);
    return 0;
}*/

//1/2 + 3/5 + 8/13 + 21/34 + 55/89
/*#include<stdio.h>

int main(){
    float a,b,sum;
    a=1;
    b=2;
    do
    {
        printf("%.0f/%.0f+",a,b);
        sum=sum+a/b;
        a=a+b;
        b=b+a;
    } 
    while (a<=55);
    printf("\b=%f\n",sum);
    return 0;
}*/

//1,3,6,10,15------55 print 
/*#include<stdio.h>

int main(){
    int a,b;
    a=1;
    b=1;
    do
    {
        printf("%d\n",a);
        b=b+1;
        a=a+b;
    }
    while(a<=55);
    return 0;
}*/

//1+3+6+10+15------+55=? print
/*#include<stdio.h>

int main(){
    float a,b,sum;
    a=1;
    b=1;
    do
    {
        printf("%0.f+",a);
        sum=sum+a;
        b=b+1;
        a=a+b;
    } while (a<=55);
    printf("\b=%f\n",sum);
    return 0;
}*/

//Enter a number and print in reverse order  do following this 123 => 321
/*#include<stdio.h>

int main(){
    int r,x;
    printf("Enter x=");
    scanf("%d", &x);
    do
    {   
        r=x%10;
        printf("%d",r);
        x=x/10;
    } 
    while(x>0);
    return 0;
}*/

//count 1578 digit 
/*#include<stdio.h>

int main(){
    int a,count;
    count=0;
    printf("Enter number =");
    scanf("%d", &a);
    do
    {   
        a=a/10;
        count=count+1;
    } 
    
    while (a!=0);
    printf("Number of digit:%d\n",count);
    return 0;
}*/

//sum of all digit (1578)
/*#include<stdio.h>

int main(){
    int a,b,sum=0;
    printf("Enter number=");
    scanf("%d",&a);    
    do
    {
        b=a%10;
        sum=sum+b;
        a=a/10;
    } 
    while (a>0);
    printf("Sum of digit: %d\n",sum);
    return 0;
}*/

//print largest value e.g (input)1578-->(output)8
/*#include<stdio.h>

int main(){
    int a,r,lb=0;
    printf("Enter number=");
    scanf("%d", &a);
    do
    {
        r=a%10;
        if(r>lb)
        {
        lb=r;
        }
        a=a/10;
    } 
    while(a>0);
    printf("largest number:%d\n",lb);

    return 0;
}*/

//print second largest value e.g (input)1578-->(output)7
/*#include<stdio.h>

int main(){
    int a,r,i=0,j=0,b;
    printf("Enter number=");
    scanf("%d", &a);
    b=a;
    do
    {
        r=a%10;
        if (r>i)
        {
            i=r;        
        }
        a=a/10;
        
    } while (a>0);
    printf("largest value is = %d\n",i);
    do
    {
        r=b%10;
        if (r>j && r<i)
        {
            j=r;
        }
        b=b/10;
    } while (b>0);
    printf("second largest value =%d\n",j);
    return 0;
}*/

