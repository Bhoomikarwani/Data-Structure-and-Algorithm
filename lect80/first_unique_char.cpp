#include <iostream>
#include <unordered_map>
#include <queue>
#include <string>
using namespace std;
                               // First unique character in a string   TC = O(n) , SC = O(n)
int main(){
    string s = "loveleetcode";
    unordered_map<char, int> m;
    queue<int> q;

    for (int i = 0; i < s.size(); i++)
    {
        if (m.find(s[i]) == m.end())
        {
            q.push(i);
        }

        m[s[i]]++;

        while (q.size() > 0 && m[s[q.front()]] > 1)
        {
            q.pop();
        }
    }
    
    if(q.empty()){
        cout << -1;
    }
    else{
       cout << q.front();
    }   
}                               