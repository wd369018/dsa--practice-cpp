#include<iostream>
using namespace std;
int main()
{
    int m,m1;
    string sum = "";
    cout<<"enter the number";
    cin>>m;
    while(m>0){
        m1=m%2;//pehle remainder nikalna h fir uske baad number ko divide karna h
        sum =char('0'+m1)+sum;//yha par number reverse hokar likha jaa rha h aur sum naam ki string ka use kar rahe h jisse ki data loss nhi ho rha h 
        m=m/2;
        
    }
    cout<<sum;
    return 0;
}