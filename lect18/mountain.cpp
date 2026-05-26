#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// int peakIndexInMountainArray(vector<int>& A){
//    int st=0,end=A.size()-1;
//    while (st<=end)
//    {
//     int mid=st+ (end-st)/2;
//     if(A[mid-1]<A[mid] && A[mid]>A[mid+1]){
//         return mid;
//     }
//     else if(A[mid-1]<A[mid] ){  //in increasing order
//         st=mid+1;
//     }
//     else{  //in decreasing order
//       end=mid-1;
//     }
//    }
//    return -1;
// }

// int main(){
//   vector<int> A={1};
//   cout<<peakIndexInMountainArray(A);
// }


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


                                             // minimum step to reach 1 from n
int minStep(int n) {
    // Base Case
    if (n == 1) return 0;

    // Option 1: Always available
    int op1 = minStep(n - 1);
    
    // Option 2: Only if divisible by 2
    int op2 = INT_MAX;
    if (n % 2 == 0) op2 = minStep(n / 2);
    
    // Option 3: Only if divisible by 3
    int op3 = INT_MAX;
    if (n % 3 == 0) op3 = minStep(n / 3);

    // Return 1 (the current step) + the minimum of all three paths
    return 1 + Min({op1, op2, op3});
}

int main() {
    int n = 10;
    cout << "Minimum steps: " << minStep(n) << endl;
    return 0;
}