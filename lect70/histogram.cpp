#include <iostream>
#include <vector>
#include <stack>
using namespace std;

         // lagest rectangle in histogram
int main(){ 
    vector<int> heights = {2,1,5,6,2,3};
   //Right Smaller
        int n = heights.size();
        stack<int> s;
        vector<int> right(n,0);  // right smaller nearest
        for(int i=n-1; i>=0 ; i--){
            while(s.size()>0 && heights[s.top()]>=heights[i]){
                s.pop();
            }
            right[i] = s.empty() ? n : s.top();
            s.push(i);
        }

        while(!s.empty()){
            s.pop();
        }

    //Left Smaller
        vector<int> left(n,0);  // left smaller nearest
        for(int i=0; i<n ; i++){
            while(s.size()>0 && heights[s.top()]>=heights[i]){
                s.pop();
            }
            left[i] = s.empty() ? -1 : s.top();
            s.push(i);
        }


        int ans = 0 ;
        for(int i=0 ; i<n ; i++){
            int width = right[i]-left[i]-1;
            int currAns = heights[i] * width;
            ans = max(currAns , ans);
        }

        cout<< ans << endl; 
}