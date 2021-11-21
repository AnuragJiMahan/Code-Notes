//Enter roll no. ,subject and find marks or percentage
#include<stdio.h>
int main(){
    float roll ,Hindi , English , Physics , Chemistry, Maths , marks , percentage;
    printf("Enter the roll number\t");
    scanf("%f", &roll);

    printf("Hindi\t");
    scanf("%f", &Hindi);

    printf("English\t");
    scanf("%f", &English);

    printf("Physics\t");
    scanf("%f", &Physics);
   
    printf("Chemistry\t");
    scanf("%f", &Chemistry);
   
    printf("Maths\t");
    scanf("%f", &Maths);

    marks = Hindi + English + Physics +Chemistry+ Maths;
    printf("Total Marks %f", marks);

    percentage = marks*100/500;
    printf("Percentage %f", percentage);

    return 0;
}