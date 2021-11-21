/*
   1         2        3  
a[0][0]   a[0][1]  a[0][2]
   4         5        6
a[1][0]   a[1][1] a[1][2]
   7        8         9 
a[2][0]   a[2][1] a[2][2]
*/
/*#include<stdio.h>

int main(){
    int a[3][3],i,j;
    printf("Enter three by three matrix");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }

    printf("Now 3 by 3 matrix are\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/

/*
enter this matrix and print
11 22 33 
44 55 66
77 88 99
*/
/*#include<stdio.h>

int main(){
    int a[3][3],b[3][3],i,j,d[3][3];
    printf("Enter 3 by 3 matrix in a=\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter 3 by 3 matrix in b=\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("Now 3 by 3 matrix are=\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("sum of a and b matrix=\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            d[i][j]=a[i][j]+b[i][j];
            printf("%d ",d[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/

/*
1 2 3
4 5 6 
7 8 9
sum=45
*/
/*#include<stdio.h>

int main(){
    int a[3][3],i,j,sum=0;
    printf("Enter 3 by 3 matrix=\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Now 3 by 3 matrix are=\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d ",a[i][j]);
            sum=sum+a[i][j];
        }
        printf("\n");
    }
    printf("sum of matrix is= %d",sum);
    return 0;
}*/

/*
1 4 7
2 5 8 
3 6 9
*/
/*#include<stdio.h>

int main(){
    int a[3][3],i,j;
    printf("Enter 3 by 3 matrix=\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Now 3 by matrix are=\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}*/

/*
1 2 3  = 6
4 5 6  = 15
7 8 9  = 24
*/
/*#include<stdio.h>

int main(){
    int a[3][3],i,j,sum=0;
    printf("Enter 3 by 3 matrix=\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Now 3 by 3 matrix are=\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<=2;i++)
    {
        sum=0;
        for(j=0;j<=2;j++)
        {
            sum=sum+a[i][j];
        }
        printf("sum is=%d\n",sum);
    }
    return 0;
}
*/

/*
1  2  3  
4  5  6   
7  8  9 
12 15 18
*/
/*#include <stdio.h>

int main()
{
    int a[3][3],i,j,sum;
    printf("Enter 3 by 3 matrix=\n");
    for (i=0;i<=2;i++)
    {
        for (j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Now 3 by 3 matrix are=\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    printf("--------\n");
    for(i=0;i<=2;i++)
    {
        sum=0;
        for(j=0;j<=2;j++)
        {
            sum=sum+a[j][i];
        }
        printf("%d ",sum);
    }

    
    return 0;
}*/

/*
1  2  3
4  5  6
7  8  9
print  4 5 6 matrix
*/
/*#include<stdio.h>

int main(){
    int a[3][3],i,j;
    printf("Enter 3 by 3 matrix=\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Now 3 by 3 matrix are=\n");
        for(j=0;j<=2;j++)
        {
            printf("%d ",a[1][j]);
        }
 
    return 0;
}*/

/*
1  2  3
4  5  6
7  8  9
print  2 5 8 matrix
*/
/*#include<stdio.h>

int main(){
    int a[3][3],i,j;
    printf("Enter 3 by 3 matrix=\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Now midiel matrix is=\n");
    for(i=0;i<=2;i++)
    {
        printf("%d ",a[i][1]);
    }

    return 0;
}*/

/*
1  2  3
4  5  6
7  8  9
print  1 5 9 matrix
*/
/*#include<stdio.h>

int main(){
    int a[3][3],i,j;
    printf("Enter 3 by 3 matrix=\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Now matrix are=\n");
    for(i=0;i<=2;i++)
        {
            printf("%d ",a[i][i]);
        }
    return 0;
}*/

/*
1  2  3
4  5  6
7  8  9
print  3 5 7 matrix
*/
/*#include<stdio.h>

int main(){
    int a[3][3],i,j;
    printf("Enter 3 by 3 matrix=\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Now matrix are=\n");
    for(i=0;i<=2;i++)
        {
            printf("%d ",a[i][2-i]);       
        }   
    return 0;
}*/

/*
1  2  3     6 3 7
4  5  6     1 4 3
7  8  9     9 5 7
result:
35  26  34
83  62  85
131 98  136
*/
/*#include<stdio.h>

int main(){
    int a[3][3],b[3][3],c[3][3],i,j,k;
    printf("Enter first 3 by 3 matrix=\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter second 3 by 3 matrix=\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("after first and second matrix are=\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            c[i][j]=0;
                for(k=0;k<=2;k++)
                {
                    c[i][j]=c[i][j]+a[i][k]*b[k][j];
                }
        printf("%d ",c[i][j]);            
        }
        printf("\n");
    }
    return 0;
}*/


