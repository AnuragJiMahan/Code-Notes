//Enter name in string and print first latter
/*#include<stdio.h>

int main(){
    char b[20];
    printf("Enter your name=");
    gets(b);
    printf("%c",b[0]);
    return 0;
}*/

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


