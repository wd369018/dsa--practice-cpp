// /*Write a function to check if a number is a palindrome in C++.
// (121 is a palindrome, 321 is not)*/
// #include<iostream>
// using namespace std;
// bool palindrome(int n){
//     int r,sum=0,org=n;
//     while(n>0){
//         r=n%10;
//         sum=sum*10+r;
//         n/=10;
//     }
//     if(org==sum){
//         return 1;
//     }
//     return 0;

// }

// int main(){
//     int n;
//     cout<<"enter the num"<<endl;
//     cin>>n;
//     cout<<palindrome(n)<<endl;
//     return 0;
//     }

/* Write a function to calculate the sum of digits of a number.*/
// #include<iostream>
// using namespace std;
// int sum(int n){
//     int r,s=0;
//     while(n>0){
//         r=n%10;
//         s+=r;
//         n/=10;
//     }
//     return s;
// }
// int main()
// {
//     int n;
//     cout<<"enter the num"<<endl;
//     cin>>n;
//     cout<<sum(n)<<endl;
// return 0;
// }
/*Write a function which takes 2 numbers as parameters (a & b) and
outputs : a^2 + b^2 + 2*ab.
*/
// #include<iostream>
// using namespace std;
// int fun(int a,int b){
//     return a*a+b*b+2*a*b;
// }
// int main()
// {
//     int a,b;
//     cin>>a>>b;
//     cout<<fun(a,b)<<endl;

// return 0;
// }

/*Write a function that prints the largest of 3 numbers*/
// #include <iostream>
// using namespace std;
// int largest(int a, int b, int c)
// {
//     if (a > b && a > c)
//     {
//         return a;
//     }
//     else
//     {
//         if (b > c)
//         {
//             return b;
//         }
//         return c;
//     }
// }
// int main()
// {
//     int a, b, c;
//     cin >> a >> b >> c;
//     cout << largest(a, b, c) << endl;
//     return 0;
// }

/*Write a function that accepts a character (ch) as parameters & returns
the character that occurs after ch in the English alphabet.
Eg : input = ‘c’, return value = ‘d*/

#include <iostream>
using namespace std;
char func(char ch)
{
    if (ch == 'z')
    {
        return 'a';
    }
    else
    {
        return ch + 1;
    }
}
int main()
{
    char ch;
    cin >> ch;
    cout << func(ch) << endl;
    return 0;
}