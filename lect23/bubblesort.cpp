#include <iostream>
using namespace std;
void bubblesort(int arr[], int n){
    for(int i=0; i<n-1 ;i++){
        bool isSwap=false;            //if all no.s are sorted in arr then no  swapping iss going to be held 
        for(int j=0; j<n-1-i ;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap=true;
            }
        }
        if (!isSwap) //array is already sorted
        {
            return;
        }
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
    bubblesort(arr,n);
    print(arr,n);
}