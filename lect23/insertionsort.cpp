#include <iostream>
using namespace std;   
void insertionsort(int arr[], int n){
    for(int i=1; i<n ; i++){
         int curr=arr[i];      //current
         int prev=i-1;         //previous
         while(prev >= 0 && arr[prev] > curr){
          arr[prev+1]=arr[prev];
          prev--;
         }
         arr[prev+1]=curr;    //placing the current element in its correct position
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
    insertionsort(arr,n);
    print(arr,n);
}