#include <iostream>
#include <deque>
#include <list>
#include <vector>
using namespace std;
//same as list but here random access is allow
// int main(){
//     deque<int> d = {1,2,3,4,5};
//     for(int val: d){
//         cout<< val<< "";
//     }
//     cout << endl;
//     cout << d[2]<<endl; //random access
//     return 0;

//     //showing error
//     // list<int> l={1,2,3};   
//     // cout<< l[2];
// }

//pair
int main(){
    // pair<string, int> p={"bhoomi karwani",4};
    // cout<< p.first << endl;
    // cout<< p.second<< endl;
   

    // pair<int , pair<int, char>> a={2,{1,'g'}};
    // cout<< a.first << endl;
    // cout<< a.second.first<< endl;
    // cout<< a.second.second<< endl;

    // vector<pair<int,int>> vec={{1,2},{2,3},{3,4}};
    // for(pair<int,int> p : vec){
    //     cout<< p.first <<" "<< p.second << endl;
    // }

    vector<pair<int,int>> vec={{1,2},{2,3},{3,4}};
    for(auto p : vec){
        cout<< p.first <<" "<< p.second << endl;
    }
    return 0;
}