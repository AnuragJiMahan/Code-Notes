//enter number 1 to 7 anf print print its corresponding day
/*#include<stdio.h>

int main(){
    int x;
    printf("Enter number = ");
    scanf("%d", &x);
    switch(x)
    {
        case 1:printf("SUNDAY\n");break;
        case 2:printf("MONDAY\n");break;
        case 3:printf("TUESDAY\n");break;
        case 4:printf("WEDNESDAY\n");break;
        case 5:printf("THURSDAY\n");break;
        case 6:printf("FRIDAY\n");break;
        case 7:printf("SATURDAY\n");break;
        default: printf("INVALID\n");
    }
    switch(x)
    {
        case 1:printf("ONE\n");break;
        case 2:printf("TWO\n");break;
        case 3:printf("THREE\n");break;
        case 4:printf("FOUR\n");break;
        case 5:printf("FIVE\n");break;
        case 6:printf("SIX\n");break;
        case 7:printf("SEVEN\n");break;
        default: printf("INVALID\n");
    }
    return 0;
}
*/

// enter date, month and year and print date as follows
// d=4
// m=4
// y=2012
// 4-april-2012

/*#include<stdio.h>

int main(){
    int date,year,month;
    
    printf("Enter date = \n");
    scanf("%d", &date);
    printf("Enter month = \n");
    scanf("%d", &month);
    printf("Enter year = \n");
    scanf("%d", &year);
    
    
    switch(month)
    {
        case 1:printf("%d-january-%d\n",date,year);break;
        case 2:printf("%d-february-%d\n",date,year);break;
        case 3:printf("%d-march-%d\n",date,year);break;
        case 4:printf("%d-april-%d\n",date,year);break;
        case 5:printf("%d-may-%d\n",date,year);break;
        case 6:printf("%d-june-%d\n",date,year);break;
        case 7:printf("%d-july-%d\n",date,year);break;
        case 8:printf("%d-august-%d\n",date,year);break;
        case 9:printf("%d-september-%d\n",date,year);break;
        case 10:printf("%d-october-%d\n",date,year);break;
        case 11:printf("%d-november-%d\n",date,year);break;
        case 12:printf("%d-december-%d\n",date,year);break;
        default:printf("INVALID\n");
    }
    return 0;
}*/


// enter two values and print their
//sum, sub, mul, div, avg, min or max according to the choice input from the user ?
 
/*#include<stdio.h>
#include<math.h>

int main(){
    int num1,num2,result,min,max;
    int op;

    printf("Enter num1 = \n");
    scanf("%d", &num1);
    printf("Enter operation(1=+,2=-,3=*,4=/,5=avg,6=min,7=max) = \n");
    scanf("%d", &op);
    printf("Enter num2 = \n");
    scanf("%d", &num2);
    switch(op)
    {
       case 1: 
       result = num1+num2;
       printf("Result Add = %d\n",result);
       break;

       case 2: result = num1-num2;
       printf("Result Sub = %d\n",result);
       break;         
                 
       case 3: 
       result = num1*num2;
       printf("Result Mult = %d\n",result);
       break;         
            
       case 4: 
       result = num1/num2;
       printf("Result Div = %d\n",result);
       break;             
            
       case 5: 
       result = (num1+num2)/2;
       printf("Result Avg = %d\n",result);
       break;

       case 6: 
       result = num1<num2?num1:num2;
       printf("Result Min = %d\n",result);
       break;

       case 7:
       result = num1>num2?num1:num2;
       printf("Result Max = %d\n",result);
       break;

       default: 
       printf("Invalid");
       
    }   

     return 0;

}*/
