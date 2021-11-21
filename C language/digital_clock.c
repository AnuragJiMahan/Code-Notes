#include<stdio.h>
#include<windows.h>
int main(){
    int h=0,m=0,s=0,i;
    printf("Enter hour,minutes,seconds=\n");
    scanf("%d %d %d",&h,&m,&s);
    start:
    for(h;h<24;h++)
    {
        for(m;m<60;m++)
        {
            for(s;s<60;s++)
            {
                system("cls");
                printf("%d %d %d",h,m,s);
                if(h<12)
                {
                    printf(" AM");
                }
                else
                {
                    printf(" PM");
                }
                for(double i=0;i<3619999;i++)
                {
                    i++;
                    i--;
                }
            }s=0;
        }m=0;
    }h=0;
    goto start;
    return 0;
}