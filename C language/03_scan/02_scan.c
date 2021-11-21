// Enter radiou and find area or circumference
#include<stdio.h>

int main()
{   
    float r;
    printf("Enter the value of r \n");
    scanf("%f", &r);
    printf("area is %f \n", 3.14*r*r);
    
    printf("circumference is %f \n", 2*3.14*r);

//Enter three value and print them sum or avg
    float a , b , c , d , e ;
    printf("Enter the value of a \n");
    scanf("%f", &a);

    printf("Enter the value of b \n");
    scanf("%f", &b);

    printf("Enter the value of c \n");
    scanf("%f", &c);
    d = a+b+c;
    printf("sum of a,b,c is %f \n", d);
    printf("avg of d is %f \n", d/3);
    return 0;
}