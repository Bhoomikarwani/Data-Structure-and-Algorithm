#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool isValid(string s) {
        stack<char> st;
        for(int i=0 ; i<s.size() ; i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){     // opening bracket
               st.push(s[i]);
            }
            else{           // closing bracket
               if(st.size() == 0){       // case of only closing bracket in string
                  return false;
               }
               if((st.top() == '(' && s[i] == '(')  || 
                   (st.top() == '[' && s[i] == '[')  ||
                   (st.top() == '{' && s[i] == '{')){
                       
                       st.pop();
                    }
            }
        }
        return st.size() == 0;
}
int main(){
  string s = "({})";
  cout << isValid(s) << endl;
  return 0;
}