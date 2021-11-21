// *
// **
// ***
// ****
// ***** print them.
/*#include<stdio.h>

int main()
{
int a,b;
for(a=1;a<=5;a++)
{
    for(b=1;b<=a;b++)
    {
        printf("*");
    }
    printf("\n");
}
return 0;  
}*/


// ***** 
// **** 
// *** 
// ** 
// * 
/*#include<stdio.h>
int main(){
int a,b;
for(a=1;a<=5;a++)
{
    for(b=5;b>=a;b--)
    {
        printf("*");
    }
    printf("\n");
}
return 0;
}*/

// *
// ***
// ***** 
// ******* 
// ********* 
/*#include<stdio.h>

int main(){
    int a,b;
    for(a=1;a<=9;a=a+2)
    {
        for(b=1;b<=a;b++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/

// ********* 
// ******* 
// ***** 
// ***
// *
/*#include<stdio.h>

int main(){
    int a,b;
    for(a=1;a<=9;a=a+2)
    {
        for(b=9;b>=a;b--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/


//    *
//   **
//  *** 
// **** 
//***** 
/*#include<stdio.h>

int main(){
    int a,b,c ;
    for(a=1;a<=5;a++)
    {
        for(c=a;c<=4;c++)
        {
            printf(" ");
        }
        for(b=1;b<=a;b++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    return 0;
}*/

//***** 
// **** 
//  *** 
//   **
//    *
/*#include<stdio.h>

int main(){
    int a,b,c;
    for(a=1;a<=5;a++)
    {
        for(c=a;c>1;c--)
        {
            printf(" ");
        }
        for(b=5;b>=a;b--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/

//         *
//       *   *
//     *   *   *
//   *   *   *   *
// *   *   *   *   *
/*#include<stdio.h>

int main(){
    int a,b,c ;
    for(a=1;a<=5;a++)
    {
        for(c=a;c<=4;c++)
        {
            printf(" ");
        }
        for(b=1;b<=a;b++)
        {
            printf("* ");
        }
        
        printf("\n");
    }
    return 0;
}*/

// *   *   *   *   *
//   *   *   *   *
//     *   *   *
//       *   *
//         *

/*#include<stdio.h>

int main(){
    int a,b,c;
    for(a=1;a<=5;a++)
    {
        for(c=a;c>1;c--)
        {
            printf(" ");
        }
        for(b=5;b>=a;b--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}*/

//         *
//       *   *
//     *   *   *
//   *   *   *   *
// *   *   *   *   *
//   *   *   *   *
//     *   *   *
//       *   *
//         *

/*#include<stdio.h>

int main(){
    int a,b,c;
    for(a=1;a<5;a++)
    {
        for(c=a;c<=4;c++)
        {
            printf(" ");
        }
        for(b=1;b<=a;b++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(a=1;a<=5;a++)
    {
        for(c=a;c>1;c--)
        {
            printf(" ");
        }
        for(b=5;b>=a;b--)
        {
            printf("* ");
        }
        printf("\n");
    }   
    return 0;
}*/

//**********
//****  ****
//***    ***
//**      **
//*        *
//**      **
//***    ***
//****  ****
//**********

/*#include<stdio.h>

int main(){
    int a,b,c;
    for(a=1;a<=5;a++)
        {
          
            for(b=5;b>=a;b--)
             {
                 printf("*");
             }
            for(c=a;c>1;c--)
            {
                printf(" ");
            }
           
           
            for(c=a;c>1;c--)
            {
                printf(" ");
            }
            for(b=5;b>=a;b--)
            {
                printf("*");
            }
            printf("\n");
        }

    for(a=2;a<=5;a++)
        {
            for(b=1;b<=a;b++)
            {
                printf("*");
            }
            for(c=a;c<=4;c++)
            {
                printf(" ");
            }
           
           
            for(c=a;c<=4;c++)
            {
                printf(" ");
            }
            for(b=1;b<=a;b++)
            {
                printf("*");
            }
            printf("\n");
        } 
    return 0;
}*/

// 1
// 12
// 123
// 1234
// 12345
/*#include<stdio.h>

int main(){
    int a,b,c;

    for(a=1;a<=5;a++)
        {
           for(b=1;b<=a;b++)
            {
                printf("%d",b);
            }
            printf("\n");
        } 
    return 0;
}*/

// 12345
// 1234
// 123
// 12
// 1

/*#include<stdio.h>

int main(){
    int a,b;
    for(a=5;a>=1;a--)
    {
        for(b=1;b<=a;b++)
        {
            printf("%d",b);
        }
        printf("\n");
    }
    return 0;
}*/


// 54321
// 4321
// 321
// 21
// 1

/*#include<stdio.h>

int main(){
    int a,b,c;
    for(a=5;a>=1;a--)
    {
        for(b=a;b>=1;b--)
        {
            printf("%d",b);
        }
        printf("\n");
    }
    return 0;
}*/

// 54321
// 5432
// 543
// 54
// 5
/*#include<stdio.h>

int main(){
    int a,b;
    for(a=1;a<=5;a++)
    {
        for(b=5;b>=a;b--)
        {
            printf("%d",b);
        }
        printf("\n");
    }
    return 0;
}*/

// 5
// 45
// 345
// 2345
// 12345
/*#include<stdio.h>

int main(){
    int a,b;
    for(a=5;a>=1;a--)
    {
        for(b=a;b<=5;b++)
        {
            printf("%d",b);
        }
        printf("\n");
    }
    return 0;
}*/

// 5
// 54
// 543
// 5432
// 54321
/*#include<stdio.h>

int main(){
    int a,b;
    for(a=5;a>=1;a--)
    {
        for(b=5;b>=a;b--)
        {
            printf("%d",b);
        }
        printf("\n");
    }
    return 0;
}*/

// 1
// 123
// 12345
// 1234567
// 123456789
/*#include<stdio.h>

int main(){
    int a,b;
    for(a=1;a<=9;a=a+2)
    {
        for(b=1;b<=a;b++)
        {
            printf("%d",b);
        }
        printf("\n");
    }
    return 0;
}*/

// 123456789
// 1234567
// 12345
// 123
// 1
/*#include<stdio.h>

int main(){
    int a,b;
    for(a=9;a>=1;a=a-2)
    {
        for(b=1;b<=a;b++)
        {
            printf("%d",b);
        }
        printf("\n");
    }
    return 0;
}*/

// 987654321
// 7654321
// 54321
// 321
// 1
/*#include<stdio.h>

int main(){
    int a,b;
    for(a=9;a>=1;a=a-2)
    {
        for(b=a;b>=1;b--)
        {
            printf("%d",b);
        }
        printf("\n");
    }
    return 0;
}*/

// 987654321
// 9876543
// 98765
// 987
// 9
/*#include<stdio.h>

int main(){
    int a,b;
    for(a=1;a<=9;a=a+2)
    {
        for(b=9;b>=a;b--)
        {
            printf("%d",b);
        }
        printf("\n");
    }
    return 0;
}*/

// 1
// 13
// 135
// 1357
// 13579
/*#include<stdio.h>

int main(){
    int a,b;
    for(a=1;a<=9;a=a+2)
    {
        for(b=1;b<=a;b=b+2)
        {
            printf("%d",b);
        }
        printf("\n");
    }
    return 0;
}*/


// 13579
// 1357
// 135
// 13
// 1
/*#include<stdio.h>

int main(){
    int a,b;
    for(a=9;a>=1;a=a-2)
    {
        for(b=1;b<=a;b=b+2)
        {
            printf("%d",b);
        }
        printf("\n");
    }
    return 0;
}*/

// 1
// 31
// 531
// 7531
// 97531
/*#include<stdio.h>

int main(){
    int a,b;
    for(a=1;a<=9;a=a+2)
    {
        for(b=a;b>=1;b=b-2)
        {
            printf("%d",b);
        }
        printf("\n");
    }
    return 0;
}*/


// 97531
// 7531
// 531
// 31
// 1
/*#include<stdio.h>

int main(){
    int a,b;
    for(a=9;a>=1;a=a-2)
    {
        for(b=a;b>=1;b=b-2)
        {
            printf("%d",b);
        }
        printf("\n");
    }
    return 0;
}*/

// 13579
// 3579
// 579
// 79
// 9
/*#include<stdio.h>

int main(){
    int a,b;
    for(a=1;a<=9;a=a+2)
    {
        for(b=a;b<=9;b=b+2)
        {
            printf("%d",b);
        }
        printf("\n");
    }
    return 0;
}*/

// 97531
// 9753
// 975
// 97
// 9
/*#include<stdio.h>

int main(){
    int a,b;
    for(a=1;a<=9;a=a+2)
    {
        for(b=9;b>=a;b=b-2)
        {
            printf("%d",b);
        }
        printf("\n");
    }
    return 0;
}*/

// 1
// 1 3 5
// 1 3 5 7 9
// 1 3 5 7 9 11 13
// 1 3 5 7 9 11 13 15 17
/*#include<stdio.h>

int main(){
    int a,b;
    for(a=1;a<=17;a=a+4)
    {
        for(b=1;b<=a;b=b+2)
        {
            printf("%d ",b);
        }
        printf("\n");
    }
    return 0;
}*/


// 1 3 5 7 9 11 13 15 17
// 1 3 5 7 9 11 13
// 1 3 5 7 9
// 1 3 5
// 1
/*#include<stdio.h>

int main(){
    int a,b;
    for(a=17;a>=1;a=a-4)
    {
        for(b=1;b<=a;b=b+2)
        {
            printf("%d ",b);
        }
        printf("\n");
    }
    return 0;
}*/

// 1
// 5 3 1
// 9 7 5 3 1 
// 13 11 9 7 5 3 1
// 17 15 13 11 9 7 5 3 1 
/*#include<stdio.h>

int main(){
    int a,b;
    for(a=1;a<=17;a=a+4)
    {
        for(b=a;b>=1;b=b-2)
        {
            printf("%d ",b);
        }
        printf("\n");
    }
    return 0;
}*/

// 17 15 13 11 9 7 5 3 1
// 13 11 9 7 5 3 1 
// 9 7 5 3 1
// 5 3 1  
// 1
/*#include<stdio.h>

int main(){
    int a,b;
    for(a=17;a>=1;a=a-4)
    {
        for(b=a;b>=1;b=b-2)
        {
            printf("%d ",b);
        }
        printf("\n");
    }
    return 0;
}*/

// 1
// 22
// 333
// 4444
// 55555
/*#include<stdio.h>

int main(){
    int a,b;
    for(a=1;a<=5;a++)
    {
        for(b=1;b<=a;b++)
        {
            printf("%d",a);
        }
        printf("\n");
    }
    return 0;
}*/

// 55555
// 4444
// 333
// 22
// 1
/*#include<stdio.h>

int main(){
    int a,b;
    for(a=5;a>=1;a--)
    {
        for(b=1;b<=a;b++)
        {
            printf("%d",a);
        }
        printf("\n");
    }
    return 0;
}*/

// 11111
// 2222
// 333
// 44
// 5
/*#include<stdio.h>

int main(){
    int a,b;
    for(a=1;a<=5;a++)
    {
        for(b=5;b>=a;b--)
        {
            printf("%d",a);
        }
        printf("\n");
    }
    return 0;
}*/

// 5
// 44
// 333
// 2222
// 11111
/*#include<stdio.h>

int main(){
    int a,b;
    for(a=5;a>=1;a--)
    {
        for(b=5;b>=a;b--)
        {
            printf("%d",a);
        }
        printf("\n");
    }
    return 0;
}*/

// 1
// 23
// 456
// 78910
// 1112131415
/*#include<stdio.h>

int main(){
    int a,b,c=1;
    for(a=1;a<=5;a++)
    {
        for(b=1;b<=a;b++)
        {
            printf("%d",c);
            c++;
        }
        printf("\n");
    }
    return 0;
}*/

// 12345
// 6789
// 101112
// 1314
// 15
/*#include<stdio.h>

int main(){
    int a,b,c=1;
    for(a=1;a<=5;a++)
    {
        for(b=a;b<=5;b++)
        {
            printf("%d",c);
            c++;
        }
        printf("\n");
    }
    return 0;
}*/

// 12345
// 78910
// 121314
// 1617
// 19
/*#include<stdio.h>

int main(){
    int a,b,c=1;
    for(a=1;a<=5;a=a+1)
    {
        for(b=a;b<=5;b++)
        {
            printf("%d",c);
            c++;
        }
        c++;
        printf("\n");
    }
    return 0;
}*/

// 1
// 01
// 010
// 1010
// 10101
/*#include<stdio.h>

int main(){
    int a,b,c=1;
    for(a=1;a<=5;a++)
    {
        for(b=1;b<=a;b++)
        {
            if (c%2==0)
            {
                printf("0");       
            }
            else
            {
                printf("1");
            }
            c++;
        }
        printf("\n");
    }
    return 0;
}*/
//                          2 mathad for this question
/*#include<stdio.h>

int main(){
    int a,b,c=1;
    for(a=1;a<=5;a++)
    {
        for(b=1;b<=a;b++)
        {
            printf("%d",c);
            if (c==0)
            {
            c=1;
            }
            else
            {
            c=0;
            }
    }
        printf("\n");
    }
    return 0;
}*/

// 1
// 00
// 111
// 0000
// 11111
/*#include<stdio.h>

int main(){
    int a,b,c=1;
    for(a=1;a<=5;a++)
    {
        for(b=1;b<=a;b++)
        {
            printf("%d",c);
        }
            if (c==0)
            {
            c=1;
            }
            else
            {
            c=0;
            }
        printf("\n");
    }
    return 0;
}*/

// 1
// 01
// 101
// 0101
// 10101
/*#include<stdio.h>

int main(){
    int a,b,c,d=0;
    for(a=1;a<=5;a++)
    {
        if(d==1)
        {
            d=0;//d=0
        }
        else
        {
            d=1;
            c=d;
        }
        
        for(b=1;b<=a;b++)
        {
            printf("%d",c);//0 1
            if (c==1)
            {
                c=0;//c=0
            }   
            else
            {
                c=1;
            }
        }printf("\n");
    }
    return 0;
}*/










/*                                  aaskim code use for a=97   A=65.                                        */
// a
// ab
// abc 
// abcd
// abcde
/*#include<stdio.h>

int main(){
    int a,b;
    for(a=97;a<=101;a++)
    {
        for(b=97;b<=a;b++)
        {
            printf("%c",b);
        }
        printf("\n");
    }
    return 0;
}*/

// abcde 
// abcd 
// abc 
// ab 
// a
/*#include<stdio.h>
int main()
{  //aaskim code use in a=97   A=65
    int a,b;
    for(a=101;a>=97;a=a-1)
    {   
        for(b=97;b<=a;b++)
        {
            printf("%c",b);
        }
        
        printf("\n");
    }
    return 0;
}*/
//          using 3 variable for this question
/*#include<stdio.h>

int main()
{  //aaskim code use in a=97   A=65
    int a,b;
    char c;
    for(a=101;a>=97;a=a-1)
    {   c=97;
        for(b=97;b<=a;b++)
        {
            printf("%c",c);
            c++;
        }
        
        printf("\n");
    }
    return 0;
}*/


// edcba
// edcb
// edc
// ed 
// e
/*#include<stdio.h>

int main(){
    int a,b;
    for(a=97;a<=101;a++)
    {   
        for(b=101;b>=a;b--)
        {
            printf("%c",b);
        }
        printf("\n");
    }
    return 0;
}*/

// edcba
// dcba
// cba
// ba
// a
/*#include<stdio.h>

int main(){
    int a,b;
    for(a=101;a>=97;a=a-1)
    {   
        for(b=a;b>=97;b--)
        {
            printf("%c",b);
        }
        printf("\n");
    }
    return 0;
}*/

// abcde
// bcde
// cde
// de
// e
/*#include<stdio.h>

int main(){
    int a,b;
    for(a=97;a<=101;a++)
    {
        for(b=a;b<=101;b++)
        {
            printf("%c",b);
        }
        printf("\n");
    }
    return 0;
}*/

// a
// abc 
// abcde 
// abcdefg 
// abcdefghi
/*#include<stdio.h>

int main(){
    int a,b;
    for(a=97;a<=105;a=a+2)
    {
        for(b=97;b<=a;b++)
        {
            printf("%c",b);
        }
        printf("\n");
    }
    return 0;
}*/

// a
// bb
// ccc
// dddd
// eeeee
/*#include<stdio.h>

int main(){
    int a,b;
    for(a=97;a<=101;a++)
    {
        for(b=97;b<=a;b++)
        {
            printf("%c",a);
        }
        printf("\n");
    }
    return 0;
}*/

// abcde 
// fghi
// jkl
// mn
// o
/*#include<stdio.h>

int main(){
    int a,b,c=97;
    for(a=97;a<=101;a++)
    {
        for(b=a;b<=101;b++)
        {
            printf("%c",c);
            c++;
        }
        printf("\n");
    }
    return 0;
}*/

// abcde 
// ghij 
// lmn 
// pq 
// s 
/*#include<stdio.h>

int main(){
    int a,b,c=97;
    for(a=97;a<=101;a++)
    {
        for(b=a;b<=101;b++)
        {
            printf("%c",c);
            c++;
        }
        c++;
        printf("\n");
    }
    return 0;
}*/

//     1
//    121
//   12321
//  1234321
// 123454321    
/*#include<stdio.h>

int main(){
    int a,b,c,d;
    for(a=1;a<=5;a++)
    {
        for(c=1;c<=5-a;c++)
        {
            printf("  ");
        }
        for(b=1;b<=a;b++)
        {
            printf("%d ",b);
        }
        for(d=a-1;d>=1;d--)
        {
            printf("%d ",d);
        }
        printf("\n");
    }
    return 0;
}*/