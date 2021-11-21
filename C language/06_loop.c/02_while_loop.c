// do the following:
// print 20 to 40 
// print even from 20 to 40 
// print odd from 20 to 40 
// print table of 5
// print ur name 20 times 


/*#include<stdio.h>

int main(){
// print 20 to 40     
    int a;
    a=20;
    while(a<=40)
    {
        printf("%d\n",a);
        a++;
    }
   
// print even from 20 to 40  
    int b;
    b = 20;
    while(b<=40)
    {
        printf("even no. %d\n",b);
        b = b+2;
    }
    
// print odd from 20 to 40  
    int c ;
    c=21;
    while(c<=40)
    {
        printf(" \nodd no. %d ",c);
        c = c+2;
    }

//print table of 5 
    int d;
    d = 5;
    while(d<=50)
    {
        printf("%d\n",d);
        d =d+5;
    }

//print your name 20 times 
    int  e =1;
    while(e<=20)
    {
        printf("Anurag = %d\n",e);
        e = e+1;
    }
    return 0;
}
*/


//Q.6- 1 2 4 8 16_ _ _ _ _1024
// #include<stdio.h>

// int main(){
//     int a = 1;
//     while(a<=1024)
//     {
//         printf("%d\n",a);
//         a = a*2;
//     }
//     return 0;
// }


//Q.7- 512 256 128 _ _ _ _ 1

// #include<stdio.h>

// int main(){
//     int a;
//     a =512;
//     while(a>=1)
//     {
//         printf("%d\n",a);
//         a = a/2;
//     }
//     return 0;
// }

//Q.8-table of 9 in full formate 9x1=9,9x2=18_ _ _ _ 9x10=90
/*#include<stdio.h>

int main(){
   int a;
   a=1;
   while(a<=10)
   {
    printf("9 x %d = %d\n",a,9*a);
    a =a+1;
   }
    return 0;
}*/

//squece table from 1 to 10 in fill formate
/*#include<stdio.h>

int main(){
    int a;
    a=1;
    while(a<=10)
    {
     printf("%d x %d = %d\n",a,a,a*a);
     a = a+1;
    }
    return 0;
}*/


//Q.10-  0+10=10
//       1+9=10
//       2+8=10_ _ _ _ 10+0=10
/*#include<stdio.h>

int main(){
    int a,i;
    a=0;
    i=10;
    while(a<=10)
        {   
            printf("%d + %d = %d\n",a,i,a+i);
            a = a+1;
            i=i-1;
        }
      
    return 0;
}*/

//Q.11-  1 to x 
//       x to 1
//       even from 1 to x 
//       odd from 1 to x
//       table of x


//1 to x
/*#include<stdio.h>

int main(){
    int a,x;
    a=1;
    printf("Enter x = ");
    scanf("%d",& x);
    while(a<=x)
    {
        printf("%d\n",a);
        a=a+1;
    }
    return 0;
}*/

//x to 1
/*#include<stdio.h>

int main(){
    int a,x;
    printf("Enter x = ");
    scanf("%d",& x);
    while(x>=1)
    {
        printf("%d\n",x);
        x--;
    }
    return 0;
}*/

//even from 1 to x

/*#include<stdio.h>

int main(){
    int a,x;
    printf("Enter x = ");
    scanf("%d",& x);
    a=0;
    while (a<=x)
    {
        printf("%d\n",a);
        a=a+2;
    }
    
    return 0;
}*/

//odd from 1 to x 
/*#include<stdio.h>

int main(){
    int a,x;
    a=1;
    printf("Enter x = ");
    scanf("%d",& x);
    while(a<=x)
    {
        printf("%d\n",a);
        a=a+2;
    }
    return 0;
}*/

//table of x

/*#include<stdio.h>

int main(){
    int a,x;
    printf("Enter x = ");
    scanf("%d",& x);
    a=1;
    while (a<=10)
    {
        printf("%d x %d = %d\n",x,a,a*x);
        a=a+1;
    }
    return 0;
}
*/

// square table from 1 to x in full format
// print x to y
// print the following
// value       square      cube  
// ---------------------------------
// 1           1           1
// 2           4           8
// .
// .
// x 

// square table from 1 to x in full format
/*#include<stdio.h>

int main(){
    int a,x;
    printf("Enter x = ");
    scanf("%d",& x);
    a=1;
    while (a<=x)
    {
        printf("%d x %d = %d\n",a,a,a*a);
        a= a+1;
    }
    return 0;
}*/

// print x to y
/*#include<stdio.h>

int main(){
    int x,y;
    printf("Enter x = ");
    scanf("%d",& x);
    printf("Enter y = ");
    scanf("%d",& y);
    
    while(x<=y)
    {
        printf("%d\n",x);
        x=x+1;
    }
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
    printf("Enter x = ");
    scanf("%d",& x);
    a=1;
        printf(" value    square     cube\n -------------------------\n" );
    while(a<=x)
    {
        printf("  %d        %d       %d\n",a,a*a,a*a*a);
        a= a+1;
    }
    return 0;
}
*/

                        //pow function star in while loop

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
    printf("Enter x = ");
    scanf("%d",& x);
    a=1;
    printf("value\tpower\tresult\n ------------------------\n");
    while (a<=10)
    {
        printf("%d\t%d\t%f\n",x,a,pow(x,a));
        a=a+1;
    }
     return 0;
}
*/

// 1 4 9 16 25---------100;
/*#include<stdio.h>
#include<math.h>
int main(){
    int a;
    a=1;
    while(a<=10)
    {
        printf("%d\n",pow(a,2));
        a=a+1;
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
#include<conio.h>
int main(){
    int a;
    a=1;
    while(a<=100000)
    {
        printf("%d\n",a);
        a=a*10;
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
    a=1;
    while(a<=111111)
    {
        printf("%d\n",a);
        a=a*10+1;
    }
    return 0;
}*/

//sum of squenc from 1 to 10
/*#include<stdio.h>
int main(){
    int a,s;
    a=1;
    s=0;
    while(a<=10)
    {
        printf("%d\n",a);
        s=s+a;
        a++;
        
    }
    printf("sum of this value =%d\n",s);
    return 0;
}
*/


// sum and avg of sequence from 1 to 10 ?
/*#include<stdio.h>

int main(){
    int a,sum,avg;
    a=1;
    sum=0;
    while(a<=10)
    {
        printf("%d\n",a);
        sum=sum+a;
        avg=sum/10;
        a++;
    }
    printf("sum of this value = %d\n",sum);
    printf("avg of this value = %d\n",avg);
    return 0;
}*/

// sum of even from 1 to x
/*#include<stdio.h>

int main(){
    int a,sum,x;
    printf("Enter x = ");
    scanf("%d",& x);
    a=0;
    sum=0;
    printf("even value is =\n");
    while (a<=x)
    {
        printf("%d\n",a);
        sum=sum+a;
        a=a+2;
    }
    printf("sum of this value = %d\n",sum);
    
    return 0;
}
*/

// sum of odd from 1 to x
/*#include<stdio.h>

int main(){
    int a,sum,x;
    printf("Enter x = ");
    scanf("%d",& x);
    a=1;
    sum=0;
    printf("even value is =\n");
    while (a<=x)
    {
        printf("%d\n",a);
        sum=sum+a;
        a=a+2;
    }
    printf("sum of this value = %d\n",sum);
    return 0;
}*/

// sum and avg of sequence from 1 to x 
/*#include<stdio.h>
int main(){
    int a,sum,avg,x;
    printf("Enter x = ");
    scanf("%d",& x);
    a=1;
    sum=0;
    while(a<=x)
    {
        printf("%d\n",a);
        sum=sum+a;
        avg=sum/x;
        a++;
    }
    printf("sum of this value = %d\n",sum);
    printf("avg of this value = %d\n",avg);
    return 0;
}*/



/*print sum of squens from x to y*/

/*#include<stdio.h>

int main(){
    int x,y,sum;
    printf("Enter x = ");
    scanf("%d",& x);
    printf("Enter y = ");
    scanf("%d",&y);
    sum=0;
    while(x<=y)
    {
        printf("%d\n",x);
        sum=sum+x;
        x=x+1;
    }
    printf("sum is = %d\n",sum);
    return 0;
}*/

// count even values from 1 to x
/*#include<stdio.h>

int main(){
    int a,x,count;
    a=0;
    count=0;
    printf("Enter x = ");
    scanf("%d",&x);
    printf("even is=\n");
    while(a<=x)
    {
        printf("%d\n",a);
        count=count+1;
        a=a+2;
    }
    printf("total even values = %d\n",count);
    return 0;
}  */ 


// find avg of odd from 1 to x
/*#include<stdio.h>

int main(){
   int a,x,sum,count;
    float avg;
    a=1;
    sum=0;
    count=0;
    printf("Enter x = ");
    scanf("%d",& x);
    printf("odd is= \n");
    while(a<=x)
    {
        printf("%d\n",a);
        sum=sum+a;
        count=count+1;
        a=a+2;
    }
    avg=sum/count;
    printf("sum =%d\n",sum);
    printf("count odd value =%d\n",count);
    printf("Avg of odd values = %f\n",avg);
    return 0;
}
*/

//avg of sequence from x to y
/*#include<stdio.h>

int main(){
    int x,y;
    float avg,count,sum;
    printf("Enter x = ");
    scanf("%d",& x);
    printf("Enter y = ");
    scanf("%d",& y);
    sum=0;
    count=0;
    while(x<=y)
    {
        printf("%d\n",x);
        count=count+1;
        sum=sum+x;
        x=x+1;
    }
        avg=sum/count;
    printf("sum of this value = %f\n",sum);
    printf("count of value = %f\n",count);
    printf("avg value is =%f\n",avg);
    return 0;
}*/

// enter 10 value and print sum of value
/*#include<stdio.h>

int main(){
    int x,a,sum;
    a=1;
    sum=0;
    while(a<=10)
    {
    scanf("%d",& x);
    a=a+1;
    sum=sum+x;
    }
    printf("sum is  =%d\n",sum);
    return 0;
}*/

//enter x value and print their sum and avg

/*#include<stdio.h>

int main(){
int a,x,y,sum,count,avg;
printf("Enter x = ");
scanf("%d",& x);
a=1;
sum=0;
count=0;
while(a<=x)
{
    scanf("%d",& y);
    a=a+1;
    sum=sum+y;
    count=count+1;
}
avg=sum/count;
printf("sum is =%d\n",sum);
printf("avg is =%d\n",avg);
return 0;
}*/

// Enter x value and print factorial numbers
#include<stdio.h>

int main(){
    int f=1,x;
    printf("Enter value of x=");
    scanf("%d",& x);
    while(x>=1)
    {
        f=f*x;
        printf("%d*",x);
        x--;
    }
    printf("\nfactoriyal of %d",f);
    return 0;
}*/




