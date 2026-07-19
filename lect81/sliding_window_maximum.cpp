#include <iostream>
#include <deque>
#include <vector>
using namespace std;
                            // find maximum of all subarrays of size k
int main(){
     // brute force approach
     vector<int> nums ={1,3,-1,-3,5,3,6,7};
     int k = 3;
     vector<int> ans;
     int n = nums.size();
     for(int i=0 ; i<n-k+1 ; i++){
          int maximum = nums[i];
          for(int j=i ; j<i+k ; j++){
                maximum = max(maximum,nums[j]);
          }
          ans.push_back(maximum);
     }
     for(int val : ans){
          cout << val << " ";
     }
}                            