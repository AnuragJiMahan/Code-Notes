#include<stdio.h>

int main(){
    int a,x;
    char b[20];
    printf("Enter last value=");
    scanf("%d", &x);
    fflush(stdin);
    printf("Enter your name=");
    //scanf("%s",b);
    gets(b);
    for(a=1;a<=x;a++)
    {
    printf("%s\n",b);
    }
    return 0;
}

// string :- a string is a sequence of characters terminated with a null \'0' character;
//gets(b) :- this function is used for string with space characters;
//fflush(stdin): this function is used for all unwanted keword in keyboard buffers;
//

