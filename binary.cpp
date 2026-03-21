/*binary number ke conversion ko seekh rahe hai hum log
100101=1*2^5 + 0*2^4 + 0*2^3 + 1*2^2 + 0*2^1 + 1*2^0*/
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a decimal number: ";
//     cin>>n;
//     string binary=" ";
//     int r,sum=0,i=1;
//     while(n>0){
        
//         binary = to_string(n % 2) + binary;
//         n=n/2;
//     }
//     cout<<binary<<"";

// }
#include<iostream>
using namespace std;
int main()
{
    cout<<sizeof(signed int)<<endl;
    cout<<sizeof(unsigned int)<<endl;
return 0;
}