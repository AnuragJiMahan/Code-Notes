/*#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int snak(char y, char c)
{
    if(y==c)
    {
        return 0;
    }

    if(y=='s' && c=='g'){
        return -1;
    }
    else if(y=='g' && c=='s'){
        return 1;
    }

    if(y=='s' && c=='w'){
        return 1;
    }
    else if(y=='w' && c=='s'){
        return -1;
    }

    if(y=='g' && c=='w'){
        return -1;
    }
    else if(y=='w' && c=='g'){
        return 1;
    }
}
int main(){
    
    int result;
    char y,c;
    srand(time(0));
    int number = rand()%100 + 1;

    if(number<33){
        c = 's';
    }
    else if(number>33 && number<66){
        c ='w';
    }
    else{
        c ='g';
    }
    printf("Enter 's' for sanke , 'w' for water , 'g' for gun=\n");
    scanf("%c",&y);
    result=snak(y,c);
    if(result==0)
    {
        printf("Game Draw!\n");
    }
    else if(result==1)
    {
        printf("You Win!\n");
    }
    else
    {
        printf("You lose!\n");
    }
    printf("You chose %c and computer chose %c. ", y, c);
    return 0;
}*/