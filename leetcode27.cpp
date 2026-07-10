#include <iostream>
#include <vector>
using namespace std;
int removeElement(vector<int>& nums, int val) {
        int  k =0 ;
        int st =0 , end = nums.size()-1;
        while(st<end){
            if(nums[st] == val){
                if(nums[st] != nums[end]){
                  swap(nums[st] , nums[end]);
                  st++;
                  end--;
                }  
                else{
                    end--;
                }
            }
            else{
                st++;
            }
        }
        for(int i =0 ; nums[i] != val ; i++){
            k++;
        }
        return k;
}
int main(){
   vector<int> nums={0,1,2,2,3,0,4,2};
   int val = 2;
   cout << "number of initial values before (val) in ans final vector  : " << removeElement(nums , val);
   return 0;
}