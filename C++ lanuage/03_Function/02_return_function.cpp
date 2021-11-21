//Calculate area of rectangle
/*#include<iostream>
using namespace std;
int area(){
    int l,b,x;
    cout<<"Enter lenght=";
    cin>>l;
    cout<<"Enter breath=";
    cin>>b;
    x=l*b;
    return(x);
}
int main(){
    int i;
    i=area();
    cout<<"Area of rectangle="<<i;
return 0;
}*/

//Calculate area of triangle;
/*#include<iostream>
using namespace std;
float area(){ 
    float h,b,x;
    cout<<"Enter base=";
    cin>>b;
    cout<<"Enter hight=";
    cin>>h;
    x=(b*h)/2;
    return(x);    
}
int main(){
    float i;
    i=area();
    cout<<"Area of triangle="<<i;
return 0;
}*/

//Calculate area of circle;
/*#include<iostream>
using namespace std;
float area(){
    float r,x;
    cout<<"Enter radius=";
    cin>>r;
    x=3.14*r*r;
    return(x);
}
int main(){
    float i=area();
    cout<<"Area of circle="<<i;
return 0;
}*/

//Calculate area of circle circumference;
/*#include<iostream>
using namespace std;
float area(){
    float r,k,x;
    cout<<"Enter radius=";
    cin>>r;
    x=2*3.14*r;
    return(x);
}
int main(){
    float k;
    k=area();
    cout<<"Area of circle="<<k;
return 0;
}*/

//Enter x value and print factorial number;
/*#include<iostream>
using namespace std;
int factorial(){
    int f=1,x;
    cout<<"Enter value of x=";
    cin>>x;
    while(x>=1)
    {
        f=f*x;
        x--;
    }
    return(f);
}
int main(){
    int k;
    k=factorial();
    cout<<"Factorial="<<k;
return 0;
}*/

//Enter ten value in array and print sum with function;
/*#include<iostream>
using namespace std;
int add(){
    int a[10],b,sum=0;
    cout<<"Enter ten value in array=\n";
    for(b=0;b<=9;b++)
    {
        cin>>a[b];
    }
    for(b=0;b<=9;b++)
    {
        sum=sum+a[b];
    }
    return(sum);
}
int main(){
    int i;
    i=add();
    cout<<"sum="<<i;
    return 0;   
}*/

//Enter ten value in array and search value use with function;
/*#include<iostream>
using namespace std;
int search(){
    int a[10],b,f,x;
    cout<<"Enter ten value in array=";
    for(b=0;b<=9;b++)
    {
        cin>>a[b];
    }
    cout<<"Enter search element=";
    cin>>x;
    for(b=0;b<=9;b++)
    {
        if(a[b]==x)
        {
            f=1;
            break;
        }
    }
    return(f);
}
int main(){
    int i=0;
    i=search();
    if(i==1)
    {
        cout<<"Element is found";
    }
    else{
        cout<<"Element is not found";
    }
return 0;
}*/

//Enter no. and print palindrom or not using with function;
/*#include<iostream>
using namespace std;
int  palindrom(){
    int a,x=0,r,b,f;
    cout<<"Enter no.=";
    cin>>a;
    for(b=a;a>0;a=a/10)
    {
        r=a%10;
        x=(x*10)+r;
    }
    if(x==b){
        f=1;
    }
    else{
        f=0;
    }
    return(f);
}
int main(){
    int i;
    i=palindrom();
    if(i==1)
    {
        cout<<"It is palindrom";
    }
    else
    {
        cout<<"It is not palindrom";
    }
return 0;
}*/

//Enter string and count vowels using function;
/*#include<iostream>
#include<string.h>
using namespace std;
int vowel(){
    int l=0,x,vc=0,i;
    char b[20];
    cout<<"Enter string=";
    gets(b);
    l=strlen(b);
    for(i=0;i<l-1;i++)
    {
        if(b[i]=='a'|| b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u')
        {
            vc++;
        }
    }
    return(vc);
}
int main(){
    int k;
    k=vowel();
    cout<<"Total vowel in string="<<k;
return 0;
}*/

//Enter value and print power -->eg.-->pow(2,5)--->32;
/*#include<iostream>
using namespace std;
int power(){
    int a,b,p=1;
    cout<<"Enter value=";
    cin>>a;
    cout<<"Enter power=";
    cin>>b;
    cout<<a<<"^"<<b<<"=";
    while(b!=0)
    {
        p=p*a;
        b--;
    }
    return(p);
}
int main(){
    int k;
    k=power();
    cout<<k;
return 0;
}*/

