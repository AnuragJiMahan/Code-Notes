//structure:- an structure is used to create a new user defined data types in c;

//enter day month year and print in date format
/*#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter Day, Month, Year=");
    scanf("%d %d %d", &a ,&b ,&c);
    printf("%d / %d / %d",a,b,c);

    return 0;
}*/
/*#include<stdio.h>
struct mydate
{
        int a,b,c;
}d;

int main()
{
    printf("Enter Day, Month, Year=");
    scanf("%d %d %d", &d.a ,&d.b ,&d.c);
    printf("%d / %d / %d",d.a,d.b,d.c);

    return 0;
}
*/
/*#include<stdio.h>
struct mydate
{
        int a,b,c;
};

int main()
{   
    struct mydate d;
    printf("Enter Day, Month, Year=");
    scanf("%d %d %d", &d.a ,&d.b ,&d.c);
    printf("%d / %d / %d",d.a,d.b,d.c);

    return 0;
}*/

//use 1 struct and print 2 date
/*#include<st-dio.h>
struct date{
    int x,y,z;
};

int main(){
    struct date d,d1;

    printf("Enter Date\n");
    printf("Enter Day, Month, Year=");
    scanf("%d %d %d",&d.x, &d.y, &d.z);
/
    printf("Enter birthbay date\n");
    printf("Enter Day, Month, Year=");
    scanf("%d %d %d",&d1.x, &d1.y, &d1.z);

    printf("Date: %d-%d-%d\n",d.x,d.y,d.z);
    printf("Birthday Date: %d-%d-%d",d1.x,d1.y,d1.zs);
    return 0;
}*/

//enter your current date and enter your birth date and print how many year are old you
/*#include<stdio.h>
struct date
{
    int x,y,z;
};

int main(){
    struct date d,d1,age;
    printf("Enter current date=");
    scanf("%d %d %d",&d.x, &d.y ,&d.z);
    printf("Enter birth date=");
    scanf("%d %d %d",&d1.x, &d1.y, &d1.z);
    age.x=d.x-d1.x;
    age.y=d.y-d1.y;
    age.z=d.z-d1.z;
    
    if(age.x<0)
    {
        age.x=age.x+30;
        age.y=age.y-1;
    }
    if(age.y<0)
    {
        age.y=age.y+12;
        age.z=age.z-1;

    }
    printf("Your age %d Year %d month and %d Days old ",age.z,age.y,age.x);
    return 0;
}*/

//enter student roll namd and five subject marks and print roll name total percentege and divisoin using structure;
/*#include<stdio.h>
struct no
{
    int x,a,h,e,m,p,c,j;
    char y;
    float i,percentage,marks;
};
int main(){
    struct no r;
        printf("Enter Roll No.= ");
        scanf("%d",&r.x);
        printf("Enter Name=");
        scanf("%s",&r.y);

        printf("\nHindi=");
        scanf("%d",&r.h);
        printf("English=");
        scanf("%d",&r.e);
        printf("Maths=");
        scanf("%d",&r.m);
        printf("Physics=");
        scanf("%d",&r.p);
        printf("Chemistry=");
        scanf("%d",&r.c);

        r.marks=r.h+r.e+r.m+r.p+r.c;
        printf("\nTotal marks=%0.f\n",r.marks);
        r.percentage=(r.marks*100)/500;
        printf("Percentege=%f\n",r.percentage);
    
        if(r.percentage>=60)
        {
            printf("1th Divisoin\n");
        }
        else if(r.percentage>=45)
        {
            printf("2nd Divisoin\n");
        }
        else
        {
            printf("Fail\n");
        }
    printf("-------------------------------\n");

    return 0;
}*/

//enter student roll namd and five subject marks and print roll name total percentege and divisoin using structure for a format with 5 student ;
/*#include<stdio.h>
#include<string.h>
struct no
{
    int x,a,h,e,m,p,c;
    char y[20],div[20];
    float i,percentage,marks;
};
int main(){
    struct no r[5];
    int j;
    for(j=0;j<=1;j++)
    {
        printf("Enter Roll No.= ");
        scanf("%d",&r[j].x);
        fflush(stdin);
        printf("Enter Name=");
        gets(r[j].y);
        printf("\nHindi=");
        scanf("%d",&r[j].h);
        printf("English=");
        scanf("%d",&r[j].e);
        printf("Maths=");
        scanf("%d",&r[j].m);
        printf("Physics=");
        scanf("%d",&r[j].p);
        printf("Chemistry=");
        scanf("%d",&r[j].c);

        r[j].marks = r[j].h + r[j].e + r[j].m + r[j].p + r[j].c;
        printf("\nTotal marks=%0.f\n",r[j].marks);
        r[j].percentage=(r[j].marks*100)/500;
        printf("Percentege=%f\n",r[j].percentage);
        
        if(r[j].percentage>=60) 
        {
            strcpy(r[j].div,"first");
        }
        else if(r[j].percentage>=45)
        {
            strcpy(r[j].div,"second");
        }
        else if(r[j].percentage>=36)
        {
            strcpy(r[j].div,"Third");
        }
        else
        {
            strcpy(r[j].div,"Fail");
        }
        printf("--------------------------\n");
    }

    printf("Roll\tName\tTotal\tPer\tDiv\n");
    for(j=0;j<=1;j++)
    {
        printf("%d\t%s\t%0.f\t%.2f\t%s\n",r[j].x,r[j].y,r[j].marks,r[j].percentage,r[j].div);
    }
    return 0;
}*/

