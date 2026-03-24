// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number"<<endl;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         cout<<i<<"\t";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"enter the number"<<endl;
//     cin>>n;
//     int sum=0;
//     int i=1;
//     while(i<=n){
//         sum+=i;
//         i++;
//     }
//     cout<<sum;
// } 
// #include<iostream>
// using namespace std;
// int main()
// {
//     typedef long long ll;
//     ll r,n=113,sum=0;
//     while(n>0){
//         r=n%10;
//         sum=sum*10+r;
//         n/=10;
//     }
//     cout<<sum;
    
// return 0;
// }

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    if (n<2)
    {
        cout<<"not prime";
    }
    else{
        int i=sqrt(n);
        
        while(i*i<=n){
           if(n%i==0){
            cout<<"not prime";
            return 0;
           }
         i++;
        }
        cout<<"prime";
    
     
    }
}