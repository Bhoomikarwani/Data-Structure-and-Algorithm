#include <iostream>
#include <vector>
using namespace std;

void possibleCombinations(int n, int k, vector<vector<int>> &ans, vector<int> &nums){
        for(int i=1; i <= n-2  ; i++ ){
            nums.push_back(i);
            for(int j = i+1; j<=n-1 ; j++){
                nums.push_back(j);
                for(int k = j+1 ; k<=n ; k++){
                    nums.push_back(k);
                    ans.push_back(nums);
                    nums.pop_back();
                }  
                nums.pop_back();  
            }
            nums.pop_back();
        }
}


int main(){
    int n = 4 , k = 2;
    vector<vector<int>> ans;
    vector<int> nums;
    possibleCombinations(n, k, ans, nums);
    for(vector<int> val : ans){
      for(int i=0 ; i<val.size() ; i++){
            cout<< val[i] << " ";
       }
       cout << endl ; 
    }
    return 0;
}