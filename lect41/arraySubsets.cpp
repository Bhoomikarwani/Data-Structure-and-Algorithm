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
// void getAllSubsets(vector<int>& nums , vector<int>& ans , vector<vector<int>>& allSubsets , int i){
//      if(i == nums.size()){
//             allSubsets.push_back({ans});
//             return;
//      }
//      //include
//      ans.push_back(nums[i]);
//      getAllSubsets(nums,ans,allSubsets,i+1);
    
//      //backtrack
//      ans.pop_back();
//      //exclude
//      getAllSubsets(nums,ans,allSubsets,i+1);
// }
    
// int main(){
//    vector<int> nums ={1,2,3};
//    vector<int> ans;
//    vector<vector<int>> allSubsets ;
//    getAllSubsets(nums,ans,allSubsets,0);
//    for(vector<int> val : allSubsets){
//      for(int i=0 ; i< val.size() ; i++){
//         cout<< val[i];
//      }
//      cout << " ";
//    }
//    return 0;
// }
                                  // Subsets || (don't print duplicate subsets)
//  void getAllSubsets(vector<int>& nums , vector<int>& ans , vector<vector<int>>& allSubsets , int i){
//      if(i == nums.size()){
//             allSubsets.push_back({ans});
//             return;
//      }
//      //include
//      ans.push_back(nums[i]);
//      getAllSubsets(nums,ans,allSubsets,i+1);
    
//      //backtrack
//      ans.pop_back();
     
//      //exclution
//      int idx = i+1;
//      while(idx<nums.size() && nums[idx] == nums[idx-1]){
//       idx++;
//      }

//      //exclude
//      getAllSubsets(nums,ans,allSubsets,idx);
// }

// int main(){
//    vector<int> nums ={1,2,2};
//    vector<int> ans;
//    vector<vector<int>> allSubsets ;
//    getAllSubsets(nums,ans,allSubsets,0);
//    for(vector<int> val : allSubsets){
//      for(int i=0 ; i< val.size() ; i++){
//         cout<< val[i];
//      }
//      cout << " ";
//    }
//    return 0;
// }
   

//                                                   2 -> 00   3 -> 000  100
//                                                        01        001  101
//                                                        10        010  110
//                                                        11        011  111 
// void print_com(string str , int n){
//    if(n==0){
//       cout << str << endl;
//       return;
//    }
//    print_com(str + "0" ,n-1 );
//    print_com(str + "1" ,n-1 );
// }
// int main(){
//    int n=3;
//    print_com("" ,n );
// }


//return count of even sum
// int print_subsets(vector<int> arr ,vector<int>& ans ,int i, int count){
//     if(i == arr.size()){
//       int sum = 0 ;
//         for(int val : ans){
//              sum += val;
//         }
//         if (sum % 2 == 0){
//           count++;
//         }
//         return count;
//     }
//     //include
//     ans.push_back(arr[i]);
//     print_subsets(arr,ans,i+1,count);
//     ans.pop_back();  //backtrack
//     //exclude
//     print_subsets(arr,ans,i+1,count);
// }
// int main(){
//    vector<int> arr ={1,2,3};
//    vector<int> ans;
//    int count = print_subsets(arr,ans, 0 ,0);
//    cout << "count of even sum = " << count << endl;
//    return 0;
// }


#include <iostream>
#include <vector>
using namespace std;
                           // return  subset of array whose sum equal to k
int print_subsets(vector<int> arr ,vector<int>& ans ,int i ,int k , int count){
    if(i == arr.size()){
      int sum = 0;
        for(int val : ans){
            sum += val ;
        }
        if(sum == k){
          count += 1 ;
          for(int val : ans){
            cout<< val<< " ";
          }
          cout<< endl;
        }
        return count;
    }
    //include
    ans.push_back(arr[i]);
    print_subsets(arr,ans,i+1,k,count);
    ans.pop_back();  //backtrack

    //exclude
    print_subsets(arr,ans,i+1,k,count);
}
int main(){
   vector<int> arr ={1,2,3};
   vector<int> ans;
   int k = 3;
   int count = 0 ; 
   //cout << "count of subsets whose sum is equal to k : " <<
    int c=  print_subsets(arr,ans, 0 , k ,count) ;
    cout << c ;
   return 0;
}
