#include <iostream>
#include <vector>
using namespace std;

//2 pointer approach 
// time com. = O(n)
int max_Water(vector<int> &height){
      int l=0,r=height.size()-1, maxWater=0 ;//l=left point, r=right pointer
      int w,h;  //width, height
      while(l<r){
        w=r-l;
        h=min(height[l],height[r]);
        int currentMax=w*h;
        maxWater=max(maxWater,currentMax);

        height[l]<height[r]? l++ : r--;
      }
      return maxWater;
}
int main(){
   vector<int> height={1,8,6,2,5,4,8,3,7};
   cout << max_Water(height);
}