#include <iostream>
#include <vector>
#include <algorithm>  //for sort fn.++
using namespace std;
//aggressive cows problem

bool isPossible(vector<int>& arr,int n,int c,int minAllowedDis){  //O(N)
   int cows=1, lastStallPos=arr[0]; 
    for(int i=1; i<n ;i++){
        if(arr[i]-lastStallPos>=minAllowedDis){
           cows++;
           lastStallPos=arr[i];
        }
        if(cows==c){
            return true;
        }
    }
   return false;
}

int getDistance(vector<int> &arr,int n,int c){ // NlogN
    sort(arr.begin(), arr.end());
   //st=1 ,end=maxVal-minVal
   
   int st=1 ,end= arr[n-1]-arr[0] ,ans=-1;
   while (st <= end)       //O(log(Range)  *N)   here N for isPossible fn.
   {
       int mid = st + (end - st) / 2;
       if (isPossible(arr,n,c,mid))
       {
           ans = mid;
           st = mid + 1;
       }
       else
       {
           end = mid - 1;
       }
   }
   return ans;
}

int main(){
    int N=5;    //no.of stalls
    int C=3;    //no.of cows
    vector<int> arr={1,2,8,4,9};
    cout<< getDistance(arr,N,C);


}