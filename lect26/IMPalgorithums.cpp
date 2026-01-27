#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
//int main(){
    // int arr[5]={3,4,1,5,2};
    // sort(arr, arr+5);
    // for(int val : arr){
    //     cout << val << " ";
    // }

    // vector<int> vec ={6,4,9,2,1};
    // sort(vec.begin(), vec.end());
    // for(int val : vec) {
    //     cout<< val <<" ";
    // }
    // cout<< endl;
//}


 bool comparator(pair<int,int> p1 , pair<int,int> p2) {  //first we compare on the basis of second element of every pai
        if(p1.second < p2.second) return true;
        if(p1.second > p2.second) return false;

        if(p1.first < p2.first) return true ; // if second element of pairs are same then we check first compare first element
        else return false;
 }
int main(){
//    vector<pair<int,int>> vec ={{1,2} , {5,3} , {3,5}, {5,2}};
//     sort(vec.begin(), vec.end(), comparator);
//     for(auto val : vec){
//         cout<< val.first << " " << val.second << endl;
//     }
//     return 0;

vector<int> vec = {1,2,3,4,5};
 reverse(vec.begin(), vec.end());
 for(auto val : vec){
    cout << val << " ";
 }
 cout<< endl;
}


