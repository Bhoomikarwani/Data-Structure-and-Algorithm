#include <iostream>
#include <vector>
using namespace std;
bool check(vector<int>& nums){
    int n = nums.size();
    int count =0;
    for(int i=0 ; i<n ; i++){
        if(nums[(i+1)%n] < nums[i]){
            count++;
        }
        if(count > 1){
            return false;
        }
    }
    return true;
}
int main(){
    // check if array is rotated and sorted
    // vector<int> nums = {2,1,3,4};
    vector<int> nums = {3,4,5,1,2};
    bool ans = check(nums);
    cout << ans;
}