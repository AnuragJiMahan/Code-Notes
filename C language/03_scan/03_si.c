/*#include<stdio.h>
int main(){
    float atm , amount , year , si;
    printf("Enter the value of atm\n");
    scanf("%f",&atm);

    printf("Enter the value of amount\n");
    scanf("%f",&amount);

    printf("Enter the value of year\n");
    scanf("%f",&year);
    si = (atm*amount*year)/100;
    printf("simple interest %f", si);
    
    return 0;
}*/
/*#include<stdio.h>

int main(){
    float x ,y,z;
    printf("Enter num.of adults\t");
    scanf("%f",&x);

    printf("Enter num. of children\t");
    scanf("%f",&y);

    z = (x*200)+(y*200);
    printf("Bill is %f", z);
    return 0;
}*/

/*#include<stdio.h>

int main(){
    float qty,rate,payableatm,discount;

    printf("Enter qty\t");
    scanf("%f", &qty);

    printf("Enter rate\t");
    scanf("%f", &rate);
    
    payableatm = qty*rate-20;
    printf("payable atm %f",payableatm);
    return 0;
}*/

/*#include<stdio.h>

int main(){
    float qty,rate,payableatm,discount,x;

    printf("Enter qty\t");
    scanf("%f", &qty);

    printf("Enter rate\t");
    scanf("%f", &rate);
    
    payableatm = qty*rate;
    printf("payable atm after deducting  %f \n",payableatm);
   
    discount = (payableatm*10)/100;
    printf("deduction 10 discount %f\n",discount);
   
    x = payableatm - discount;
    printf("discount %f",x);
    return 0;

}*/

/*#include<stdio.h>

int main(){
    float rate,male,female,Gst;

    printf("Enter no. of male\t");
    scanf("%f",& male);

    printf("Enter no. of female\t");
    scanf("%f",& female);
    
    rate = (male*200)+(female*140);
    printf("Bill is %f\n",rate);

    Gst = (rate*28)/100+rate;
    printf("Gst is %f", Gst);
    return 0;
}*/

#include <stdio.h>

int main()
{ 
    float a, b, c, d, e, f;
    printf("No of coin of paisa\t");
    scanf("%f", &a);
    printf("No of coin of paisa\t");
    scanf("%f", &b);

    printf("No of coin of rs\t");
    scanf("%f", &c);
    printf("No of coin of rs\t");
    scanf("%f", &d);
    printf("No of coin of rs\t");
    scanf("%f", &e);
    printf("No of coin of rs\t");
    scanf("%f", &f);

    printf("Total amount of coins is %f\n",.25*a + .50*b + 1*c + 2*d + 5*e + 10*f);

    return 0;
}


