#include <iostream>
#include <deque>
#include <vector>
using namespace std;
                            // find maximum of all subarrays of size k
int main(){
     // brute force approach
     // vector<int> nums ={1,3,-1,-3,5,3,6,7};
     // int k = 3;
     // vector<int> ans;
     // int n = nums.size();
     // for(int i=0 ; i<n-k+1 ; i++){
     //      int maximum = nums[i];
     //      for(int j=i ; j<i+k ; j++){
     //            maximum = max(maximum,nums[j]);
     //      }
     //      ans.push_back(maximum);
     // }
     // for(int val : ans){
     //      cout << val << " ";
     // }

                                                      // optimal approach
     vector<int> nums ={1,3,-1,-3,5,3,6,7};
     int k = 3;
     vector<int> ans;
     int n = nums.size();

     deque<int> dq;

     //analyze 1st window
     for (int i = 0; i < k; i++)
     {
          while (dq.size() > 0 && nums[dq.back()] <= nums[i])
          {
               dq.pop_back();
          }
          dq.push_back(i);
     }

     // analyze other all windows
     for (int i = k; i < n; i++)
     {
          ans.push_back(nums[dq.front()]);

          // remove extra terms from deque wich does not exsit in curr window
          while (dq.size() > 0 && dq.front() <= i - k)
          {
               dq.pop_front();
          }

          // now find the max. of curr window
          while (dq.size() > 0 && nums[dq.back()] <= nums[i])
          {
               dq.pop_back();
          }

          dq.push_back(i);
     }

     // push max of last window
     ans.push_back(nums[dq.front()]);

     for(int val : ans){
          cout << val << " ";
     }
}                            