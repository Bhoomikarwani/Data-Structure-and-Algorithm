#include <iostream>
#include <string>
#include <stack>
using namespace std;
int main(){
    string s = "abBAcC";
    string result = "";
        
        for (char c : s) {
            // Check if top of 'result' and 'c' form a bad pair
            if (!result.empty() && abs(result.back() - c) == 32) {
                result.pop_back(); // Remove the matching bad pair
            } else {
                result.push_back(c); // Add character to result stack
            }
        }
        
        for(char c : result){
            cout<< c <<"";
        }
    return 0;    
}        