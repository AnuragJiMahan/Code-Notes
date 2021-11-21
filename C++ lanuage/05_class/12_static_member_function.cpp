/*a static member function is shared between the objects of the class.


a static member function is called using the class name, not the object. we call it like 
classname::function()
*/
/*#include<iostream>
using namespace std;
class test
{
    int code;
    static int count;
    public:
    void setcode(void)
    {
        code= ++count;
    }
    void showcode(void)
    {
        cout<<"object number: "<<code<<"\n";
    }
    static void showcount(void)
    {
        cout<<"count: "<<count<<"\n";
    }
};
int test::count;
int main(){
    test t1,t2;

    t1.setcode();
    t2.setcode();

    test::showcount();
    
    test t3;
    t3.setcode();

    test::showcount();
     
    t1.showcode();
    t2.showcode();
    t3.showcode();
return 0;
}*/