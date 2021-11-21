//enter 20 value and print 20 values in array format
/*#include<stdio.h>

int main(){
    int a[20],i;
    printf("Enter 20 values in array:\n");
    for(i=0;i<=19;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Now then 20 values in array are:\n");
    for(i=0;i<=19;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\na[15]=%d",a[15]);
    return 0;
}*/

//enter 10 values in first array and enter 10 values in second array and print both of;
//and sum in third array;
/*#include<stdio.h>

int main(){
    int a[10],b[10],c,d[10];
    printf("enter ten values in first array:\n");
    for(c=0;c<=9;c++)
    {
        scanf("%d",&a[c]);
    }
    printf("Enter ten value in second array:\n");
    for(c=0;c<=9;c++)
    {
        scanf("%d",&b[c]);
    }
    printf("Now then first array are:\n");
    for(c=0;c<=9;c++)
    {
        printf("%d\t\n",a[c]);
    }
    printf("Now then second array are:\n");
    for(c=0;c<=9;c++)
    {
        printf("%d\t\n",b[c]);
    }
    printf("sum of first and second array is:\n");
    for(c=0;c<=9;c++)
    {
        d[c]=a[c]+b[c];
        printf("%d\n",d[c]);
    }
    return 0;
}*/

//enter 10 value and print sum ,avg in array format
/*#include<stdio.h>

int main(){
    int a[10],sum=0,count=0,c,avg;
    printf("Enter 10 value in array:\n");
    for(c=0;c<=9;c++)
    {
        scanf("%d",&a[c]);
    }
    printf("Now then 10 values in array:\n");
    for(c=0;c<=9;c++)
    {
        printf("%d\n",a[c]);
        sum=sum+a[c];
        count=count+1;
    }
    avg=sum/count;
    printf("sum is=%d\n",sum);
    printf("avg is=%d\n",avg);
    return 0;
}*/

//enter 10 value and print largest ,smallest value  in array format
/*#include<stdio.h>

int main(){
    int a[10],b,l,s;
    printf("Enter 10 values in array:\n");
    for(b=0;b<=9;b++)
    {
        scanf("%d",&a[b]);
    }
    printf("Now 10 values in array:\n");
    for(b=0;b<=9;b++)
    {
        printf("%d\n",a[b]);
    }
    l=a[0];
    s=a[0];
    for(b=0;b<10;b++)
    {   
        if (a[b]>l)
        {
            l=a[b];
        }
        if(a[b]<s)
        {
            s=a[b];
        }
    }
        printf("largest value is=%d\n",l);
        printf("smallest value is=%d\n",s);
    
    return 0;
}*/

//enter 10 value and count  positive ,negative in array formate
/*#include<stdio.h>

int main(){
    int a[10],b,pc,nc;
    printf("Enter 10 values in array:\n");
    for(b=0;b<=9;b++)
    {
        scanf("%d",&a[b]);
    }
    printf("Now than 10 values in array are:\n");
    for(b=0;b<=9;b++)
    {
        printf("%d\n",a[b]);
    }
    pc=0;
    nc=0;
    for(b=0;b<=9;b++)
    {
        if(a[b]>0)
        {
            pc++;        
        }
        if(a[b]<0)
        {
            nc++;
        }
    }
    printf("Positive count is:\t%d\n",pc);
    printf("Negative count is:\t%d\n",nc);
    return 0;
}*/

//enter 10 value and print even value in array format
/*#include<stdio.h>

int main(){
    int a[10],b,c;
    printf("Enter 10 values in array:\n");
    for(b=0;b<=9;b++)
    {
        scanf("%d",&a[b]);
    }z
    printf("Even value in array:\n");
    for(b=0;b<=9;b++)
    { 
        if(a[b]%2==0)
        {
            printf("%d\n",a[b]);
        }
    }
    return 0;
}*/

//enter 10 value and print odd in array format
/*#include<stdio.h>

int main(){
    int a[10],b,c;
    printf("Enter 10 values in array:\n");
    for(b=0;b<=9;b++)
    {
        scanf("%d",&a[b]);
    }
    printf("Odd value in array:\n");
    for(b=0;b<=9;b++)
    {
        if(a[b]%2==1)
        {
            printf("%d\n",a[b]);
        }
    }
    return 0;
}*/

//enter 10 values in array and count prime no.
/*#include<stdio.h>
int main(){
    int a[10],b,c,i=0,count=0;
    printf("Enter 10 value in array:\n");
    for(b=0;b<=9;b++)
    {
        scanf("%d",&a[b]);
    }
    printf("All prime no.=\n");
    for(b=0;b<=9;b++)
    {
        i=0;
        for(c=2;c<a[b];c++)
        {
            if(a[b]%c==0)
            {
                i=1;
                break;
            }
        }
        if(i==0)
        {
            count++;
            printf("%d\t",a[b]);
        }
    }
    printf("\ncount prime no.=%d\n",count);
    return 0;
}*/

//enter 10 values in array and count perfect no.
/*#include<stdio.h>

int main(){
    int a[10],b,c,i,count=0,sum=0;
    printf("Enter 10 values in array:\n");
    for(b=0;b<=9;b++)
    {
        scanf("%d",&a[b]);
    }
    printf("All perfect no.="); 
    for(b=0;b<=9;b++)
    {
        sum=0;
        for(c=1;c<a[b];c++)
        {
            if(a[b]%c==0)
            {
                sum=sum+c;
            }
        }
        if (sum==a[b])
        {
            printf("%d\t",c);
            count++;
        }
    }
    printf("\ncount perfect no.=%d",count);
    return 0;
}*/

// enter 10 value in array and count armstrong no.
/*#include<stdio.h>

int main(){
    int a[10],b,c,i,count=0,sum=0,ac=0,p,r,f,x;
    printf("Enter 10 values in array:\n");
    for(b=0;b<=9;b++)
    {
        scanf("%d",&a[b]);
    } 
    printf("All armstrong no.=");
    for(b=0;b<=9;b++)
    {
        
            count=0;
            sum=0;
            for(i=a[b];i>0;i=i/10)
            {
                count++;
            }
            
                for(x=a[b];x!=0;x=x/10)
                {
                    r=x%10;
                    f=1;
                    p=count;
                        while(p>=1)
                        {
                            f=f*r;
                            p--;
                        }
                        sum=sum+f;
                }
                    if (sum==a[b])
                    {
                        ac++;           
                        printf("%d\t",sum);
                    }
    }
    printf("\ncount is=%d\n",ac);
    return 0;
}*/

//enter 10 value and count palindrome from array
/*#include<stdio.h>

int main(){
    int a[10],b,c,i,r,count=0;
    printf("Enter 10 values in array:\n");
    for(b=0;b<10;b++)
    {
        scanf("%d",&a[b]);
    }
    printf("All palindrome no.=");
    for(b=0;b<=9;b++)
    {
        i=0;
        for(c=a[b];c>0;c=c/10)
        {
            r=c%10;
            i=(i*10)+r;
        }
        if (i==a[b])
        {
            count++;
            printf("%d\t",i);
        }
    }
    printf("\ncount is=%d\n",count);   
    return 0;
}*/

//enter ten values in array and search a value ;(print found not found)
/*#include<stdio.h>

int main(){
    int a[10],b,x,c,r,f;
    printf("Enter 10 element in array:\n");
    for(b=0;b<=9;b++)
    {
        scanf("%d",&a[b]);
    }

    printf("Enter element to search=");
    scanf("%d",&x);//        x---> x use for a search element 
    f=0;
    for(b=0;b<=9;b++)
    {
        if(a[b]==x)
        {
            f=1;
            break;
        }
    }
    if (f==1)
    {
        printf("element %d is found\n",x);
    }
    else
    {
        printf("element %d is not found",x);
    }
    return 0;
}*/


// enter 20 values in array and find the difference  between largest and smallest elements
/*#include<stdio.h>

int main(){
    int a[20],b,l,s,i,d;
    printf("Enter 20 elements in array:\n");
    for(b=0;b<=19;b++)
    {
        scanf("%d",&a[b]);
    }

    l=a[0];
    s=a[0];    
    for(b=0;b<=19;b++)
    {
        if(a[b]>l)
        {
            l=a[b];
        }
        if (a[b]<s)
        {
            s=a[b];
        }
    }
    printf("Largest element is=%d\n",l);
    printf("Smallest element is=%d\n",s);
    d=l-s;
    printf("Difference between largest,smallest elements=%d\n",d);   
    return 0;
}*/

// enter 10 values in array and interchange first five elements with last five elements
/*#include<stdio.h>

int main(){
    int a[10],b,t;
    printf("Enter 10 element in array:\n");
    for(b=0;b<=9;b++)
    {                                                   // 0 1 2 3 4 5 6 7 8 9 
        scanf("%d",&a[b]);                              // 6 7 3 4 5 1 2 8 9 10 
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
    return 0;
}*/

//enter ten values in array and insert a new no. in given poisition
/*#include<stdio.h>

int main(){
    int a[11],b,c,p,i;
    printf("Enter 10 values in array:\n");
    for(b=0;b<=9;b++)
    {
        scanf("%d",&a[b]);
    }
    printf("enter a position=");
    scanf("%d",&p);
    printf("Insert new number=");
    scanf("%d",&c);
    printf("Insert element after in array=\n");
    for(b=9;b>=p-1;b--)
    {
        a[b+1]=a[b];
    }
    a[p-1]=c;
    for(b=0;b<=10;b++)
    {
        printf("%d\n",a[b]);
    }
    return 0;
}*/

//enter 10 value in array and delete a no. in given position
/*#include<stdio.h>

int main(){
    int a[10],b,c=0,p,z;
    printf("Enter 10 value in array=\n");
    for(b=0;b<=9;b++)
    {
        scanf("%d",&a[b]);
    }
    printf("Enter a no. you want  to delete");
    scanf("%d",&p);
  
    for(b=0;b<=9;b++)
        {
            if(a[b]==p)
            {
            c=1;
            break;
            }
        }      
    if(c==1)
    {
        for(z=b;z<=9;z++)
        {
            a[z]=a[z+1];
        }
        printf("Now latest array are\n");
        for(b=0;b<=8;b++)
        {
            printf("%d\n",a[b]);
        }
    }
    else
    { 
    for(b=0;b<=9;b++)
        {
            printf("%d\n",a[b]);
        }
    }
    
    return 0;
}*/

//enter ten values in array and sort in assending order;
/*#include<stdio.h>

int main(){
    int a[30],b,i,j,o;
    printf("Enter 10 in array=\n");
    for(b=0;b<=9;b++)
    {
        scanf("%d",&a[b]);
    }
    for(b=0;b<=9;b++)
    {
        for(i=b+1;i<=9;i++)
        {
            if(a[b]>a[i])
            {
                o=a[b];
                a[b]=a[i];
                a[i]=o;
            }
        }
    }
    printf("The element arranged in assending order=\n");
    for(b=0;b<=9;b++)
    {
        printf("%d\n",a[b]);
    }
    return 0;
}*/

//enter ten values in array and duplicate value will be print zero; 
/*#include<stdio.h>

int main(){
    int a[20],b,p=0,i,d;
    printf("Enter 10 values in array:\n");
    for(b=0;b<=9;b++)
    {
        scanf("%d",&a[b]);
    }
    printf("After zero duplicate value are:\n");
    for(b=0;b<=9;b++)
    {   
        for(i=b+1;i<=9;i++)
        {
            if(a[b]==a[i])
            {
                a[i]=0;
            }        
        }
    }     
       
    for(b=0;b<=9;b++)
    {
        printf("%d\t",a[b]);
    }
    return 0;
}*/

// 1 2 3 4 5 6 7 8 9 10
// 0 1 2 3 4 5 6 7 8 9
//l=0
//u=9
//m=l+u/2     0+9/2=4.5
//6  search value
//l=m   4
//u=9
//m=4+9/2   6.5
//u=m u=6
//m=4+6/2 5o
//Enter 10 value values in array and print binary code.
/*#include<stdio.h>

int main(){
    int a[10],b,c,l,u,m,s,i,x;
    printf("Enter 10 value in array=\n");
    for(b=0;b<=9;b++)
    {
        scanf("%d",&a[b]);
    }
    printf("Enter value to find=");
    scanf("%d",&x);
    l=0;
    u=9;
    while(l<=u)
    {
        m=(l+u)/2;
    
        if(a[m]==x)
        {
            printf("value is found %d position value=%d",m+1,a[m]);
            break;
        }
        else if (a[m]<x)
        {
            l=m;
        }
        else
        {
            u=m;
        }
    }
    return 0;
}*/

//Enter value in arrray and search binary or not 
/*#include<stdio.h>

int main(){
    int a[100],b,x,i=0;
    printf("Enter element in array=");
    scanf("%d",&x);//7
    for(b=x;b>0;b=b/2)
    {
         a[i]=b%2;
         i++;   
    }
    for(b=i-1;b>=0;b--)
    {
        printf("%d",a[b]);
    }
    return 0;
}*/

//65  ---> 101
//97 ---> 141
//oquta(18)
/*#include<stdio.h>

int main(){
    int a[100],b,x,i=0;
    printf("Enter element in array=");
    scanf("%d",&x);
    for(b=x;b>0;b=b/8)
    {
        a[i]=b%8;
        i++;
    }
    for(b=i-1;b>=0;b--)
    {
        printf("%d ",a[b]);
    }
    return 0;
}*/

// 10= A
// 11= B
// 12= C
// 13= D
// 14= E
// 15 =F 

//431 ---> 1 10 15 ---> 1 A F   
//hexza(16)
/*#include<stdio.h>

int main(){
    int a[100],b,x,i=0;
    printf("Enter element in array=");
    scanf("%d",&x);
    for(b=x;b>0;b=b/16)
    {
        a[i]=b%16;
        i++;
    }
    // for(b=i-1;b>=0;b--)
    // {
    //     printf("%d ",a[b]);
    // }
    for(b=i-1;b>=0;b--)
    {
        if (a[b]==10)
        {
            printf("A ");
        }
        else if (a[b]==11)
        {
            printf("B ");
        }
        else if (a[b]==12)
        {
            printf("C ");
        }
        else if (a[b]==13)
        {
            printf("D ");
        }
        else if (a[b]==14)
        {
            printf("E ");
        }
        else if (a[b]==15)
        {
            printf("F ");
        }
        else
        {
            printf("%d ",a[b]);
        }
    }
    return 0;
}*/






