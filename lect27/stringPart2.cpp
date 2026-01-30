#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

//check whether the given phrase is palindrome or not (ingnore non-alphanumeric characters and convert all uppercase char to lowercase)
// bool isAlphaNum(char ch){
//    if((ch >= '0' && ch<= '9')  || (tolower(ch) >= 'a' && tolower(ch) <= 'z')){
//     return true;
//    }
//    return false;
// }

// bool isPalindrome(string s){
//    int st=0 , end =s.length()-1;
//    while(st<end){
//       if(! isAlphaNum(s[st])){
//         st++;
//         continue;
//       }
//       if(! isAlphaNum(s[end])){
//         end--;
//         continue;
//       }
//       if(tolower(s[st]) != tolower(s[end]) ){
//         return false;
//       }
//       st++;
//       end--;
//    }
//    return true;
// }
// int main(){
//     string s="A man, a plan, a canal: Panama";
//     cout << isPalindrome(s);
//    return 0;
//}


//remove all occurence of part from 's' start from left side
string removeOccurence(string s, string part){
  while(s.length() > 0 &&  s.find(part) < s.length()){   //s.find(part)-returns index value
    s.erase(s.find(part) , part.length());   //s.erase(start, jitna part delete hona hai uski length)
  }
  return s;
}
int main(){
  string s="daabcbaabcbc";
  string part="abc";
  cout << removeOccurence(s, part);
  return 0;
}