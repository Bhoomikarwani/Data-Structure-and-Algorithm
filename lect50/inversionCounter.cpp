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
int merge(vector<int> &arr , int st , int end , int mid){
    vector<int> temp;
    int i=st , j = mid+1;
    int invCount = 0; 
    
    while(i<=mid && j<=end){
        if(arr[j] <= arr[i]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
            invCount += (mid-i +1);
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

    return invCount;
}
int mergeSort(vector<int> &arr , int st , int end){
   if(st<end){
      int mid = st+(end-st)/2;
      int leftInvCount = mergeSort(arr , st , mid);
      int rigthInvCount = mergeSort(arr , mid+1 , end);
      int invCount =  merge(arr , st , end , mid);

      return leftInvCount + rigthInvCount + invCount;
   }
   return 0;
}                                     
int main(){
    //vector<int> arr ={6,3,5,2,7};
    vector<int> arr = {1,3,5,10,2,6,8,9};
    int count = mergeSort(arr , 0 , arr.size()-1);
    cout<< "inv count: "<< count << endl;
    return 0 ;
}      

