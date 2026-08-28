#include <iostream>
#include <vector>
using namespace std;
                                       // sign of the product of an array
int arraySign(vector<int>& nums) {
         int sign = 1;
        
        for(int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                // If any number is 0, the entire product is 0
                return 0;
            } else if (nums[i] < 0) {
                // Every negative number flips the sign of the product
                sign = -sign;
            }
        }
        
        return sign;
}
int main(){
    vector<int> nums= {1,2,3,4,5,0};
    cout << arraySign(nums);
}