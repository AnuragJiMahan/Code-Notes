/*#include<iostream>
using namespace std;
int main(){
    float amount;
    float value(float p,int n,float r=0.15); //prototype
    void printline(char ch='*', int len=40); //prototype

    printline();    //user default values for arguments

    amount=value(5000.00,5);    //default for 3rd argument

    cout<<"\n   Final value = "<<amount<<"\n\n";
    printline('=');     //use default value for 2nd argument 
return 0;
}
/*-----------------------------------------------------*/
/*float value(float p,int n,float r)
{
    int year = 1;
    float sum = p;

    while (year<=n)
    {
        sum=sum*(1+r);
        year=year+1;
    }
    return(sum);
}
void printline(char ch, int len)
{
    for(int i=1;i<=len;i++) cout<<ch;
    cout<<"\n";
}*/


//find simple interst with using defaltu argument
/*#include<iostream>
using namespace std;
int main(){
    float si;
    float simpleinterst(float p, float r, float y=2);

    si=simpleinterst(2000,20);
    cout<<"Simple Interst: "<<si<<endl;
    return 0;
}
float simpleinterst(float p, float r, float y)
{
    float si;
    si=p*r*y/100;
    return(si);
}*/

//find simple interst with using defaltu argument
/*#include<iostream>
using namespace std;
void si()
{
    float si;
    float simpleinterst(float p, float r, float y=2);
    si=simpleinterst(2000,200);
    cout<<"Simple Interst: "<<si<<endl;
}
void si(float p)
{   
    float si;
    float simpleinterst(float p, float r , float y=2);
    si=simpleinterst(p,20);    
    cout<<"Simple Intrest: "<<si<<endl;
}
void si(float p, float r)
{
    float si;
    float simpleinterst(float p , float r , float y=2);
    si=simpleinterst(p,r);
    cout<<"Simple Intrest: "<<si<<endl;
}
void si(float p, float r , float y)
{
    float si;
    float simpleinterst(float p, float r, float y);
    si=simpleinterst(p,r,y);
    cout<<"Simple Intrest: "<<si<<endl;
}
int main(){
    si();
    si(1200);
    si(1200,20);
    si(2000,20,4);
return 0;
}
float simpleinterst(float p, float r, float y)
{
    float si;
    si=p*r*y/100;
    return(si);
}*/