#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;
int main(){
    // set<int> s;
    // s.insert(2); 
    // s.insert(1);
    // s.insert(4);
    // s.insert(3);
    // s.insert(5);

    // s.insert(1);   //no insertion takes place again of same no.
    // s.insert(2);
    // s.insert(3);
    
    // cout<< s.size() <<endl;
    // for(auto val : s){
    //     cout<< val << " ";   //sorted order
    // }


    // cout<< "Lower bound = " << *(s.lower_bound(4)) << endl;//4   - it gives value equal to 4 or greater than 4 if 4 is not present
    // cout<< "Upper bound = " << *(s.upper_bound(4)) << endl;//5   - it only gives value that is greater than 4 whereas 4 is present in set

    unordered_set<int> s;
    s.insert(2); 
    s.insert(1);
    s.insert(4);
    s.insert(3);
    s.insert(5);

    for(auto val : s){
        cout<< val << " ";   //gives unsorted order
    }
    cout<< endl;
    return 0;
}