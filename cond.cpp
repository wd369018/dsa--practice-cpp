// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int income;
// //     cout<<"enter the income";
// //     cin>>income;
// //     if(income<500000){
// //         cout<<income*1;
// //     }else if(500000<income<1000000){
// //         cout<<income*0.2<<endl;
// //         cout<<"new income"<<endl;
// //         cout<<income-income*0.2<<endl;
// //     }
// //     else{
// //         cout<<income*0.3<<endl;
// //         cout<<"new income"<<endl;
// //         cout<<income-income*0.3<<endl;
// //     }
// //     return 0;
// // }
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b, c;
//     cout << "enter the numbers"<<endl;
//     cin >> a >> b >> c;
//     if (a > b && a > c)
//     {
//         cout << a;
//     }
//     else if (b > c)
//     {
//         cout << b;
//     }
//     else
//     {
//         cout << c;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int age,isadult;
//     cout<<"enter the number";
//     cin>>age;
//     isadult=(age>=18)?true:false;
//     cout<<isadult;
//     return 0;

// }
// #include<iostream>
// using namespace std;
// int main(){
//    int day;
//    cin>>day;
//    switch(day){
//     case 1:cout<<"monday"<<endl;

//     case 2:cout<<"tuesday"<<endl;

//     default:cout<<"invalid";
//    }
//     return 0;

// #include<iostream>
// using namespace std;
// int main()
// {
//     int choice;
//     int a,b;
//     cout<<"enter the number"<<endl;
//     cin>>a>>b;
//     cout<<"enthe the choice"<<endl;
//     cin>>choice;
//     switch(choice){
//         case 1:cout<<a+b;
//         break;
//         case 2:cout<<a-b;
//         break;
//         case 3:cout<<a*b;
//         break;
//         case 4:cout<<a/b;
//         break;
//         defult:cout<<"invalid choice";
//     }

// return 0;
// }

/*Write a C++ program to get a number from the user and print whether
it's positive, negative or zero.*/
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter number" << endl;
//     cin >> n;
//     if (n > 0)
//     {
//         cout << "positive";
//     }
//     else if (n < 0)
//     {
//         cout << "negetive";
//     }
//     else
//     {
//         cout << "zero";
//     }
//     return 0;
// }