//Enter ten value and delete element in array using class function;
/*#include<iostream>
using namespace std;
class del{
    private:
    int size;
    int a[10],b,d,f=0,z;
    public:
    void setval(int i[], int j ,int newsize)
    {
        size = newsize;
        for(b=0;b<size;b++)
        {
            a[b]=i[b];
        }
        d=j;
    }
    void getdelete()
    {
        for(b=0;b<size;b++)
	    {
		    if(a[b]==d)
	    	{   
		        for(z=b;z<size;z++)
		        {
			        a[z]=a[z+1];
		        }
			    size--;
		    }
	    }
            
    }
	void display()
    {
         cout<<"Now latest array are=\n";
		    for(b=0;b<size;b++)
		    {
			    cout<<a[b]<<endl;
		    }
    }
};
int main(){
    del object;
    int a[10],b,d;
    cout<<"Enter ten value =";
    for(b=0;b<=9;b++){
        cin>>a[b];
    }
    cout<<"Enter a no. you want to delete =";
    cin>>d;
    object.setval(a,d,10);
    object.getdelete();
    object.display();
return 0;
}*/

//Enter ten value and duplicate value delete in array using function;
/*#include<iostream>
using namespace std;
class same{
    private:
    int a[10],b,i;
    public:
    void setval(int j[])
    {
        for(b=0;b<=9;b++)
        {
            a[b]=j[b];
        }
    }
    void getduplicate()
    {
        for(b=0;b<=9;b++)
        {
            for(i=b+1;i<=9;i++)
            {
                if(a[b]==a[i])
                {
                    a[i]=0;
                }
            }
        }
    }
    void display()
    {
        for(b=0;b<=9;b++)
	    {
		    cout<<a[b]<<endl;
	    }
    }
};
int main(){
    same object;
    int a[10],b;
    cout<<"Enter ten value =";
    for(b=0;b<=9;b++)
    {
        cin>>a[b];
    }
    object.setval(a);
    object.getduplicate();
    object.display();
return 0;
}*/

/*#include<iostream>
#include<string.h>
using namespace std;
class Bank {
private:
    int acno,b;
    char name[30],accounttype[30];
    long balance;

public:
    void OpenAccount()
    {
        cout<<"Enter Account Number:";
        cin >> acno;
        cout<<"Enter Account Type: ";
        cin>>accounttype;
        cout<<"Enter Name:";
        cin>>name;
        cout<<"Enter Balance:";
        cin>>balance;
        cout<<"---------------------------\n";
    }
    void getShowAccount()
    {
        cout<<"---------------------------\n";

        cout<<"Account Number: "<< acno<<endl;
       cout<<"Account Type: "<<accounttype<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Balance: "<<balance<<endl;
        cout<<"---------------------------\n";
    }
    void getSavingDeposit()
    {
        long int amt; 
        cout<<"Enter Amount you want to deposit? ";
        cin>>amt;
        if(amt<=2500)
        {
            balance=balance+amt;
        }
        else
        {
            cout<<"You are not deposit this amount in saving!"<<endl;
        }
    }
    void getCurrnetDeposit()
    {
        long int amt; 
        cout<<"Enter Amount you want to deposit? ";
        cin>>amt;
        if(amt<=5000)
        {
            balance=balance+amt;
        }
            else
        {
            cout<<"You are not deposit this amount in current!"<<endl;
        }
    }
    void getFixedDeposit()
    {
        long int amt; 
        cout<<"Enter Amount you want to deposit? ";
        cin>>amt;
        if(amt<=10000)
        {
            balance=balance+amt;
        }
        else
        {
            cout<<"You are not deposit this amount in Fixed!"<<endl;
        }
    }
    void getSavingWithdraw()
    {
        long int amt;
        cout<<"Enter Amount you want to withdraw? ";
        cin>>amt;
        strcmp(accounttype,"saving")==0;
        if(balance>=5000)
        {
            balance = balance-amt;
        }
        else{
            cout<<"Not Sufficient Balance For Withdraw";
        }
    }
    void getCurrnetWithdraw()
    {
        long int amt;
        cout<<"Enter Amount you want to withdraw? ";
        cin>>amt;
        if(balance>=2000)
        {
            balance = balance-amt;
        }
        else
        {
            cout<<"Not Sufficient Balance For Withdraw";
        
        }
    }
    void getFixedWithdraw()
    {
        long int amt;
        cout<<"Enter Amount you want to withdraw? ";
        cin>>amt;
        if(balance)
        {
        cout<<"No Withdraw Facility This Account";
        }
    }
    int getSearch(char);
};

int Bank::getSearch(char a[])
{
    strcpy(accounttype,a);
    if (accounttype == a) {
        getShowAccount();
        return (1);
    }
    return (0);
}
// main code
int main()
{
    Bank object;
    int found=0,a,ch;
    char accounttype[30];

    object.OpenAccount();

    do{
        // display options
        cout<<"\n\tMAIN MANU\n\n1:Show Account Details\n2:By Account Type\n\nChosses ur Account Type for deposit\n\t3:Saving Account Deposit\n\t4:Current Account Deposit\n\t5:Fixed Account Deposit\n\nChosses ur Account Type for Withdraw\n\t6:Saving Account Withdraw\n\t7:Current Account Withdraw\n\t8:Fixed Account Withdraw\n\n9:Exit"<<endl;

        cout<<"Please input your choice: ";
        cin>>ch;

        switch(ch){
        case 1: // displating account info
                object.getShowAccount();
                break;
        case 2: //account type search
                cout<<"Enter Account Type: ";
                cin>>accounttype;
                    found=object.getSearch(accounttype);
                    if(found)
                    break;
                if(!found)
                cout<<"it's not your account type"<<endl;
                break;
        case 3: //saving deposit operation
                cout<<"Enter Account Type: ";
       b         cin>>accounttype;   
                found=object.getSearch(accounttype);
                if(found)
                {
                object.getSavingDeposit();
                }
                break;
                if(!found)
                cout<<"it's not your account type"<<endl;
                break;
        case 4://current account deposit
                cout<<"Enter Account Type: ";
                cin>>accounttype;
                found=object.getSearch(accounttype);
                if(found)
                {
                object.getCurrnetDeposit();
                }
                break;
                if(!found)
                cout<<"it's not your account type"<<endl;
                break;
        case 5: //fixed account deposit
                cout<<"Enter Account Type: ";
                cin>>accounttype;
                found=object.getSearch(accounttype);
                if(found)
                {
                object.getFixedDeposit();
                }
                break;
                if(!found)
                cout<<"it's not your account type"<<endl;
                break;
        case 6: //saving account withdraw
                cout<<"Enter Account Type: ";
                cin>>accounttype;
                found=object.getSearch(accounttype);
                if(found)
                {
                object.getSavingWithdraw();
                }
                break;
                if(!found)
                cout<<"it's not your account type"<<endl;
                break;
        case 7://current account withdraw
                cout<<"Enter Account Type: ";
                cin>>accounttype;
                found=object.getSearch(accounttype);
                if(found)
                {
                object.getCurrnetWithdraw();
                }
                break;
                if(!found)
                cout<<"it's not your account type"<<endl;
                break;
        case 8: //fixed account deposit
                cout<<"Enter Account Type: ";
                cin>>accounttype;
                found=object.getSearch(accounttype);
                if(found)
                {
                object.getFixedWithdraw();
                }
                break;
                if(!found)
                cout<<"it's not your account type"<<endl;
                break;
        case 9: // exit
                cout<<"Have a nice day"<<endl;
                break;
        default:
                cout<<"Wrong Option"<<endl;
        }
    } while(ch!=9);
    return 0;
}*/


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
/*#include<iostream>
#include<string.h>
using namespace std;
class Bank {
private:
    int acno;
    long int amt;
    char name[30],accounttype[30];
    long balance;

public:

    Bank()
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
                cout<<"You are not deposit this amount";
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
                cout<<"You are not deposit this amount";
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
                cout<<"You are not deposit this amount";
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
    bool getSearch(int accountnumber)
    {
        return(accountnumber==acno);   
    }
};


// main code
int main()
{
    Bank object[3];
    int found=0,a,ch;
    long int amt; 
 //       object.OpenAccount();
    do{
        // display options
        cout<<"Enter your account number:";
        cin>>a;
        for(int i=0;i<=2;i++)
        {
            object[i].getSearch(a);
        }
        
        cout<<"\n\nMAIN MANU\n\n1:Show Account Details\n2:Deposit\n3:Withdraw\n4:Exit"<<endl;

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
}*/