#include <iostream>
#include <vector>
using namespace std;

// product of array except self

//Brute force approach
// vector<int> product(vector<int> &nums){
//     int n=nums.size();
//     vector<int> ans;
//     for(int i=0; i<n; i++){
//         int prod=1;
//         for(int j=0 ;j<n ; j++){
//            if(i!=j){ 
//             prod*=nums[j];
//            }
//         }
//         ans[i]=prod;
//     }
//     return ans;
// }
// int main(){
//     vector<int> nums={1,2,3,4};
//     int n=nums.size();
//     vector<int> ans= product(nums);
    
//      cout << ans[0] ;
    
// }


//optimal approach with prefix and sufix
vector<int> product(vector<int> &nums){
    int n=nums.size();
    vector<int> ans(n,1);
    for(int i=1 ; i<n ;i++){
        ans[i]=ans[i-1]*nums[i-1];
    }
    int suffix=1;
    for(int i=n-2 ; i>=0 ; i--){
        suffix*=nums[i+1];  //ith suffix
        ans[i]*=suffix;
    }
    return ans;
}
int main(){
    vector<int> nums={1,2,3,4};
    int n=nums.size();
    vector<int> ans= product(nums);
    for(int i=0; i<n ;i++){
       cout << ans[i] << " " ;
    }
   
}
