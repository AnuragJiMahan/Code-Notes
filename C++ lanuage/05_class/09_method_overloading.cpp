// method overloading - if there are multiple functions in a class or a program with same name but different signatures then it is called as method overloading.
// simple interst 
/*#include<iostream>
using namespace std;
void si() 
{
    int amt,rate,year,si;
    amt=3400;
    rate=4.4;
    year=5;
    si=amt*rate*year/100;
    cout<<"simple interst is "<<si<<endl;
}
void si(int aa) 
{
    int amt,rate,year,si;
    amt=aa;
    rate=4.4;
    year=5;
    si=amt*rate*year/100;
    cout<<"simple interst is "<<si<<endl;
}
void si(int aa,int rr) 
{
    int amt,rate,year,si;
    amt=aa;
    rate=rr;
    year=5;
    si=amt*rate*year/100;
    cout<<"simple interst is "<<si<<endl;
}
void si(int aa,int rr,int yy) 
{
    int amt,rate,year,si;
    amt=aa;
    rate=rr;
    year=yy;
    si=amt*rate*year/100;
    cout<<"simple interst is "<<si<<endl;
}
int main(){
si();
si(12000);
si(15000,4);
si(9000,5.5,6);
return 0;
}*/

/*#include<iostream>
using namespace std;
void si() 
{
    int amt,rate,year,si;
    cout<<"Enter amt: ";
    cin>>amt;
    cout<<"Enter rate: ";
    cin>>rate;
    cout<<"Enter year: ";
    cin>>year;
    si=amt*rate*year/100;
    cout<<"simple interst is "<<si<<endl;
    cout<<"-------------------------------\n";
}
void si(int aa) 
{
    int amt,rate,year,si;
    amt=aa;
    cout<<"Enter rate: ";
    cin>>rate;
    cout<<"Enter year: ";
    cin>>year;
    si=amt*rate*year/100;
    cout<<"simple interst is "<<si<<endl;
    cout<<"------------------------------\n";
}
void si(int aa,int rr) 
{
    int amt,rate,year,si;
    amt=aa;
    rate=rr;
    cout<<"Enter year: ";
    cin>>year;
    si=amt*rate*year/100;
    cout<<"simple interst is "<<si<<endl;
    cout<<"------------------------------\n";
}
void si(int aa,int rr,int yy) 
{
    int amt,rate,year,si;
    amt=aa;
    rate=rr;
    year=yy;
    si=amt*rate*year/100;
    cout<<"simple interst is "<<si<<endl;
    cout<<"------------------------------\n";
}
int main(){
    int aa,rr,yy;
    // question 1
    si();

    // question 2
    cout<<"Enter amt: ";
    cin>>aa;
    si(aa);

    // question 3
    cout<<"Enter amt: ";
    cin>>aa;
    cout<<"Enter rate: ";
    cin>>rr;
    si(aa,rr);
    
    
    // question 4
    cout<<"Enter amt: ";
    cin>>aa;
    cout<<"Enter rate: ";
    cin>>rr;
    cout<<"Enter year: ";
    cin>>yy;
    si(aa,rr,yy);
return 0;
}*/

/*#include<iostream>
using namespace std;
class smi{
    private:
    int amt,rate,year,si;
    public:
    void getsi() 
    {
        int amt,rate,year,si;
        cout<<"Enter amt: ";
        cin>>amt;
        cout<<"Enter rate: ";
        cin>>rate;
        cout<<"Enter year: ";
        cin>>year;
        si=amt*rate*year/100;
        cout<<"simple interst is "<<si<<endl;
        cout<<"-------------------------------\n";
    }
    void getsi(int aa) 
    {
        int amt,rate,year,si;
        amt=aa;
        cout<<"Enter rate: ";
        cin>>rate;
        cout<<"Enter year: ";
        cin>>year;
        si=amt*rate*year/100;
        cout<<"simple interst is "<<si<<endl;
        cout<<"------------------------------\n";
    }
    void getsi(int aa,int rr) 
    {
        int amt,rate,year,si;
        amt=aa;
        rate=rr;
        cout<<"Enter year: ";
        cin>>year;
        si=amt*rate*year/100;
        cout<<"simple interst is "<<si<<endl;
        cout<<"------------------------------\n";
    }
    void getsi(int aa,int rr,int yy) 
    {
        int amt,rate,year,si;
        amt=aa;
        rate=rr;
        year=yy;
        si=amt*rate*year/100;
        cout<<"simple interst is "<<si<<endl;
        cout<<"------------------------------\n";
    }
};
int main(){
    smi object;
    int aa,rr,yy;
    // question 1
    object.getsi();

    // question 2
    cout<<"Enter amt: ";
    cin>>aa;
    object.getsi(aa);

    // question 3
    cout<<"Enter amt: ";
    cin>>aa;
    cout<<"Enter rate: ";
    cin>>rr;
    object.getsi(aa,rr);
    
    
    // question 4
    cout<<"Enter amt: ";
    cin>>aa;
    cout<<"Enter rate: ";
    cin>>rr;
    cout<<"Enter year: ";
    cin>>yy;
    object.getsi(aa,rr,yy);
return 0;
}*/

