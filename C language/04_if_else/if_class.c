/*Enter roll and five subject marks of a studentand print 
total marks 
percantage 
and division
rules for division
per>=60 then 1st
45 to 60 then 2nd
36 to 45 then 3rd
below 36 then Fail*/

#include<stdio.h>
int main()
{
    float roll,hindi,english,social,sanskrit,science,maths,percantage,division,total;
    printf("Enter roll no. =");
    scanf("%f",&roll);
    printf("Hindi no. =");
    scanf("%f",&hindi);
    printf("English no. =");
    scanf("%f",&english);
    printf("Sanskrit no. =");
    scanf("%f",&sanskrit);
    printf("social no. =");
    scanf("%f",&social);
    printf("science no. =");
    scanf("%f",&science);
    printf("maths no. =");
    scanf("%f",&maths);

    total =(hindi+english+maths+social+science+sanskrit);
    printf("Total marks%f\n",total);
    percantage = (total*100)/600;
    printf("percantage =%f\n",percantage);
    if (percantage>=60)
    {
        printf("1st division\n");
    }
    else{
        if(percantage>=45)
        {
            printf("2nd division\n");
        }
        if(percantage>=36)
        {
            printf("3rd division\n");
        }
        else
        {
            printf("Fail\n");
        }
    }
    return 0;
}