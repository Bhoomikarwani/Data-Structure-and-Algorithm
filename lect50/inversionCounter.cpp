#include <iostream>
#include <vector>
using namespace std; 

                                       // INVERSION COUNTER (count total no. of pairs from  given array whose i<j and arr[i]>arr[j])  
//int main(){
         // brute force approach  O(n^2)
    // vector<int> arr ={6,3,5,2,7};
    // int invCount=0;
    // for(int i=0 ; i<arr.size() ; i++){
    //     for(int j=i+1; j<arr.size() ; j++){
    //         if(arr[i]>=arr[j]){
    //            invCount++;
    //         }
    //     }
    // }
    // cout << invCount ; 
//}
                                         // optimal approach
void merge(vector<int> &arr , int st , int end , int mid){
    vector<int> temp;
    int i=st , j = mid+1;
    
    while(i<=mid && j<=end){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
        while(i<=mid){
            temp.push_back(arr[i]);
            i++;
        }
        while(j<=end){
            temp.push_back(arr[j]);
            j++;
        }
        // copy
        for(int i=0 ; i<temp.size() ; i++){
           arr[i+st]=temp[i];
        }
    }
}
void mergeSort(vector<int> &arr , int st , int end){
   if(st<end){
      int mid = st+(end-st)/2;
      mergeSort(arr , st , mid);
      mergeSort(arr , mid+1 , end);
      merge(arr , st , end , mid);
   }
}                                     
int main(){
    vector<int> arr ={6,3,5,2,7};
    mergeSort(arr , 0 , arr.size()-1);
    for(int val : arr){
        cout << val << " ";
    }
    cout<< endl;
    return 0 ;
}      

