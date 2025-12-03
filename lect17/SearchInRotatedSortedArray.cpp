#include <iostream>
#include<vector>
using namespace std;

//search in rotated sorted array
int search(vector<int>& arr,int tar){
    int st=0, end=arr.size();
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]==tar){
            return mid;
        }
        if(arr[st]<=arr[mid]){   //left part sorted 
           if(arr[st]<=tar && tar<=arr[mid]){
               end=mid-1;
           }
           else{
            st=mid+1;
           }
        }
        else{       //right part sorted
          if(arr[mid]<=tar && tar<=arr[end]){
            st=mid+1;
          }
          else{
            end=mid-1;
          }
        }
    }
    return -1;
}
int main(){
   vector<int> arr={3,4,5,6,7,0,1,2};
   int target=2;
   cout<< search(arr,target)<<endl;
}