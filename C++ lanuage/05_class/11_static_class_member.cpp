/*Basic Meaning of Static Storage Class
1. static variable is automatically initialized to zero
2. static variable is initialized only once.


Use of Static in Object Oriented Programming
1. a static variable is  shared between the objects of the class.
2. a static variable is not maintained seperately for all the object of class.
3.  a static variable is automatically initialized to zero
4. a static variable is necessary to be declared outisde the class with the help of scope resolution operator (::)
*/
/*#include<iostream>
using namespace std;
class item{
    static int count;
    int number;
    public:
    void getdata(int a)
    {
        number=a;
        count++;
    }
    void getcount(void)
    {
        cout<<"count: "<<endl;
        cout<<count<<"\n";
    }  
};
int item :: count;
int main(){
    item a,b,c;     //count is initilized to zera
    a.getcount();   // display count
    b.getcount();
    c.getcount();

    a.getdata(100);
    b.getdata(200);
    c.getdata(300);

    cout<<"After reading data"<<"\n";

    a.getcount();
    b.getcount();
    c.getcount();
return 0;
}*/

/*#include<iostream>
using namespace std;
int main() {
    
    int i;
      for(i=1;i<=10;i++) 
      {
        static int a;
        cout<<a<<endl;
        a++;
      }
return(0);
}*/

