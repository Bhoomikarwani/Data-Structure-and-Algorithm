#include <iostream>
using namespace std;

//brute force approach
//calculate area of all possible containers then by compairing we got max. one
int max_Water(int height[]){
   int w,h,area, maxWater=0;    //width,heigth
   for(int i=0 ; i<9 ;i++){  //i->left boundary
       for(int j=i+1 ; j<9 ;j++){  //j-> right boundary
           w=j-i;
           h=min(height[i],height[j]);
           area=w*h;
           maxWater=max(maxWater,area);
       }
   }   
   return maxWater;
}

int main(){
    int height[9]={1,8,6,2,5,4,8,3,7};
    cout<< max_Water(height);
    //time complexicity=O(n^2);
}