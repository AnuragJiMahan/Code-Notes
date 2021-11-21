/* outside the class deinfation - in this method a function is only declared
inside the class but it is created outside the class using scope resolution
operator (::) .
*/

/*#include<iostream>
using namespace std;
class factorial{
    private:
    int f,x,i;
    public:
    void setval(int a)
    {
	x=a;
    }
    void getfact();


    void display()
    {
	cout<<"Factorial of "<<f<<endl;
    }
};
void factorial :: getfact()
{
	f=1;
	for(i=1;i<=x;i++)
	{
	    f=f*i;
	}
}

int main(){
    factorial object;
    int x;
    cout<<"Enter x: ";
    cin>>x;
    object.setval(x);
    object.getfact();
    object.display();
    return 0;
}*/