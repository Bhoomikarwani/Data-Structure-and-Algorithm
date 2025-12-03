#include <iostream>
#include <vector>
using namespace std;
// int BS(vector<int> arr, int tar){
//     int st=0 ,e=arr.size()-1;
//     while(st<=e){
//         int mid=st+(e-st)/2;
//         if(tar>arr[mid]){
//             st=mid+1;
//         }
//         else if(tar<arr[mid]){
//             e=mid-1;
//         }
//         else{return mid;
//         }
//     }
//     return -1;
// }

// int main(){
//     vector<int> arr1={-1,0,3,4,5,9,12};
//     int tar1=12;
//     //cout<< BS(arr1,tar1)<<endl;
//     vector<int> arr2={-1,0,3,5,9,12};
//     int tar2=0;
//     cout<< BS(arr2,tar2)<<endl;
//     return 0;
// }

//with recursion
int BS(vector<int> arr, int tar, int st, int e){
   if(st<=e){
    int mid=st+(e-st)/2;
    if(tar>arr[mid]){
       return BS(arr,tar,mid+1,e);
    }
    else if(tar<arr[mid]){
        return BS(arr,tar,st,mid-1);
    }
    else{
        return mid;
    }
   }
   return -1;
}
 int main(){
    vector<int> arr1={-1,0,3,4,5,9,12};
    int tar1=12;
    //cout<< BS(arr1,tar1)<<endl;
    vector<int> arr2={-1,0,3,5,9,12};
    int tar2=5;
    int st=0,e=arr2.size()-1;
    cout<< BS(arr2,tar2,st,e)<<endl;
    return 0;
}
