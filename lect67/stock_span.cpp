#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main(){ 
    // find the span value for all stock prices and days

    vector<int> price = {100, 80, 60, 70, 60, 75, 85};
    
    vector<int> ans(price.size(),0);
    stack<int> s;

    for(int i=0 ; i<price.size() ; i++){
        while(s.size()>0 && price[s.top()]<= price[i]){
            s.pop();
        }   // when is got break we have our preHigh val
        if(s.empty()){
            ans[i] = i+1;
        }
        else{
            ans[i] = i - s.top();
        }

        s.push(i);
    }

    for(int val : ans){
        cout << val << " ";          // =>1 1 1 2 1 4 6
    }
    cout << endl;

    return 0;
}