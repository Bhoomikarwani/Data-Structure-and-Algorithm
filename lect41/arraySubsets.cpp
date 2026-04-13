//  || Backtracking ||

                        
#include <iostream>
#include <vector>
using namespace std;
                             // subsets of array
// void print_subsets(vector<int> arr ,vector<int>& ans ,int i){
//     if(i == arr.size()){
//         for(int val : ans){
//             cout<< val<< " ";
//         }
//         cout<< endl;
//         return;
//     }
//     //include
//     ans.push_back(arr[i]);
//     print_subsets(arr,ans,i+1);
//     ans.pop_back();  //backtrack
//     //exclude
//     print_subsets(arr,ans,i+1);
// }
// int main(){
//    vector<int> arr ={1,2,3};
//    vector<int> ans;
//    print_subsets(arr,ans, 0);
//    return 0;
// }

                                           // subsets in power set
void getAllSubsets(vector<int>& nums , vector<int>& ans , vector<vector<int>>& allSubsets , int i){
     if(i == nums.size()){
            allSubsets.push_back({ans});
            return;
     }
     //include
     ans.push_back(nums[i]);
     getAllSubsets(nums,ans,allSubsets,i+1);
    
     //backtrack
     ans.pop_back();
     //exclude
     getAllSubsets(nums,ans,allSubsets,i+1);
}
    
int main(){
   vector<int> nums ={1,2,3};
   vector<int> ans;
   vector<vector<int>> allSubsets ;
   getAllSubsets(nums,ans,allSubsets,0);
   for(vector<int> val : allSubsets){
     for(int i=0 ; i< val.size() ; i++){
        cout<< val[i];
     }
     cout << " ";
   }
   return 0;
}
