#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

//reverse a give string
string reverseWords(string s) {
        reverse(s.begin(), s.end());
        int n= s.length();
        string ans="";
        for(int i=0 ; i<n ; i++) {
           string word="";
           while(s[i] != ' ' && i<n){
              word += s[i];
              i++;
           }
        
           reverse(word.begin(), word.end());
           if(word.length() > 0){
               ans+= " "+ word;
            }
        }
        return ans.substr(1);
    }
int main(){
    string s="a good   example";
    cout << reverseWords(s);
    return 0;
}