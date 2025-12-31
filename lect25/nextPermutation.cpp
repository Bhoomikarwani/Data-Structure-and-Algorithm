#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> nextPermutation(vector<int>& arr , int n){
    int pivot=-1;
    for(int i=n-2; i>=0 ;i--){
        if(arr[i] < arr[i+1]){
            pivot=i;
            break;
        }
    }
    if(pivot==-1){                       //already bigger no. so we return smallest no.
        reverse(arr.begin(),arr.end());
        return arr;
    }

    //2nd step: next target element
    for(int i=n-1; i>pivot ; i--){
        if(arr[i]> arr[pivot]){
            swap(arr[pivot],arr[i]);
            break;
        }
    }
    
    //3rd step:reverse (pivot+1  to n-1)
    //int i=pivot+1, j=n-1;
    // while(i<j)
    // {
    //     swap(arr[i],arr[j]);
    //     i++;
    //     j--;
    // }

    //or we can do
    reverse(arr.begin() + pivot+1,arr.end());
    return arr;
}
int main(){
  vector<int> arr={1,2,3};
  int n=arr.size();
  vector<int> ans= nextPermutation(arr,n);
  for(int i=0 ; i<n ; i++){
    cout << ans[i];
  }  
}