#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main(){ 
    // find the next greater no. for each element of arr
    
    vector<int> arr = {6, 8, 0, 1, 3};
    
    vector<int> ans(arr.size(),0);
    stack<int> s;
    int n= arr.size();
    for(int i=n-1 ; i>=0 ; i--){
        while(s.size() > 0 && s.top() <= arr[i]){   // for middle values
          s.pop();
        }

        if(s.empty()){
            ans[i] = -1;
        }
        else{
            ans[i] = s.top();
        }

        s.push(arr[i]);
    }

    for(int val : ans){
        cout << val << " ";          // =>8 -1 1 3 -1 
    }
    cout << endl;

    return 0;
}    