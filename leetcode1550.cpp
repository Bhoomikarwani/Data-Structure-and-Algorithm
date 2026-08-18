#include <iostream>
#include <vector>
using namespace std;
bool threeConsecutiveOdds(vector<int>& arr) {
        if(arr.size() <3) return false;
        for(int i=0 ; i<= arr.size()-3; i++ ){
              if(arr[i]%2 != 0 && arr[i+1]%2!=0 && arr[i+2]%2!=0){
                return true;
              }
        }
       
        return false;
}

int main(){
    vector<int> arr = {1,2,3,4,5,6};
    cout << threeConsecutiveOdds(arr);
}