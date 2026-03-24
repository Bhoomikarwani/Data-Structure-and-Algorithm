#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

// vector<int> twoSum(vector<int> & nums, int target)
// {
//         vector<pair<int, int>> vec;

//         // Store value and original index
//         for (int i = 0; i < nums.size(); i++)
//         {
//             vec.push_back({nums[i], i});
//         }

//         // Sort based on values (first element of pair)
//         sort(vec.begin(), vec.end());

//         int i = 0;
//         int j = nums.size() - 1;

//         while (i < j)
//         {
//             int sum = vec[i].first + vec[j].first;

//             if (sum == target)
//             {
//                 return {vec[i].second, vec[j].second};
//             }
//             else if (sum > target)
//             {
//                 j--;
//             }
//             else
//             {
//                 i++;
//             }
//         }
//         return {};
// }


//int main(){

    // brute force approach
    //     vector<int> arr={2,11,7,15};
    //     int tar=9;
    //     int n=arr.size() ;
    //     for(int i=0 ; i<n ; i++){
    //         int first = arr[i] ;
    //         for(int j = i+1 ; j<n ; j++ ){
    //             int sec = arr[j];
    //             int sum = first + sec ;
    //             if(sum == tar) {
    //                 cout << "[" << i << "," << j << "]" ;
    //             }
    //         }
    //     }

    // better approach
    //   vector<int> arr={2,11,7,15};
    //   int tar=9;
    //   vector<int> vec = twoSum(arr ,tar);
    //   for(int val : vec){
    //      cout << val << " ";
    //   }
//}


//now 
                                                //optimized aapproach

vector<int> twosum(vector<int> & arr, int target){
    unordered_map<int , int> m ;
    vector<int> ans;

    for( int i=0 ; i < arr.size(); i++){
        int first = arr[i];
        int sec = target - first;

        if ( m.find(sec) != m.end()){
            ans.push_back(i);
            ans.push_back(m[sec]);
        }
        m[first]= i;
    }
    return ans;
}
int main(){
      vector<int> arr={2,11,6,7,15};
      int tar=9;
      vector<int> vec = twosum(arr ,tar);
      for(int val : vec){
         cout << val << " ";
      }
}