#include <iostream>
#include <vector>
using namespace std;


int minDeletions(vector<int>& nums) {
        int count = 0;
        for(int i =0 ; i<nums.size()-1 ; i++){
            if(nums[i] == nums[i+1]){
                count++;
            }
        }
        return count;
}
int main(){
   vector<int> nums = {1, 1, 2, 2, 3, 0};
   cout << "minimum deletions " << minDeletions(nums) << endl;
}