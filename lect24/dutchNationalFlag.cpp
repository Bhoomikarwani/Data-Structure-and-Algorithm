#include <iostream>
#include <vector>
using namespace std;
void sortColors(vector<int>& arr , int n) {
      int low=0, mid=0 , high=n-1;
      while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
                low++;
                mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{   //arr[mid]==2
           swap(arr[mid],arr[high]);
            high--;
        }
      }
}      
int main(){
    vector<int> arr={2,0,1,0,2,1};
     int n=arr.size();
    //sort the given arr
    sortColors(arr,n);
    for(int i=0; i<n ;i++){
      cout<<arr[i];
    }
}