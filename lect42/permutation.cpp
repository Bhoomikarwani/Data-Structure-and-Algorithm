#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> getPerms(vector<int>& nums , vector<vector<int>>& ans , int idx){
    if(idx == nums.size()){
        ans.push_back({nums});
        return;
    }
    for(int i = 0 ; i < nums.size() ; i++){
        swap(nums[idx] , nums[i]);
        getPerms(nums , ans , idx+1);
        swap(nums[idx] , nums[i]);
    }
    return ans;
}
int main(){
    vector<int> nums = {1,2,3};
    vector<vector<int>> ans;
    getPerms(nums , ans , 0);
    for(vector<int> val : ans){
     for(int i=0 ; i< val.size() ; i++){
        cout<< val[i];
     }
     cout << endl;
    }
    return 0;
}