/*wap to enter number of adults and kids gone for a movie and find bill 
rate per adult 100
rate per kids 30

if total bill > 4000 then ad 28% gst
2000 to 4000 then add 18% gst 
below 2000 then add 5% gst
*/
 /*#include<stdio.h>
 
 int main(){
     int adults,kids,rate,gst,totalbill;
     printf("Enter no. of adults\t");
     scanf("%d", &adults);
     printf("Enter no. of kids\t");
     scanf("%d", &kids);
    
     rate = (adults*100)+(kids*30);
     printf("Total bill = %d\n",rate);
    
    if (totalbill>4000)
    {
        gst = (rate*28)/100+rate;
    }
    else{
        if(totalbill>2000){
        gst = (rate*18)/100+rate;
        }
        else{
            gst = (rate*5)/100+rate;
        }
    }
     printf("total bill after adding gst = %d\n",gst);
     return 0;
 }*/


//one line solved question 


/*enter qty and rate and print payable amt after deducting discount as follow
qyt>1000 then 10%
otherwise 5%*/
/*#include<stdio.h>

int main(){
    float qty,rate,payableamt,discount,x,z;
    printf("Enter qty =");
    scanf("%f",& qty);
    printf("Enter rate =");
    scanf("%f", & rate);
    payableamt = qty*rate;
    printf("payable amount before discount =%f\n",payableamt);
    x = qty>1000?10:5;
    discount =rate*qty*x/100;
    z= payableamt-discount;
    printf("10%% discount =%d\n",z);
    return 0;
}
*/
 
// ENTER QTY AND RATE AND PRINT PAYABLE AMT 
// IF QTY>1000 THEN DISCOUNT 10%
// 500 TO 1000 THEN DISCOUNT 5%
// BELOW 500 THEN 2%

/*#include<stdio.h>

int main(){
    float qty,rate,payableamt,discount,x,z;
    printf("Enter qty =");
    scanf("%f",& qty);
    printf("Enter rate =");
    scanf("%f", & rate);
    payableamt = qty*rate;
    printf("payable amount before discount =%f\n",payableamt);
    x = qty>=1000?10:qty>=500?5:2;
    discount = (qty*rate*x)/100;
    z = payableamt-discount;
    printf("after deducting discount = %f\n",z);
    return 0;
}*/


/*enter male and female members gone for a circus and find bill as follows.
rate per male 120
rate per female 80

discount rates are as follows:
if total bill>2000 then discount 10% on male and 20% on female members
1000 to 2000 then discount 5% on male and 10% on female members
below 1000 then discount 2% on male and 5% on female members
*/

#include<stdio.h>

int main(){
    float ratemale,ratefemale,male,female,bill,discount,discountmale,discountfemale,x,y,a,z;
    printf("Enter no. of male = ");
    scanf("%f",&male);
    printf("Enter no. of female = ");
    scanf("%f",&female);
   
    ratemale = male*120;
    printf("bill for male = %f\n",ratemale);

    ratefemale= female*80;
    printf("bill for female = %f\n",ratefemale);

    x=bill>2000?10:bill>1000?5:2;
    discountmale = ratemale*x/100;
    
    y= bill>2000?20:bill>1000?10:5;
    discountfemale =ratefemale*y/100;
    
    z= ratemale-discountmale;
    printf("After discount bill for male = %f\n",z);
    
    a= ratefemale-discountfemale;
    printf("After discount bill for female = %f\n",a);

    printf("Total bill after discount = %f\n",z+a);
    return 0;
}


