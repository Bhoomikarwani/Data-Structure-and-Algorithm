#include <iostream>
#include <vector>
#include <set>
using namespace std;

set<vector<int>> s;

void getPossibleConbination(vector<int> &arr, int idx, vector<vector<int>> &ans, vector<int> &combinations, int target)
{
    int n = arr.size();
    // base case
    if (target == 0)
    {
        if (s.find(combinations) == s.end())
        { // we are creating set here to store only unique combinations in ans
            ans.push_back(combinations);
            s.insert(combinations);
        }
        return;
    }
    if (idx == n || target < 0)
    {
        return;
    }

    // main logic
    combinations.push_back(arr[idx]);
    getPossibleConbination(arr, idx + 1, ans, combinations, target - arr[idx]); // adds single time
    getPossibleConbination(arr, idx, ans, combinations, target - arr[idx]);     // for adding multiple time

    combinations.pop_back();
    getPossibleConbination(arr, idx + 1, ans, combinations, target); // after poping call for next element
}

vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>> ans;
        vector<int> combinations;
        getPossibleConbination(arr ,0 , ans ,combinations , target);
        return ans;
}

int main(){
    vector<int> arr = {2,3,5};
    int target =8;
    vector<vector<int>> ans = combinationSum(arr, target);
    for(vector<int> val : ans){
        for(int i=0 ; i<val.size() ; i++){
            cout<< val[i] << " ";
        }
        cout << endl;
    }
}