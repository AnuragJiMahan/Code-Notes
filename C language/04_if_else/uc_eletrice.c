/* enter old meter reading and new meter reading and find electric bill as follows
omr = old meter reading 
nmr = new meter reading 
uc = units consumed 
if uc<1000 then rate 2 pu
1000 to 4000 then rate 3 pu
4000 to 6000 then rate 4 pu
above 6000 then rate 5 pu
add 28% gst to the  bill also */

/*#include<stdio.h>

int main(){
    float omr,nmr,gst,amount,uc;
    printf("Enter old meter reading = ");
    scanf("%f",&omr);
    printf("Enter new meter reading = ");
    scanf("%f",&nmr);
    uc = nmr-omr;
    printf("Units consumed =%f\n",uc);
    
    if(uc<=1000)
        {
            amount = uc*2;
        }
    else if(uc<=4000)
        {
            amount = uc*3;
        }
    else if(uc<=6000)
        {
            amount = uc*4;
        }
    else
        {
            amount = uc*5;
        }
    gst  = (amount*28)/100+amount;
    printf("Electric bill =%f\n",amount);
    printf("after adding 28%% gst =%f\n",gst);
    
    return 0;
}*/


/*#include<stdio.h>

int main(){
    float omr,nmr,gst,amount,uc;
    printf("Enter old meter reading = ");
    scanf("%f",&omr);
    printf("Enter new meter reading = ");
    scanf("%f",&nmr);
    uc = nmr-omr;
    printf("Units consumed =%f\n",uc);
    
    if(uc<=1000)
        {
            amount = uc*2;
        }
    if (uc>1000 && uc<=4000)
        {
            amount = uc*3;
        }
    if (uc>4000 && uc<=6000)
        {
            amount = uc*4;
        }
    if (uc>6000)
        {
            amount = uc*5;
        }
    
    gst = (amount*28)/100+amount;
    printf("Electric bill =%f\n",amount);
    printf("after adding 28%% gst =%f\n",gst);
    return 0;
}
*/

/* enter omr and nmr and find bill as follows

first 200 units @ 2 pu
rest 4 pu
*/

/*#include<stdio.h>

int main(){
    float omr,nmr,bill,uc,amount;
    printf("Enter old meter reading = ");
    scanf("%f",&omr);
    printf("Enter new meter reading = ");
    scanf("%f",&nmr);
    uc = nmr-omr;
    printf("Units consumed =%f\n",uc);
    if (uc<=200)
        {
            amount = uc*2;
        }
    else 
        {
             amount =(200*2)+(uc-200)*4;
        }
    printf("Electric bill =%f\n",amount);
    return 0;
}*/

/*#include<stdio.h>

int main(){
      float omr,nmr,amount,uc;
      printf("Enter old meter reading =");
      scanf("%f",&omr);
      printf("Enter new meter reading = ");
      scanf("%f",&nmr);
      uc = nmr-omr;
      printf("Units consumed =%f\n",uc);
      if (uc<=200)
      {
          amount = uc*2;
      }
      else 
      {
          amount = (uc-200)*4+(200*2);
      }
      printf("bill =%f\n",amount);  
      return 0;
}*/

/*enter omr and nmr and find bill 
first 400 units @ 2 pi 
next 1000 units @ 3 pu 
rest 4 pu */

/*#include<stdio.h>

int main(){
    float omr, nmr,amount,uc;
    printf("Enter old meter reading =");
    scanf("%f",& omr);
    printf("Enter new meter reading =");
    scanf("%f", & nmr);
    uc = nmr-omr;
    printf("Units consumed =%f\n",uc);
    if(uc<=400)
    {
        amount = uc*2;
    }
    else if(uc<=1400)
    {
        amount = (400*2)+(uc-400)*3;
    }
    else
    {
        amount = (400*3)+(1000*2)+(uc-1400)*4;
    }
    printf("Electric bill =%f\n",amount);
    return 0;
}
*/
/*#include<stdio.h>

int main(){
    float omr, nmr,amount,uc;
    printf("Enter old meter reading =");
    scanf("%f",& omr);
    printf("Enter new meter reading =");
    scanf("%f", & nmr);
    uc = nmr-omr;
    printf("Units consumed =%f\n",uc);
    if(uc<=400)
    {
        amount = uc*2;
    }
    else if(uc<=1400)
    {
        amount = (400*2)+(uc-400)*3;
    }
    else 

    {
        amount = (400*2)+(1000*3)+(uc-1400)*4;
    }

    printf("Electric bill =%f\n",amount);
    return 0;
}
*/

// enter omr ,nmr and find bill 
// first 1000 units @ 2 pu
// next 2000 units @ 2.5 pu 
// next 4000 units @ 3 pu 
// rest 4 pu 

/*#include<stdio.h>

int main(){
    float omr,nmr,uc,amount;
    printf("Enter old meter reading =");
    scanf("%f",&omr);
    printf("Enter new meter reading = ");
    scanf("%f",&nmr);
    uc = nmr-omr;
    printf("Units consumed =%f\n",uc);
    if(uc<=1000)
    {
        amount = uc*2;
    }
    else if(uc<=3000)
    {
        amount = (1000*2)+(uc-1000)*2.5;
    }
    else if(uc<=7000)
    {
        amount = (1000*2)+(2000*2.5)+(uc-3000)*3;
    }
    else
    {
        amount = (1000*2)+(2000*2.5)+(4000*3)+(uc-7000)*4;
    }
    printf("Electric bill =%f\n",amount);
    return 0;
}
    
*/
// enter omr and nmr and find bill 
// first 300 unit free 
// next 800 units @ 1 pu
// next 2000 units @ 3 pu
// next 4000 units @ 4 pu
// next 5000 units @ 5 pu 
// rest 7 pu


// add 28% gst to the bill 


/*#include<stdio.h>

int main(){
    float omr, nmr,uc,amount,gst;
    printf("Enter old meter reading =");
    scanf("%f",&omr);
    printf("Enter new meter reading = ");
    scanf("%f",&nmr);
    uc = nmr-omr;
    printf("Units consumed =%f\n",uc);
    if (uc<=300)
    {
        amount = 0;
    }
    else if(uc<=1100)
    {
        amount = 0+(uc-300)*1;
    }
    else if(uc<=3100)
    {
         amount = 0+(800*1)+(uc-1100)*3;
    }
    else if(uc<=7100)
    {
        amount = 0+(800*1)+(2000*3)+(uc-3100)*4;
    }
    else if(uc<=12100)
    {
        amount =0+(800*1)+(2000*3)+(4000*4)+(uc-7100)*5;
    }
    else 
    {
        amount =0+(800*1)+(2000*3)+(4000*4)+(5000*5)+(uc-12100)*7;
    }
    gst  = (amount*28)/100+amount;
    printf("Electrice bill =%f\n",amount);
    printf("after adding 28%% gst =%f\n",gst);

    return 0;
}
*/
 
//  enter omr and nmr and find bill 
//  first 200 units free 
//  next 500 units @ 2 pu
//  next 1000 units @ 3 pu
//  next 4000 units @ 4 pu
//  rest 6 pu
//  minimum bill 420

#include<stdio.h>

int main(){
    float omr, nmr,uc,amount,bill;
   
    printf("Enter old meter reading =");
    scanf("%f",&omr);
    printf("Enter new meter reading = ");
    scanf("%f",&nmr);
    uc = nmr-omr;
    printf("Units consumed =%f\n",uc);
    if(uc<=200)
    {
        amount = 0;
    }
    else if(uc<=700)
    {
        amount = 0+(uc-200)*2;
    }
    else if(uc<=1700)
    {
        amount = 0+(500*2)+(uc-700)*3;
    }
    else if(uc<=5700)
    {
        amount = 0+(500*2)+(1000*3)+(uc-1700)*4;
    }
    else
    {
        amount = 0+(500*2)+(1000*3)+(4000*4)+(uc-5700)*5;
    }
    if(uc<420)
    {
        amount = 420;
    }
    printf("minimum bill =%f\n",amount);

    return 0;
}