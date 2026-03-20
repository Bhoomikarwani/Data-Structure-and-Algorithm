#include <iostream>
#include <vector>
using namespace std;
int main(){

    // brute force approach
    vector<int> arr={2,11,7,15};
    int tar=9;
    int n=arr.size() ;
    for(int i=0 ; i<n ; i++){
        int first = arr[i] ;
        for(int j = i+1 ; j<n ; j++ ){
            int sec = arr[j];
            int sum = first + sec ;
            if(sum == tar) {
                cout << "[" << i << "," << j << "]" ;
            }
        }
    }

}

//