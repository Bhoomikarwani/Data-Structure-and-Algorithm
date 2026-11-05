#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minMergedInteger(vector<int>& nums) {
        int ans = INT_MAX;
        int n = nums.size()-1;
        for(int i =0 ; i<n ; i = i+2){
            string merged = to_string(nums[i]) + to_string(nums[i+1]);
            if(stoi(merged) < ans ){
                ans = stoi(merged);
            }
        }
        return ans;
}
int main(){
    vector<int> nums = {23,55,42,21};
    cout << minMergedInteger(nums);
}