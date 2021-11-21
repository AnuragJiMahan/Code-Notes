/*wap to enter age of a person and print
veryold - age>90
old - age 60 to 90
medium age - age 40 to 60
young - age 20 to 40
teen  - age 10 to 20 
child - age 5 to 10
kid - age 2 to 5
infant - age below 2 */
/*#include<stdio.h>

int main(){
    int age,veryold,young,old,kid,infant,medium,teen,child;
    printf("Enter age =");
    scanf("%d",&age);
    if(age>=90)
    {
        printf("veryold person\n");
    }
    if(age<90 && age>=60)
    {
        printf("old person\n");
    }
    if(age<60 && age>=40)
    {
        printf("medium person\n");
    }
    if(age<40 && age>=20)
    {
        printf("young person\n");
    }
    if(age<20 && age>=10)
    {
        printf("teenager\n");
    }
    if(age<10 && age>=5)
    {
        printf("child\n");
    }
    if(age<5 && age>=2)
    {
        printf("kid\n");
    }
    if(age<2)
    {
    printf("infant\n");
    }
    return 0;
}*/

#include<stdio.h>

int main(){
    int age;
    printf("Enter age =");
    scanf("%d",& age);
    if (age>=90)
    {
        printf("veryold person\n");
    }
    else if(age>=60)
        {
           printf("old person\n");
        }
    else if (age>=40)
        {
           printf("medium person\n");               
        }
    else if(age>=20)
        {
            printf("young person\n");
        }
    else if(age>=10)
        {
            printf("teeneger\n");
        }
    else if(age>=5)
        {
            printf("child\n");
        }
    else if(age>=2)
        {
            printf("kid\n");
        }
    else
        {
            printf("infant\n");
        }
    return 0;
}



