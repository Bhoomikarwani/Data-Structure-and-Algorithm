#include <iostream>
using namespace std;
int main(){

    //print subarrays
    // int arr[5]={1,2,3,4,5};
    // int n=5;
    // for(int st=0; st<n ;st++){             //st=start
    //     for(int end=st; end<n; end++){
    //         for(int i=st; i<=end ; i++ ){
    //             cout<<arr[i];
    //         }
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }


    //maximum subarray
    //(Brute force approach)
    // int arr[]={3,-4,5,4,-1,7,-8};
    // int maxSUM=INT8_MIN;
    // int n=sizeof(arr)/sizeof(int);
    // for(int st=0; st<n ; st++){
    //     int curSum=0;                       //curSum= current sum
    //     for(int end=st; end<n ;end++){
    //            curSum+= arr[end];
    //            maxSUM= max(curSum,maxSUM);
    //     }
    // }
    // cout<< "maximum sum= "<< maxSUM<<endl;

    
    //Kadane's Algorithm
    int arr[]={3,-4,5,4,-1,7,-8};
    int maxSUM=INT8_MIN;
    int curSum=0;
    int n=sizeof(arr)/sizeof(int);
    for(int i=0 ; i<n ;i++){
         curSum+=arr[i];
         maxSUM=max(curSum,maxSUM);
         if(curSum<0){
            curSum=0;
         }
    }
    cout<<"maximum Sum="<< maxSUM<<endl;
}