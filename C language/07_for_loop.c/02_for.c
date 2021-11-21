// do the following:
// print 20 to 40 
/*#include<stdio.h>

int main(){
    int a;
    printf("no. 20 to 40\n");
    for(a=20;a<=40;a++) 
    {
        printf("%d\n",a);
    }
    return 0;
}*/

// print even from 20 to 40 
/*#include<stdio.h>

int main(){
    int a;
    printf("even from 20 to 40\n");
    for(a=20;a<=40;a=a+2)
    {
        printf("%d\n",a);
    }
    return 0;
}*/

// print odd from 20 to 40 
/*#include<stdio.h>

int main(){
    int a;
    printf("odd from 20 to 40\n");
    for(a=19;a<=40;a=a+2)
    {
        printf("%d\n",a);
    }
    return 0;
}*/

// print table of 5
/*#include<stdio.h>

int main(){
    int a;
    printf("table of 5");
    for(a=5;a<=50;a=a+5)
    {
        printf("%d\n",a);
    }
    return 0;
}*/

// print ur name 20 times 
/*#include<stdio.h>

int main(){
    int a;
    printf("your name 20 times\n");
    for(a=1;a<=20;a++)
    {
        printf("Anurag:%d\n",a);
    }
    return 0;
}*/

// 1 2 4 8 16_ _ _ _ _1024
/*#include<stdio.h>

int main(){
    int a;
    for(a=1;a<=1024;a=a*2)
    {
        printf("%d\n",a);
    }
    return 0;
}*/

// 512 256 128 _ _ _ _ 1
/*#include<stdio.h>

int main(){
    int a;
    for(a=512;a>=1;a=a/2)
    {
        printf("%d\n",a);
    }
    return 0;
}*/

//table of 9 in full formate 9x1=9,9x2=18_ _ _ _ 9x10=90
/*#include<stdio.h>

int main(){
    int a;
    for(a=1;a<=10;a=a+1)
    {
        printf("9 x %d = %d\n",a,9*a);
    }
    return 0;
}*/

//squece table from 1 to 10 in fill formate
//1x1=1
//2x2=4
//3x3=9
//.
//.
//10x10=100
/*#include<stdio.h>

int main(){
    int a;
    for(a=1;a<=10;a=a+1)
    {
        printf("%d x %d = %d\n",a,a,a*a);
    }
    return 0;
}*/

//       0+10=10
//       1+9=10
//       2+8=10_ _ _ _ 10+0=10
/*#include<stdio.h>

int main(){
    int a,i=10;
    for(a=0;a<=10;a++,i--)
    {
        printf("%d + %d = %d\n",a,i,a+i);
     //  i--; 
    }
    return 0;
}*/

//       1 to x 
/*#include<stdio.h>

int main(){
    int a,x;
    printf("Enter last value=");
    scanf("%d",&x);
    for(a=1;a<=x;a++)
    {
        printf("%d\n",a);
    }
    return 0;
}*/

//       x to 1
/*#include<stdio.h>

int main(){
    int a,x;
    printf("Enter first value=");
    scanf("%d",&x);
    for(a=1;x>=a;x--)
    {
        printf("%d\n",x);
    }
    return 0;
}*/

//       even from 1 to x 
/*#include<stdio.h>

int main(){
    int a,x;
    printf("Enter last value:");
    scanf("%d",&x);
    printf("even value:\n");
    for(a=0;a<=x;a=a+2)
    {
        printf("%d\n",a);
    }
    return 0;
}*/

//       odd from 1 to x
/*#include<stdio.h>

int main(){
    int a,x;
    printf("Enter last value:");
    scanf("%d",&x);
    printf("even value:\n");
    for(a=1;a<=x;a=a+2)
    {
        printf("%d\n",a);
    }
    return 0;
}*/

//table of x
/*#include<stdio.h>

int main(){
    int a,x;
    printf("Enter x=");
    scanf("%d",&x);
    for(a=1;a<=10;a=a+1)
    {
        printf("%d x %d = %d\n",x,a,a*x);
    }
    return 0;
}*/

// square table from 1 to x in full format
/*#include<stdio.h>

int main(){
    int a,x;
    printf("Enter last value=");
    scanf("%d",&x);
    for(a=1;a<=x;a++)
    {
        printf("%d x %d = %d\n",a,a,a*a);
    }
    return 0;
}*/

// print x to y
/*#include<stdio.h>

int main(){
    int x,y;
    printf("Enter first value=");
    scanf("%d",&x);
    printf("Enter last value=");
    scanf("%d",&y);
    for(x;x<=y;x++)
    {
        printf("%d\n",x);
    }
    return 0;
}*/

// print the following
// value       square      cube  
// ----------------------------
// 1           1           1
// 2           4           8
// .
// .
// x 
/*#include<stdio.h>

int main(){
    int a,x;
    printf("Enter last value=");
    scanf("%d",&x);
    printf("value\tsquare\tcube\n--------------------\n");
    for(a=1;a<=x;a++)
    {
        printf("%d\t%d\t%d\n",a,a*a,a*a*a);
    }
    return 0;
}*/


// value     power     result 
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
    printf("value\tpower\tresult\n--------------------\n");
    for(a=1;a<=10;a++)
    {
        printf("%d\t%d\t%f\n",x,a,pow(x,a));
    }
    return 0;
}*/

// 1 4 9 16 25---------100;
/*#include<stdio.h>

int main(){
    int a;
    for(a=1;a<=10;a++)
    {
        printf("%d\n",a*a);
    }
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
    for(a=1;a<=100000;a=a*10)
    {
        printf("%d\n",a);
    }
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
    for(a=1;a<=111111;a=a*10+1)
    {
        printf("%d\n",a);
    }
    return 0;
}*/

//sum of squenc from 1 to 10
/*#include<stdio.h>

int main(){
    int a,sum=0;
    for(a=1;a<=10;sum=sum+a,a++)
    {
        printf("%d\n",a);
        //sum=sum+a;
    }
    printf("sum is=%d\n",sum);
    return 0;
}*/

// sum and avg of sequence from 1 to 10 ?
/*#include<stdio.h>

int main(){
    int a,sum=0,avg;
    for(a=1;a<=10;sum=sum+a,a++)
    {   
        printf("%d\n",a);
        //sum=sum+a;
    }
    avg=sum/10;
    printf("sum is=%d\n",sum);
    printf("avg is=%d\n",avg);
    return 0;
}*/

// sum of even from 1 to x
/*#include<stdio.h>

int main(){
    int a,x,sum=0;
    printf("Enter lase value=");
    scanf("%d",&x);
    for(a=0;a<=x;sum=sum+a,a=a+2)
    {
        printf("%d\n",a);
        //sum=sum+a;
    }
    printf("sum is even=%d\n",sum);
    return 0;
}*/

// sum of odd from 1 to x
/*#include<stdio.h>

int main(){
    int a,x,sum=0;
    printf("Enter lase value=");
    scanf("%d",&x);
    for(a=1;a<=x;sum=sum+a,a=a+2)
    {
        printf("%d\n",a);
        //sum=sum+a;
    }
    printf("sum is odd=%d\n",sum);
    return 0;
}*/

// sum and avg of sequence from 1 to x 
/*#include<stdio.h>

int main(){
    int a,x,sum=0,avg;
    printf("Enter last value=");
    scanf("%d",&x);
    for(a=1;a<=x;sum=sum+a,a++)
    {
        printf("%d\n",a);
        //sum=sum+a;
    }
    avg=sum/x;
    printf("sum is =%d\n",sum);
    printf("avg is =%d\n",avg);
    return 0;
}*/

//print sum of squens from x to y
/*#include<stdio.h>

int main(){
    int x,y,sum=0;
    printf("Enter first value=");
    scanf("%d",&x);
    printf("Enter last value=");
    scanf("%d",&y);
    for(x;x<=y;sum=sum+x,x++)
    {
        printf("%d\n",x);
       // sum=sum+x;
    }
    printf("sum is=%d\n",sum);
    return 0;
}*/

// count even values from 1 to x
/*#include<stdio.h>

int main(){
    int a,x,count=0;
    printf("Enter last value=");
    scanf("%d",&x);
    for(a=0;a<=x;count=count+1,a=a+2)
    {
        printf("%d\n",a);
        //count=count+1;
    }
    printf("count is=%d\n",count);
    return 0;
}*/

// find avg of odd from 1 to x
/*#include<stdio.h>

int main(){
    int a,x,sum=0,count=0,avg;
    printf("Enter last value=");
    scanf("%d",&x);
    for(a=1;a<=x;sum=sum+a,count=count+1,a=a+2)
    {
        printf("%d\n",a);
        //sum=sum+a;
        //count=count+1;
    }
    avg=sum/count;
    printf("avg is=%d\n",avg);
    return 0;
}*/

//avg of sequence from x to y
/*#include<stdio.h>

int main(){
    int x,y,sum=0,count=0,avg;
    printf("Enter first value=");
    scanf("%d",&x);
    printf("Enter last value=");
    scanf("%d",&y);
    for(x;x<=y;sum=sum+x,count=count+1,x++)
    {
        printf("%d\n",x);
        //sum=sum+x;
        //count=count+1;
    }
    avg=sum/count;
    printf("avg is=%d\n",avg);
    return 0;
}*/

// enter 10 value and print sum of value
/*#include<stdio.h>

int main(){
    int a,x,sum=0;
    for(a=1;a<=10;a++)
    {
        scanf("%d",&x);
        sum=sum+x;
    }
    printf("sum is=%d\n",sum);
    return 0;
}*/

//enter x value and print their sum and avg
/*#include<stdio.h>

int main(){
    int a,b,x,sum=0,count=0,avg;
    printf("Enter add no. value=");
    scanf("%d",&x);
    for(a=1;a<=x;a++)
    {
        scanf("%d",&b);
        sum=sum+b;
        count=count+1;
    }
    avg=sum/count;
    printf("sum is=%d\n",sum);
    printf("avg is =%d\n",avg);
    return 0;
}
*/

//1+2+3+4+5+6+7+8+9+10=55 print them
/*#include<stdio.h>

int main(){
    int a,sum=0;
    for(a=1;a<=10;a++)
    {   
        printf("%d+",a);
        sum=sum+a;
    }
    printf("\b=%d\n",sum);
    return 0;
}*/

// 1/1 + 1/2 + 1/3 + 1/4 + 1/5 -------- 1/10 = ?
/*#include<stdio.h>

int main(){
    int a;
    float sum=0;
    for(a=1;a<=10;a++)
    {
        printf("1/%d+",a);
        sum=sum+1/(float)a;
    }
    printf("\b=%f\n",sum);
    return 0;
}*/

// 1/2 + 3/4 + 5/6 + 7/8 + 9/10 = ?
/*#include<stdio.h>

int main(){
    float a,x=2,sum;
    for(a=1;a<=9;a=a+2,x=x+2)
    {
        printf("%0.f/%0.f+",a,x);
        sum=sum+(a/x);
    }
    printf("\b=%f\n",sum);
    return 0;
}*/

//5/3 + 10/5 + 15/7 + 20/9 + 25/11
/*#include<stdio.h>

int main(){
    int a,b=3;
    for(a=5;a<=25;a=a+5,b=b+2)
    {
        printf("%d/%d+",a,b);
    }
    printf("\b ");
    return 0;
}*/

//1/1 + 2/4 + 3/9 + 4/16 + 5/25 = ?
/*#include<stdio.h>

int main(){
    float a,sum=0;
    for(a=1;a<=5;a++)
    {
        printf("%0.f/%0.f+",a,a*a);
        sum=sum+a/(a*a);
    }
    printf("\b=%f\n",sum);
    return 0;
}*/

//1/1 + 10/11 + 100/111 + 1000/1111 + 10000/11111 + 100000/111111
/*#include<stdio.h>

int main(){
    float a,i=1,sum=0;
    for(a=1;a<=111111;a=a*10,i=i*10+1)
    {
        printf("%0.f/%0.f+",a,i);
        sum=sum+(a/i);
    }
    printf("\b=%f\n",sum);
    return 0;
}*/

//1/2 + 3/10 + 5/26 + 7/50 + 9/82 = ?
/*#include<stdio.h>

int main(){
    float a,b=2,sum;
    for(a=1;a<=9;a=a+2,b=a*a+1)
    {
        printf("%0.f/%0.f+",a,b);
        sum=sum+(a/b);
    }
    printf("\b=%f\n",sum);
    return 0;
}*/

//1/2 + 3/5 + 8/13 + 21/34 + 55/89
/*#include<stdio.h>

int main(){
    float a,b=2,sum;
    for(a=1;a<=55;a=a+b,b=b+a)
    {
        printf("%0.f/%0.f+",a,b);
        sum=sum+(a/b);
    }
    printf("\b=%f\n",sum);
    return 0;
}*/

//1,3,6,10,15------55 print
/*#include<stdio.h>

int main(){
    int a,b=2;
    for(a=1;a<=55;a=a+b,b=b+1)
    {
        printf("%d,",a);
    }
    printf("\b ");
    return 0;
}*/

//1+3+6+10+15------+55=? print
/*#include<stdio.h>

int main(){
    int a,b=2,sum=0;
    for(a=1;a<=55;a=a+b,b=b+1)
    {
        printf("%d+",a);
        sum=sum+a;
    }
    printf("\b=%d\n",sum);
    return 0;
}*/

//Enter a number and print in reverse order  do following this 123 => 321
/*#include<stdio.h>

int main(){
    int a,r;
    printf("Enter number =");
    scanf("%d",&a);
    for(a;a>0;a=a/10)
    {
        r=a%10;
        printf("%d",r);
    }
    return 0;
}*/

//count 1578 digit
/*#include<stdio.h>

int main(){
    int a,count=0;
    printf("Enter number =");
    scanf("%d",&a);
    for(a;a!=0;a=a/10)
    {
        count=count+1;
    }
    printf("count of number =%d\n",count);
    return 0;
}*/

//sum of all digit (1578)
/*#include<stdio.h>

int main(){
    int a,b,sum=0;
    printf("Enter sum number=");
    scanf("%d",&a);
    for(a;a>0;a=a/10)
    {   
        b=a%10;
        sum=sum+b;
    }
    printf("sum is=%d\n",sum);
    return 0;
}*/

// enter 10 value and print count
/*#include<stdio.h>
int main(){
    int a,b,count=0;
    for(a=1;a<=10;a++)
    {
        scanf("%d",&b);
        count=count+1;
    }
    printf("count is=%d\n",count);
    return 0;
}*/

//0 1 1 2 3 5 8 13  
/*#include<stdio.h>

int main(){
    // int a,b=1;
    // for(a=0;a<=13;a=a+b,b=a+b)
    // {   
    //     printf("%d %d ",a,b);
    // }
    //use 1 variable for print this 
    // int a,b,c;
    // a=0;
    // b=1;
    // printf("%d %d ",a,b);
    // for(c=a+b;c<=13;c=a+b)
    // {

    //     printf("%d ",c);
    //     a=b;
    //     b=c;
    // }
    return 0;
}*/

