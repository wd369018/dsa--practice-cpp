// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter the number"<<"\n";
//     cin>>n;
//     cout << "area" <<"\t"<< n * n;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     float pencil, pen, eraser, value, gst, final;
//     cout<<"input lelo"<<"\n";
//     cin >> pencil >> pen >> eraser;
//     value = pencil + pen + eraser;
//     cout << "total value of items"<<"\n";
//     cout << value<<"\n";
//     gst = value * 0.18;
//     final = value + gst;
//     cout << "final bill"<<"\n";
//     cout << final;

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     float p,r,t,value;
//     cout<<"enter the values";
//     cin>>p>>r>>t;
//     value = (p*r*t)/100;
//     cout<<value;
//     return 0;
// }

#include<iostream>
#define PI 3.14
using namespace std;
int main(){
    float r;
    cout<<"enter the redius"<<"\n";
    cin>>r;
    cout<<PI*r*r<<"\n";
    return 0;
}