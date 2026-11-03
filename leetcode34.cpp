#include <iostream>
#include <vector>
using namespace std;
                                    // find first and last position of element in sorted array

int firstOcc(vector<int>& nums, int target){
        int st =0 , end =nums.size()-1 , ans = -1;
        while(st <= end){
            int mid = st + (end-st)/2;
            if(nums[mid] == target){
                ans = mid;
                // search in left part
                end = mid-1;
            }
            else if(target < nums[mid]){
                end = mid-1;
            }
            else{
                st = mid+1;
            }
        }
        return ans;
    } 

    int lastOcc(vector<int>& nums, int target){
        int st =0 , end =nums.size()-1 , ans = -1;
        while(st <= end){
            int mid = st + (end-st)/2;
            if(nums[mid] == target){
                ans = mid;
                // search in right part
                st = mid+1;
            }
            else if(target < nums[mid]){
                end = mid-1;
            }
            else{
                st = mid+1;
            }
        }
        return ans;
    } 
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int first = firstOcc(nums, target);
        if(first == -1) return{-1,-1};
        return {first, lastOcc(nums, target) };
    }

    int main(){
        vector<int> nums = {5,7,7,8,8,10};
        int target = 8;
        vector<int> ans = searchRange(nums, target);
        for(int i : ans){
            cout << i << " ";
        }
    }