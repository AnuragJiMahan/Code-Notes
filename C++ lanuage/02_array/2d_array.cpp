//2d array formate:-
/*
    1        2        3
a[0][0]  a[0][1]   a[0][2]
    4        5        6
a[1][0]  a[1][1]   a[1][2]
    7        8         9
a[2][0]  a[2][1]   a[2][2]
*/
//print this formate;
/*#include<iostream>
using namespace std;
int main(){
    int a[3][3],i,j;
    cout<<"Enter three by three matrix\n";
    for(i=0;i<=2;i++)
    {
       for(j=0;j<=2;j++)
       {
           cin>>a[i][j];
       } 
    }
    cout<<"Now 3 by 3 matrix are\n";
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            cout<<" "<<a[i][j];
        }
        cout<<"\n";
    }
    return 0;
}*/

//Enter 2 matrix and print sum;
// a= 1  2  3   b= 1  2  3
//    4  5  6      4  5  6
//    7  8  9      7  8  9
/*#include<iostream>
using namespace std;
int main(){
    int a[3][3],b[3][3],i,j,d[3][3];
    cout<<"Enter 3 by 3 matrix in a=\n";
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Enter 3 by 3 matrix in b=\n";
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            cin>>b[i][j];
        }
    }
    cout<<"Now 3 by 3 matrix in a are\n";
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            cout<<" "<<a[i][j];
        }
        cout<<"\n";
    }
    cout<<"Now 3 by 3 matrix in b are\n";
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            cout<<" "<<b[i][j];
        }
        cout<<"\n";
    }
    cout<<"Sum of 3 by 3 matrix\n";
        for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
           d[i][j]=a[i][j]+b[i][j];
           cout<<" "<<d[i][j];
        }
        cout<<"\n";
    }
return 0;
}*/

//Enter 3 by 3 matrix and print sum;
/*#include<iostream>
using namespace std;
int main(){
    int a[3][3],i,j,sum=0;
    cout<<"Enter 3 by 3 matrix\n";
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Now 3 by 3 matrix are\n";
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            cout<<" "<<a[i][j];
            sum=sum+a[i][j];
        }
        cout<<"\n";
    }
    cout<<"Sum of matrix="<<sum;
return 0;
}*/

//Enter 3 by 3 matrix and print 
//1 4 7
//2 5 8
//3 6 9
/*#include<iostream>
using namespace std;
int main(){
    int a[3][3],i,j;
    cout<<"Enter 3 by 3 matrix\n";
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Now 3 by 3 matrix are\n";
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            cout<<" "<<a[j][i];
        }
        cout<<"\n";
    }
return 0;
}*/

//Enter 3 by 3 matrix and print Sum;
//1 2 3 = 6
//4 5 6 = 15
//7 8 9 =24
/*#include<iostream>
using namespace std;
int main(){
    int a[3][3],i,j,sum=0;
    cout<<"Enter 3 by 3 matrix\n";
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Now 3 by 3 matrix are\n";
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            cout<<" "<<a[i][j];
        }
        cout<<"\n";
    }
    for(i=0;i<=2;i++)
    {
        sum=0;
        for(j=0;j<=2;j++)
        {
            sum=sum+a[i][j];
        }
        cout<<"\nsum is="<<sum;
    }
return 0;
}*/

//Enter 10 value and print sum this type;
// 1  2  3 
// 4  5  6      
// 7  8  9
// --------
// 12 15 18
/*#include<iostream>
using namespace std;
int main(){
    int a[3][3],i,j,sum=0;
    cout<<"Enter 3 by 3 matrix\n";
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Now 3 by 3 matrix are\n";
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            cout<<" "<<a[i][j];
        }
        cout<<"\n";
    }
    cout<<"---------\n";
    for(i=0;i<=2;i++)
    {
        sum=0;
        for(j=0;j<=2;j++)
        {
            sum=sum+a[j][i];
        }
        cout<<" "<<sum;
    }
return 0;
}*/

//Enter 3 by 3 matrix
// 1  2  3 
// 4  5  6      
// 7  8  9  and print 4 5 6;
/*#include<iostream>
using namespace std;
int main(){
    int a[3][3],i,j;
    cout<<"Enter 3 by 3 matrix\n";
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Now matrix are:\n";
    for(j=0;j<=2;j++)
    {
        cout<<" "<<a[1][j];
    }
return 0;
}*/

//Enter 3 by 3 matrix
// 1  2  3 
// 4  5  6      
// 7  8  9 and print 2 5 8;
/*#include<iostream>
using namespace std;
int main(){
    int a[3][3],i,j;
    cout<<"Enter 3 by 3 matrix:\n";
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Now madile matrix are:\n";
    for(i=0;i<=2;i++)
    {
        cout<<" "<<a[i][1];
    }
return 0;
}*/

//Enter 3 by 3 matrix
// 1  2  3 
// 4  5  6      
// 7  8  9 and print 1 5 9;
/*#include<iostream>
using namespace std;
int main(){
    int a[3][3],i,j;
    cout<<"Enter 3 by 3 matrix\n";
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Now matrix are:\n";
    for(i=0;i<=2;i++)
    {
        cout<<" "<<a[i][i];
    }
return 0;
}*/ 

//Enter 3 by 3 matrix
// 1  2  3 
// 4  5  6      
// 7  8  9 and print 3 5 9;
/*#include<iostream>
using namespace std;
int main(){
    int a[3][3],i,j;
    cout<<"Enter 3 by 3 matrix\n";
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Now matrix are:\n";
    for(i=0;i<=2;i++)
    {
        cout<<" "<<a[i][2-i];
    }
return 0;
}*/

//Enter 2 matrix and print result
// 1  2  3   //6  3  7
// 4  5  6   //1  4  3   
// 7  8  9   //9  5  7
//result
//35  26  34 
//83  62  85
//131 98 136
/*#include<iostream>
using namespace std;
int main(){
    int a[3][3],b[3][3],c[3][3],i,j,k;
    cout<<"Enter first 3 by 3 matrix:\n";
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Enter second 3 by 3 matrix:\n";
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            cin>>b[i][j];
        }
    }
    cout<<"Result for first and second matrix:\n";
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            c[i][j]=0;
            for(k=0;k<=2;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        cout<<" "<<c[i][j];
        }
        cout<<"\n";
    }
return 0;
}*/

