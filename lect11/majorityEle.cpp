#include <iostream>
#include <vector>
using namespace std;

//brute force aproach
// int majority(vector<int> &nums){
//     int n=sizeof(nums)/sizeof(int);
//     int freq=0;
//        for(int val: nums){
//           for(int el: nums){
//             if (el==val){
//                 freq++;
//             }
//           }
//           if (freq>n/2){
//             return val;
//           }
//        }
//        return -1;
// }
// int main(){
//     vector<int> nums={3,3,2,3,2};
//     int ans= majority(nums);
//     cout<< ans<<endl;
// }


//moore's alogorithum
int majority(vector<int> &nums){
   // int n=sizeof(nums)/sizeof(int);
   int n=nums.size();
    int freq=0, ans=0;
    for(int i=0;i<n; i++){
        if(freq==0){           //first check mai freq 0 hogi
            ans=nums[i];
        }
        if(ans==nums[i]){
          freq++;
        }
        else{
            freq--;
        }
    }
    return ans;
}
int main(){
    vector<int> nums={3,3,2,3,2};
    int ans= majority(nums);
    cout<< ans<<endl;
}