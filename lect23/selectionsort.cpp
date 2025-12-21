#include <iostream>
using namespace std;   
void selectionsort(int arr[], int n){
    for(int i=0 ;i<n-1 ;i++){
        int smallestIdx=i;
        for(int j=i+1; j<n ; j++){
         if(arr[j]<arr[smallestIdx]){
                smallestIdx=j;
            }
        }
        swap(arr[i],arr[smallestIdx]);
    }
}
void print(int arr[], int n){
  for(int i=0; i<n ;i++){
    cout<<arr[i]<<" ";
  }
}
int main(){
    int arr[]={4,1,5,2,3};
    int n=5;
    selectionsort(arr,n);
    print(arr,n);
}