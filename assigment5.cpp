/*WAP to find the Factorial of a number entered by the user.*/
// #include<iostream>
// using namespace std;
// int func(int n){
//   int i=1;
//   if(n==0 || n==1){
//     return 1;
//   }
//   int ans=n*func(n-1);
//   return ans;
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<func(n)<<endl;
//     return 0;
// }
/* WAP to print the multiplication table of a number, entered by the user.
*/
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=10){
//         cout<<i*n<<"\t";
//         i++;
//     }
//     return 0;
// }
/*WAP to input a number and check whether the number is an Armstrong
number or not.*/
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int r,ans=0;
//     int org=n;
//     while(n>0){
//      r=n%10;
//      ans+=r*r*r;
//      n/=10;
//     }
//     if(ans==org){
//         cout<<"armstrong"<<endl;
//     }
//     else{
//         cout<<"not armstrong"<<endl;
//     }
//     return 0;
// }
/*For a positive N , WAP that prints all the prime numbers from 2 to N.
(Assume N >= 2)*/

 