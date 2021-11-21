/*Banking application
ac no.=
name=
ac type=
balance=
withdraw=
deposit=
print them
*/
/* actype   
1. saving - min bal 5000                     deposit limit  - 2500
2. current - min bal 20000                   deposit limit - 5000
3. fixed - no partial withdraw facility      deposit limit - 10000 
*/
#include<iostream>
#include<string.h>
using namespace std;
class Bank {
    private:
        int acno;
        long int amt;
        char name[30],accounttype[30];
        long balance;
    public:
    void OpenAccount()
    {
        cout<<"Enter Account Number:";
        cin >> acno;
        cout<<"Account Type:";
        cin>>accounttype;
        cout<<"Enter Name:";
        cin>>name;
        cout<<"Enter Balance:";
        cin>>balance;
        cout<<"---------------------------\n";
    }
    void getShowAccount()
    {
        cout<<"Account Number: "<< acno<<endl;
        cout<<"Account Type: "<<accounttype<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Balance: "<<balance<<endl;
        cout<<"---------------------------\n";
    }
    void getDeposit(int amt)
    {
        if(strcmp(accounttype,"saving")==0)
        {
            if(amt<=2500)
            {
                balance=balance+amt;
            }
            else
            {
                cout<<"You can not enter 2500 below amount to deposit this account";
            }
        }

        else if(strcmp(accounttype,"current")==0)
        {
            if(amt<=5000)
            {
                balance=balance+amt;
            }
            else
            {
                cout<<"You can not enter 5000 below amount to deposit this account";
            }
        }

        else if(strcmp(accounttype,"fixed")==0)
        {
            if(amt<=10000)
            {
                balance=balance+amt;
            }
            else
            {
                cout<<"You can not enter 10000 below amount to deposit this account";
            }
        }
    }
    void getWithdrawal(int amt)
    {
        if(strcmp(accounttype,"saving")==0)
        {
            if(balance-amt>=5000)
            {   
                balance = balance-amt;
            }
            else
            {
                cout<<"Not Sufficient Balance For Withdraw";
            }
        }
        
        else if(strcmp(accounttype,"current")==0)
        {
            if(balance-amt>=2000)
            {
                balance = balance-amt;
            }
            else
            {
                cout<<"Not Sufficient Balance For Withdraw";
            }
        }

        else if(strcmp(accounttype,"fixed")==0)
        {
            cout<<"No Partial Withdraw Facility";
        }
    }
};

// main code
int main()
{
    Bank object;
    int found=0,a,ch;
    long int amt; 
        object.OpenAccount();
    do{
        // display options
        cout<<"\n\tMAIN MANU\n\n1:Show Account Details\n2:Deposit\n3:Withdraw\n4:Exit"<<endl;

        cout<<"Please input your choice: ";
        cin>>ch;

        switch(ch){
        case 1: // displating account info
                object.getShowAccount();
                break;
        case 2: // deposit operation
                cout<<"Enter Amount you want to deposit? ";
                cin>>amt;
                object.getDeposit(amt);
                break;
        case 3: // withdraw operation
                cout<<"Enter Amount you want to withdraw? ";
                cin>>amt;
                object.getWithdrawal(amt);
                break;
        case 4: // exit
                cout<<"Have a nice day"<<endl;
                break;
        default:
                cout<<"Wrong Option"<<endl;
        }
    } while(ch!=4);
    return 0;
}