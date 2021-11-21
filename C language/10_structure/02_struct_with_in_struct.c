//enter roll,name,Hno,street,city,pin and print use struct with in struct
/*#include<stdio.h>

struct address
{
    int hno,pin;
    char street[20],city[20];
};
struct student
{
    int r;
    char n[20];
    struct address k;
};
int main(){
    struct student st;
    printf("Enter student roll=");
    scanf("%d",&st.r);
    fflush(stdin);
    printf("Enter student name=");
    gets(st.n);
    printf("Enter student hno=");
    scanf("%d",&st.k.hno);
    fflush(stdin);
    printf("Enter student street=");
    gets(st.k.street);
    fflush(stdin);
    printf("Enter student city=");
    gets(st.k.city);
    printf("Enter student pin=");
    scanf("%d",&st.k.pin);

    printf("Roll\tName\tHno\tStreet\tCity\tPin\n");
    printf("----------------------------------------------\n");
    printf("%d\t%s\t%d\t%s\t%s\t%d\n",st.r,st.n,st.k.hno,st.k.street,st.k.city,st.k.pin);
    return 0;
}*/

//enter roll,name,Hno,street,city,pin and print use struct with in struct in array
/*#include<stdio.h>

struct address
{
    int hno,pin;
    char street[20],city[20];
};
struct student
{
    int r;
    char n[20];
    struct address k;
};
int main(){
    struct student st[5];
    int i;
    for(i=0;i<=1;i++)
    {
        printf("Enter student roll=");
        scanf("%d",&st[i].r);
        fflush(stdin);
        printf("Enter student name=");
        gets(st[i].n);
        printf("Enter student hno=");
        scanf("%d",&st[i].k.hno);
        fflush(stdin);
        printf("Enter student street=");
        gets(st[i].k.street);
        fflush(stdin);
        printf("Enter student city=");
        gets(st[i].k.city);
        printf("Enter student pin=");
        scanf("%d",&st[i].k.pin);
        printf("----------------------\n");
    }
    printf("Roll\tName\tHno\tStreet\tCity\tPin\n");
    printf("----------------------------------------------\n");
    for(i=0;i<=1;i++)
    {
        printf("%d\t%s\t%d\t%s\t%s\t%d\n",st[i].r,st[i].n,st[i].k.hno,st[i].k.street,st[i].k.city,st[i].k.pin);
    }
    return 0;
}*/


  