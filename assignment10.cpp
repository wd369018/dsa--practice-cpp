/*Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true*/
// #include <iostream>
// using namespace std;
// bool check(int *array, int n)
// {
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (array[i] == array[j])
//             {
//                 count++;
//             }
//         }
//     }

//     if (count > 1)
//     {
//         return true;
//     }
//     return false;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     cout << "enter the number";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << check(arr, n) << endl;

//     return 0;
// }

/*Question 2 : There is an integer array nums sorted in ascending order (with distinct
values).
Prior to being passed to your function, nums is possibly rotated at an unknown pivot
index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ...,
nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7]
might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].
Given the array nums after the possible rotation and an integer target, return the
index of target if it is in nums, or -1 if it is not in nums.
You must write an algorithm with O(log n) runtime complexity. [link]
Examples :
Input: nums = [4,5,6,7,0,1,2], target = 0Output:
4
Input: nums = [4,5,6,7,0,1,2], target = 3Output: -
1*/

// #include<iostream>
// #include<algorithm>
// #include<functional>
// using namespace std;
// void rotate(int *arr,int k,int n){
//     k=k%n;
//     int temp[n];
//     //precedence element ko store kar rha hai
//     for (int i = 0; i <=k; i++)
//     {
//        temp[i]=arr[n-1-k+i];
//     //    cout<<temp[i]<<" ";
//     }
//     //front element ko store karega
//     for (int i = k+1; i <n; i++)
//     {
//         temp[i]=arr[i-k-1];
//         // cout<<temp[i]<<" ";
//     }
//     for (int i = 0; i <n; i++)
//     {
//         cout<<temp[i]<<" ";
//     }
    
    
    
// }
// int main()
// {   
//     int arr[7]={0,1,2,4,5,6,7};
//     int n=sizeof(arr)/sizeof(int);
//     cout<<"original array:";  
//     rotate(arr,10,7);

// return 0;
// }


/*Given an integer array nums, find a subarray that has the largest
product, and return the product. The test cases are generated so that the answer will
fit in a 32-bit integer. [link]
Note - This Qs might feel difficult as a beginner because it uses DP approa*/
#include<iostream>
#include<climits>
using namespace std;
//subarray function
//[1,2,3,4,5]=[1],[1,2],[1,2,3],[1,2,3,4],[1,2,3,4,5]

void check(int *arr,int n){
    
    int maxsum=INT_MIN;
    for (int i = 0; i <n; i++)
    {   int k=1;
        for (int j = i; j <n; j++)
        {  
           k*=arr[j];
        }
        maxsum=max(k,maxsum);
    } 

    cout<<maxsum;
  
}
int main()
{
    int arr[5]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    check(arr,n);

return 0;
}