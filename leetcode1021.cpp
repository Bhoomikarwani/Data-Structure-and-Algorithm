#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(){
    string str = "((()))(())";
    string ans = "";
    stack<int> s;
    
    
    for(int i=0 ; i<str.length() ; i++){
        if(str[i] == '('){
            if(s.empty()){
                s.push(str[i]);
            }
            else{
                s.push(str[i]);
                ans += str[i];
            }
        }
        else{  // means closing bracket hai
            s.pop();
            if(!s.empty()){
                ans += str[i];
            }
        }
    }
    cout << ans <<endl;
}