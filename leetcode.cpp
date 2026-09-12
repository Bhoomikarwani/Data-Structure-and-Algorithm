#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int , vector<int>> indices;
        int count = 0 ;
        for(int i=0 ; i<nums.size() ; i++){
            indices[nums[i]].push_back(i);
        }
        for(const auto& val : indices)
        {
            if(val.second.size() == 3)
            {
                if(val.second[1] - val.second[0]  ==  val.second[2] - val.second[1])
                {
                    count++;
                }
            }
        }
        
        return count;
}
int main(){
    vector<int> nums ={1,2,3,41,2,3,41,3};
    cout << countSpecialIntegers(nums);
}