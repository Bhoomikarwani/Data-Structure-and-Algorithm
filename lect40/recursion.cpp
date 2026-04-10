#include <iostream>
#include <vector>
using namespace std;
// void printNum(int n){  //recursive function
//     if(n == 1){
//         cout << 1 ;
//         return;
//     }
//     cout << n << " ";
//     printNum(n-1);
// }
// int main(){
//     printNum(50);
//     return 0;
// }

// N fACTORIAL
// int factorial(int n){
//     if(n == 0){
//         return 1;
//     }
//     return n * factorial(n-1);
// }
// int main(){
//    cout << factorial(5);
//    return 0 ;
// }

// sum of n nums with recursion
// int sum(int n){
//    if(n == 1){
//     return 1;
//    }
//    return n + sum(n-1);
// }
// int main(){
//    int Sum =sum(4);
//    cout << Sum ;
// }

//fibonacci (find (n) th trem of fibonacci series )
// int fib(int n){
//     if(n == 0 || n == 1){
//         return n;
//     }
//     return fib(n-1) + fib(n-2);
// }
// int main(){
//     int n = 6;
//     int val = fib(n);
//     cout << n <<"th term of fibonacci series is : "<< val;
// }

//check if array is sorted
// int isSorted(vector<int> arr , int n){  //n= size
//     if(n == 0 || n == 1){
//         return true;
//     }

//     return arr[n-1] >= arr[n-2]  && isSorted(arr , n-1);
// }
// int main(){
//     vector<int> arr= {1,8,3,4,5};
//     int n= arr.size();
//     cout<< isSorted(arr,n);
// }


// Binary Search
int BS(vector<int>& nums, int tar, int st ,int end){ 
          if(st<= end){
            int mid= (st + end)/2;
            if(nums[mid] == tar){
                return  mid;
            }
            else if(tar < nums[mid]){
                return BS(nums , tar , 0 , mid-1);
            }
            else{
                return BS(nums , tar , mid+1 , end);
            }
          }
          return -1;
    }
int main(){
    vector<int> nums = {-1,0,3,5,9,12};
    int tar = 9 ;
    int n= nums.size();
    cout <<  BS(nums , tar , 0 , n-1 );
    return 0;
}    
  