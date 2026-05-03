#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// leetcode 131

bool isPalin(string s){
    string s2 = s;
    reverse(s2.begin(), s2.end());
    return s2 == s; 
}
void getAllPartitions(string s, vector<string>& partitions , vector<vector<string>>& ans){
    //base case
    if(s.size() == 0){
        ans.push_back(partitions);
        return;
    }

    for(int i=0 ; i<s.size() ; i++){
       string part = s.substr(0, i+1);
       if(isPalin(part)){
        partitions.push_back(part);
        getAllPartitions(s.substr(i+1),partitions , ans);
        partitions.pop_back();
       }
    }
}
vector<vector<string>> partition(string s){
    vector<string> partitions;
    vector<vector<string>> ans;
    getAllPartitions(s,partitions , ans);
    return ans;
} 
int main(){
    string s = "aab";
    vector<vector<string>> ans = partition(s);
    for(vector<string> val : ans){
        for(int i=0 ; i<val.size() ; i++){
            cout<< val[i] << " ";
        }
        cout << endl;
    }
}