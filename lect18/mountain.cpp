#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& A){
   int st=0,end=A.size()-1;
   while (st<=end)
   {
    int mid=st+ (end-st)/2;
    if(A[mid-1]<A[mid] && A[mid]>A[mid+1]){
        return mid;
    }
    else if(A[mid-1]<A[mid] ){  //in increasing order
        st=mid+1;
    }
    else{  //in decreasing order
      end=mid-1;
    }
   }
   return -1;
}

int main(){
  vector<int> A={0,3,8,9,5,2};
  cout<<peakIndexInMountainArray(A);
}


//or
//low=0, high=size-1
//while(low<high){
//   mid=low+high/2
//   if(arr[mid]<arr[mid+1]){
//      low=mid+1; 
//    }
//   else{
//      high=mid;  
//   }
//}
//return low;