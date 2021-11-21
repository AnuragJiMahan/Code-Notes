//Enter name in string and print count them.
/*#include <stdio.h>

int main()
{
    int a,count=0;
    char b[20];
    printf("Enter your name=");
    gets(b);
    for (a=0;b[a]!='\0';a++)
    {
        count++;
    }
    printf("total length=%d", count);
    return 0;
}*/

//      second mathod  

/*#include<string.h>
int main()
{
    int a,count=0;
    char b[20];
    printf("Enter your name=");
    gets(b);
    count=strlen(b);
    printf("total length=%d", count);
    return 0;
}*/

//Enter name in string and print last latter
/*#include<stdio.h>

int main()
{
    int a,count=0;
    char b[20];
    printf("Enter your name=");
    gets(b);
    for (a=0;b[a]!='\0';a++)
    {
        count++;
    }
    printf("%c", b[count-1]);
    return 0;
}*/

//      second mathod

/*#include<string.h>

int main(){
    int a,count=0;
    char b[20];
    printf("Enter your name=");
    gets(b);
    count=strlen(b);
    printf("%c", b[count-1]);
    return 0;
}*/

//Enter name in string and count space in name and print them
/*#include<stdio.h>
#include<string.h>

int main(){
    int a,l=0,sp=0;
    char b[20];
    printf("Enter your name=");
    gets(b);
    l=strlen(b);
    for(a=0;a<=l-1;a++)
    {
        if(b[a]==' ')
        {
            sp++;
        }
    }
    printf("Total space in string=%d",sp);
    return 0;
}*/

//Enter name in string and count  words 
/*#include<stdio.h>
#include<string.h>

int main(){
    int a,l=0,nc=0;
    char b[20];
    printf("Enter your name=");
    gets(b);
    l=strlen(b);
    for(a=0;a<=l-1;a++)
    {
        if(b[a]==' ')
        {
            nc++;
        }
    }
    printf("Total words= %d\n",nc+1);
    return 0;
}*/

/*enter a string and print in reverse order   ---> ram    mar
#include<stdio.h>
#include<string.h>
int main(){
    int a,l=0;
    char b[20];
    printf("Enter your name=");
    gets(b);
    l=strlen(b);
    for(a=l-1;a>=0;a--)
    {   
        printf("%c",b[a]);
    }
    return 0;
}*/

//  second mathod for this question
/*#include<stdio.h>
#include<string.h>
int main(){
    int a,l=0;
    char b[20];
    printf("Enter your name=");
    gets(b);
    strrev(b);
    printf("%s",b);
    return 0;
}*/

//Enter sentence and count voval in words
/*#include<stdio.h>
#include<string.h>
int main(){
    int a,l,count=0;
    char b[20];
    printf("Enter your name=");
    gets(b);
    l=strlen(b);
    count=0;
    for(a=0;a<=l-1;a++)
    {
        if(b[a]=='a' || b[a]=='e' || b[a]=='i' || b[a]=='o' || b[a]=='u')
        {
            count++;
        }  
    }
    printf("Total voval is=%d",count);
    return 0;
}*/

//Enter sentence and count saprate voval a,e,i,o,u
/*#include<stdio.h>
#include<string.h>
int main(){
    int a,l=0,x=0,y=0,z=0,p=0,q=0;
    char b[20];
    printf("Enter any sentences=");
    gets(b);
    l=strlen(b);
    for(a=0;a<=l-1;a++)
    {
        if(b[a]=='a' || b[a]=='A')
        {
            x++;
        }
        if(b[a]=='e' || b[a]=='E')
        {
            y++;
        }      
        if(b[a]=='i' || b[a]=='I')
        {
            z++;
        }
        if(b[a]=='o' || b[a]=='O')
        {
            p++;
        }
        if(b[a]=='u' || b[a]=='U')
        {
            q++;
        }
    }
    printf("a voval count is=%d\n",x);
    printf("e voval count is=%d\n",y);
    printf("i voval count is=%d\n",z);
    printf("o voval count is=%d\n",p);
    printf("u voval count is=%d\n",q);
    return 0;
}*/

//enter string in capital latter and print in small latter         For exm;     RAM IS A GOOD BOY------>print=ram is a good boy  
/*#include<stdio.h>
#include<string.h>
int main(){
    int a
    char b[20];
    printf("Enter any sentence=");
    gets(b);
    strlwr(b);
    printf("%s",b); 
    return 0;
}*/
// SECOND MATHOD FOR THIS question
/*#include<stdio.h>
#include<string.h>
int main(){
    int a,l,i;
    char b[20];
    printf("Enter any sentence=");
    gets(b);
    l=strlen(b);
    for(a=0;a<=l-1;a++)
    {
        if(b[a]>=65 && b[a]<=91)
        {
            b[a]=b[a]+32;
        }
    }
    printf("%s",b);
    return 0;
}*/

//enter string in small latter and print in capital latter         For exm;     ram is a good boy------>print=RAM IS A GOOD BOY  
/*#include<stdio.h>
#include<string.h>
int main(){
    int a,l=0;
    char b[20];
    printf("Enter any sentence=");
    gets(b);
    l=strlen(b);
    strupr(b);
    printf("%s",b);
    return 0;
}*/
//  SECOND MATHOD FOR THIS QUESTION
/*#include<stdio.h>
#include<string.h>
int main(){
    int a,l=0;
    char b[20];
    printf("Enter any sentence=");
    gets(b);
    l=strlen(b);
    for(a=0;a<=l-1;a++)
    {
        if(b[a]>=97 && b[a]<=123)
        {
            b[a]=b[a]-32;
        }
    }
    printf("%s",b);
    return 0;
}*/

//enter full name but print only first name using gets function;
/*#include<stdio.h>
#include<string.h>
int main(){
    int a,l=0;
    char b[20];
    printf("Enter your full name=");
    gets(b);
    l=strlen(b);
    for(a=0;a<=l-1;a++)
    {
        if(b[a]==' ')
        {
            break;
        }
        printf("%c",b[a]);
    }
    return 0;
}*/

//enter first and last name but print only last name
/*#include<stdio.h>
#include<string.h>
int main(){
    int a,l;
    char b[20];
    printf("Enter you full name=");
    gets(b);
    l=strlen(b);
    for(a=0;a<=l-1;a++)
    {
        if(b[a]==' ')
        {
            break;
        }
    }
    for(a=a+1;a<=l-1;a++)
        {
            printf("%c",b[a]);
        }
    return 0;
}*/

//enter first name middle name and last name but print only middle name;
/*include<stdio.h>
#include<string.h>
int main(){
    int a,l=0;
    char b[20];
    printf("Enter your name=");
    gets(b);
    l=strlen(b);
    for(a=0;a<=l-1;a++)
    {
        if(b[a]==' ')
        {
            break;
        }
    }
    for(a=a+1;a<=l-1;a++)
        {
            printf("%c",b[a]);
            if(b[a]==' ')
            {
                break;
            }
        }
    return 0;
}*/

//Enter your name and print this type
//ram kumar ----> r.kumar
/*#include<stdio.h>
#include<string.h>
int main(){
    int a,l=0;
    char b[20];
    printf("Enter your name=");
    gets(b);
    l=strlen(b);
    printf("%c.",b[0]);
    for(a=1;a<=l;a++)
    {
        if(b[a]==' ')
        {
            break;
        }
    }
    for(a=a+1;a<=l;a++)
    {
        printf("%c",b[a]);
    }
    return 0;
}*/

//print this type -->ram kumar sharma----> r. k. sharma
/*#include<stdio.h>
#include<string.h>
int main(){
    int a,l=0;
    char b[20];
    printf("Enter your name=");
    gets(b);
    l=strlen(b);
    printf("%c.",b[0]);
    for(a=0;a<=l-1;a++)
    {
        if(b[a]==' ')
        {
            break;
        }
    }
    printf("%c.",b[a+1]);    
    for(a=a+1;a<=l;a++)
    {   
        if(b[a]==' ')
        {
            break;
        }
    }
    for(a=a+1;a<=l;a++)
    {
        printf("%c",b[a]);
    }
    return 0;
}*/

//ram kumar--->kumar ram
/*#include<stdio.h>
#include<string.h>
int main(){
    int a,l=0;
    char b[20];
    printf("Enter your name=");
    gets(b);
    l=strlen(b);
    for(a=0;a<=l-1;a++)
    {
        if(b[a]==' ')
        {
            break;
        }
    } 
    for(a=a+1;a<=l-1;a++)
    {
        printf("%c",b[a]);
    }
    printf(" ");
    for(a=0;a<=l-1;a++)
    {
        printf("%c",b[a]);
        if(b[a]==' ')
        {
            break;
        }
    }
    return 0;
}*/

//ram kumar =mar ramuk 
/*#include<stdio.h>
#include<string.h>
int main(){
    int a,l=0;
    char b[20];
    printf("Enter your name=");
    gets(b);
    l=strlen(b);
    for(a=l-1;a>=0;a--)
    {
        if(b[a]==' ')
        {
            break;
        }
    }
    for(a=a-1;a>=0;a--)
    {
        printf("%c",b[a]);
    }
    printf(" ");
    for(a=l-1;a>=0;a--)
    {
        if(b[a]==' ')
        {
            break;
        }
        printf("%c",b[a]);
    }
    
    return 0;
}*/

//ram kumar    =   Ram Kumar
/*#include<stdio.h>
#include<string.h>
int main(){
    int a,l=0;
    char b[20];
    printf("Enter your name =");
    gets(b);
    l=strlen(b);
    if(b[0]>=97 && b[0]<=122)
    {
        b[0]=b[0]-32;
        printf("%c",b[0]);
    }
    for(a=1;a<=l-1;a++)
    {
        if (b[a]==' ')
        {
            break;
        }
        printf("%c",b[a]);    
    }
    printf(" ");
    if(b[a+1]>=97 && b[a+1]<=122)
    {
        b[a+1]=b[a+1]-32;
        printf("%c",b[a+1]);
    }
    for(a=a+2;a<=l-1;a++)
    {
        printf("%c",b[a]);
    }
    return 0;
}*/

//RAM KUMAR    =Ram Kumar
/*#include<stdio.h>
#include<string.h>
int main(){
    int a,l=0;
    char b[20];
    printf("Enter your name =");
    gets(b);
    l=strlen(b);
    if(b[0]>=97 && b[0]<=122)
    {
        b[0]=b[0]-32;
    }
    printf("%c",b[0]);
    for(a=1;a<=l-1;a++)
    {
        if (b[a]==' ')
        {
            break;
        }
        if(b[a]>=65 && b[a]<=91)
        {
            b[a]=b[a]+32;
        }
        printf("%c",b[a]);    
    }
    printf(" ");
    if(b[a+1]>=97 && b[a+1]<=122)
    {
        b[a+1]=b[a+1]-32;
    }
        printf("%c",b[a+1]);
    for(a=a+2;a<=l-1;a++)
    {   
        if(b[a]>=65 && b[a]<=91)
        {
            b[a]=b[a]+32;
        }
            printf("%c",b[a]);
    }
    return 0;
}*/

//ram is a good boy ---->   ram---> (r) is consonant ---> print after (r) word   -->q
//                                  (a) is voval ---> print before (a) word  -->b
//                                  (m) is consonant ---> print after (m) word -->l
// print this squenc   ram is a good boy ----> qbl jr b fppc apx       
/*#include<stdio.h>
#include<string.h>
int main(){
    int a,l=0;
    char b[20];
    printf("Enter any sentence=");
    gets(b);
    l=strlen(b);
    for(a=0;a<=l-1;a++)
    {
        if(b[a]=='A' || b[a]=='E' || b[a]=='I' || b[a]=='O' || b[a]=='U')
            {
                b[a]=b[a]+1;
            }
        else if(b[a]>=65 && b[a]<=91)
            {
                b[a]=b[a]-1;
            }
        else if(b[a]=='a' ||b[a]=='e' || b[a]=='i' || b[a]=='o' || b[a]=='u')
            {
                b[a]=b[a]+1;
            }
        else if(b[a]>=97 && b[a]<=122)
            {
                b[a]=b[a]-1;
            }
    }
    printf("%s",b);
    return 0;
}*/

// ram is a a good boy      Ram Is A Good Boy
/*#include<stdio.h>
#include<string.h>
int main(){
    int a,l=0;
    char b[20];
    printf("Enter any sentence=");
    gets(b);
    l=strlen(b);
    if(b[0]>=97 && b[0]<=122)
    {
        b[0]=b[0]-32;
    }
    
    for(a=1;a<=l-1;a++)
    {   
        if(b[a]==' ')
        {
            a++;
            if(b[a]>=97 && b[a]<=122)
            {
            b[a]=b[a]-32;
            }

        }
        else
        {
            if(b[a]>=65 && b[a]<=90)
            {
            b[a]=b[a]+32;
            }    
        }
    }         
    printf("%s",b);
    return 0;
}*/

//B=RAM    A=RAM
/*#include<stdio.h>
#include<string.h>
int main(){
    int l=0,g=0,i;
    char b[20], a[20];
    printf("Enter first name=");
    gets(b);
    l=strlen(b);
    for(i=0;i<=l-1;i++)
    {
     a[g]=b[i];
     g++;
    }
    a[g]='\0';
    printf("%s",a);
    return 0;
}*/

//  SECOND  MATHOD

/*#include<stdio.h>
#include<string.h>
int main(){
    int l=0,g=0,i;
    char b[20], a[20];
    printf("Enter first name=");
    gets(b);
    strcpy(a,b);
    printf("%s",a);
    return 0;
}*/

/*A= ram ,B=kumar and print (A) and print them ---> ram kumar
#include<stdio.h>
#include<string.h>
int main(){
    int i,j=0,l=0,k=0;
    char b[20],a[20];
    printf("Enter first name=");
    gets(a);
    printf("Enter last name=");
    gets(b);
    l=strlen(b);
    k=strlen(a);
    for(i=0;i<=l-1;i++)
    {
        a[k]=b[i];
        k++;
    }
    a[k]='\0';
    printf("%s",a);
    return 0;
}*/

//          SECOND MATHOD

/*#include<stdio.h>
#include<string.h>
int main(){
    int l=0,g=0,i;
    char b[20], a[20];
    printf("Enter first name=");
    gets(b);
    printf("Enter Second name=");
    gets(a);
    strcat(b,a);
    printf("%s",b);
    return 0;
}*/

//A=radha ,B=krihn print (A) and print this type  nhsirk ahdar 
/*#include<stdio.h>
#include<string.h>
int main(){
    int i,l=0,k=0;
    char b[20],a[20];
    printf("Enter name=");
    gets(b);
    l=strlen(b);
for(i=l-1;i>=0;i--)
    {
        a[k]=b[i];
        k++;  

    }
    a[k]='\0';
    printf("%s",a);
    return 0;
}*/

//enter stirng and print string is palindrome or not;
/*#include<stdio.h>
#include<string.h>
int main(){
    int a,l=0,i=0;
    char b[20],k,r;
    printf("Enter word=");
    gets(b);//ram
    l=strlen(b);
    for(a=0;a<=l-1;a++)
    {
       if(b[a]!=b[l-1-a])
       {
           i=1;
           break;
       }
    }
    if(i==0)
    {
        printf("it is palindrome word");
    }
    else
    {
        printf("it is not palindrome word");
    }
    return 0;
}*/


//      SECOND MATHOD

/*#include<stdio.h>
#include<string.h>
int main(){
    int l=0,i;
    char b[20],a[20],k=0;
    printf("Enter word=");
    gets(b);//ram
    l=strlen(b);
    for(i=l-1;i>=0;i--)
    {
        a[k]=b[i];
        k++;

    }
    a[k]='\0';
    if(strcmp(a,b)==0)
    {
        printf("String Is Palindrome");
    }
    else
    {
        printf("String is Not palindrome");
    }
    
    return 0;
}*/
//      THIRD MATHOD
/*#include<stdio.h>
#include<string.h>
int main(){
    int l=0,i;
    char b[20],a[20],k=0;
    printf("Enter word=");
    gets(b);//ram
    l=strlen(b);
    for(i=l-1;i>=0;i--)
    {
        a[k]=b[i];
        k++;

    }
    a[k]='\0';
    if(strcmpi(a,b)==0)
    {
        printf("String Is Palindrome");
    }
    else
    {
        printf("String is Not palindrome");
    }
    
    return 0;
}*/

//enter string and count --->total space, words, vowel, conentes , digits and symbols;
//digit askim code--->48 to 57
/*#include<stdio.h>
#include<string.h>
int main(){
    int i,l=0,count=0,sc=0,vc=0,cc=0,dc=0,j,syc=0;
    char b[20];
    printf("Enter string=");
    gets(b);
    l=strlen(b);
    printf("total count=%d\n",l); 
    for(i=0;i<=l-1;i++)
    {
        if(b[i]>=48 && b[i]<=57)
        {
                dc++;
        }
        else if(b[i]==' ')
        {
            sc++;
        }
        else if(b[i]=='a'|| b[i]=='e' || b[i]=='i' || b[i]=='o' || b[i]=='u')
        {
            vc++;
        }        
        else if (b[i]>=97 && b[i]<=122)
        {
            cc++;
        }
        else
        {
            syc++;
        }
    }
    printf("total space=%d\n",sc);
    printf("total words=%d\n",sc+1); 
    printf("total vowel=%d\n",vc);
    printf("total consonant=%d\n",cc);
    printf("Total Digit=%d\n",dc);
    printf("total symbols=%d\n",syc);
    return 0;
}*/