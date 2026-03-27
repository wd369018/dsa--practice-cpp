// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter the size of array:";
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < 5; ++i)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int func(int nums[],int size){
//     for (int i = 0; i < size; i++)
//     {
//         cout<<nums[i]<<" ";
//     }

// }
// int main()
// {
//     int arr[6] = {2, 3, 5, 9, 1, 6};
//     func(arr,6);
//     return 0;
// }

// #include <iostream>
// #include<string>
// using namespace std;
// int stringrem(string s){
//    for (int i = 0; i < s.length(); i++)
//    {
//     if(s[i]=='-'){
//         s.erase(i,1);
//         i--;
//         }
//    }
//    int n=stoi(s);
//    return n;
// }
// int main()
// {
//    string s = "15-07-2005";
//    string temp="";
//    int start=0;
//    for (int i = 0; i < s.length(); i++)
//    {
//     if(s[i]=='-'){
//         temp=s.substr(start,i-start);
//         start=i+1;

//      }
//    }
//    cout<<temp<<endl;

//     // string binary="";
//     // while(n>0){
//     //    binary=to_string(n%2)+binary;
//     //    n/=2;
//     // }
//     // cout<<binary<<endl;
//     // cout<<to_string(n)<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int linearsearch(int *arr, int n, int key)
// {
//    for (int i = 0; i < n; i++)
//    {
//       if (arr[i] == key)
//       {
//          return i;
//       }
//    }
//    return -1;
// }
// int main()
// {
//    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18};
//    int n = sizeof(arr) / sizeof(int);
//    cout << " key after search:";
//    cout << linearsearch(arr, n, 10) << endl;

//    return 0;
// }

// using namespace std;
// int main(){
//    int arr[5]={11,22,32,44,55};
//    int temp[5];
// for (int i = 0; i < 5; i++)
// {
//    temp[i]=arr[4-i];
// }
// for (int i = 0; i < 5; i++)
// {
//    cout<<temp[i]<<" ";
// }
// }

// #include<iostream>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;
//    int arr[n];
//    int start=0,end=n-1;
//    for (int i = 0; i <n; i++)
//    {
//       cin>>arr[i];
//    }
//    while(start<end)
//    {
//       arr[start]+=arr[end];
//       arr[end]=arr[start]-arr[end];
//       arr[start]=arr[start]-arr[end];
//       start++;
//       end--;
//    }
//    for (int i = 0; i < 5; i++)
//    {
//       cout<<arr[i]<<" ";
//    }

// }

// #include<iostream>
// using namespace std;
// int main()
// {
//    int arr[5]={1,2,3,4,5};//ye array diya hai esme//
//    int start=0,end=4,mid,key;
//    cout<<"enter the key to search:";
//    cin>>key;//3
//    while(start<=end){
//       mid = start+(end-start)/2;
//       if(arr[mid]==key){
//          cout<<mid<<" ";
//          return 0;
//       }
//       else if(arr[mid]>key){
//          end=mid-1;

//       }
//       else{
//          start=mid+1;

//       }
//    }
// return 0;
// }

// #include <iostream>
// using namespace std;
// int search(int *arr,int n,int key){
//    cin>>key;
//    int start=0,end=n-1,mid;
//    while(start<=end){
//       mid=start+(end-start)/2;
//       if(arr[mid]==key)return mid;
//       else if(arr[mid]>key)end=mid-1;
//       else start=mid+1;
//    }
//    return -1;

// }
// int main()
// {
//    int arr[]={1,2,3,4,5,6,7};
//    int n=sizeof(arr)/sizeof(int);
//    cout<<"enter the element to search:";
//    cout<<search(arr,n,7)<<endl;
//    return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//    int arr[5]={2,3,4,5,1};/*yha par original array
//     arr[5]=[1,2,3,4,5]*/
//    //ye ek array given hai esko rotate karke likhna hai humko.
//    int n=sizeof(arr)/sizeof(arr[0]);
//    int idx=0,temp[n];
//    for (int i = 0; i < n; i++)
//    {
//       if(arr[i]<arr[idx]){
//          idx=i;
//       }
//    }
//    for (int i = 0; i < n; i++)
//    {
//       temp[i]=arr[(i+idx)%n];
//    }

//     for (int i = 0; i < n; i++)
//    {
//       arr[i]=temp[i];
//       cout<<arr[i]<<" ";
//    }
// return 0;
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//    int a=10;
//    int* ptr=&a;
//    cout<<ptr<<endl;
//    ptr++;
//    cout<<ptr;
// return 0;
// }

// #include <iostream>
// #include<climits> 
// using namespace std;
// void print(int *arr, int n)
// {  int maxsum = INT_MIN;
//    for (int i = 0; i < n; i++)
//    {
//       for (int j = i; j < n; j++)
//       {
//          int k = 0;
//          for (int val = i; val <=j; val++)
//          {
//             k += arr[val];
//          }
//          cout<< k << ", ";
//          maxsum=max(k,maxsum);
//       }
//       cout << endl;
//    }
//    cout<<"maxsum:"<<" "<<maxsum<<endl;
// }
// int main()
// {
//    int arr[6] = {2, -3, 6, -5, 4, 2};
//    int n = 6;
//    print(arr, 6);
//    return 0;
// }

//maximum subarray sum (optimal approach)
// #include <iostream>
// #include<climits> 
// using namespace std;
// void print(int *arr, int n)
// {  int maxsum = INT_MIN;
//    for (int i = 0; i < n; i++)
//    {
//       int k = 0;
//       for (int j = i; j < n; j++)
//       {
//          k += arr[j];
//          cout<< k << ", ";
//          maxsum=max(k,maxsum);
//       }
//       cout << endl;
//    }
//    cout<<"maxsum:"<<" "<<maxsum<<endl;
// }
// int main()
// {
//    int arr[6] = {2, -3, 6, -5, 4, 2};
//    int n = 6;
//    print(arr, 6);
//    return 0;
// }
/*kadane's algorithms*/
// #include <iostream>
// #include<climits> 
// using namespace std;
// void print(int *arr, int n)
// {  int maxsum = INT_MIN,curr_sum=0;
//    for (int i = 0; i < n; i++)
//    {
//       curr_sum+=arr[i];
//       maxsum = max(maxsum,curr_sum);
//       if(curr_sum<0){
//          curr_sum=0;
//       }
//    }
//    cout<<"maxsum:"<<" "<<maxsum<<endl;
// }
// int main()
// {
//    int arr[6] = {2, -3, 6, -5, 4, 2};
//    int n = 6;
//    print(arr, 6);
//    return 0;
// }


// #include<iostream>
// #include<climits>
// using namespace std;
// void  maxProfit(int *price,int n){
//    int bestBuy[100000];
//    bestBuy[0]=INT_MAX;
//    // cout<<bestBuy[0]<<", ";
//    for(int i=1; i<=n; i++){
//       bestBuy[i]=min(bestBuy[i-1],price[i-1]);
   
//    }

//    int maxProfit = 0;
//    for (int i = 0; i < n; i++)
//    {
//       int currProfit = price[i]-bestBuy[i];
//       maxProfit = max(maxProfit,currProfit);
//    }
//    cout<<"max profit: "<<maxProfit<<endl;
//    cout<<endl;
// }
// int main()
// {
//    int price[6]={7,6,5,4,3,2};
//    int n=sizeof(price)/sizeof(int);
//    maxProfit(price,n);
// //TC:O(n)
// return 0;
// } 

#include<iostream>
#include<climits>
using namespace std;

void trap(int *heights,int n){
    int leftMAX[20000];
    leftMAX[0]=INT_MIN;
    for(int i=1; i<n; i++){
        leftMAX[i] = max(leftMAX[i-1],heights[i-1]);
    }
}
int main()
{
    int heights[7]={4,2,0,6,3,2,5};
    int n = sizeof(heights)/sizeof(int);
     
return 0;
}