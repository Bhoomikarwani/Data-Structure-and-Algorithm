// find xor of all elements of array
#include <iostream>
#include <vector>
using namespace std;

int xorOperation(int n, int start) {
        vector<int> nums;
        int xr = 0;
        for(int i=0 ; i<n ; i++){
            nums.push_back(start + 2 * i);
            xr ^= nums[i];
        }
        return xr;
}
int main(){
    int n =5;
    int start =0;
    cout << xorOperation(n, start);
    return 0;
}