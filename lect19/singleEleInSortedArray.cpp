#include <iostream>
#include <vector>
using namespace std;

int single(vector<int>& a){
    int n=a.size();
    int st=0,end=n-1;
    
    while(st<=end){
        
        int mid=st+ (end-st)/2;
        if(mid == n-1 && a[n-1]!=a[n-2])  {
            return mid;
        }
        if(mid == 0 && a[0]!=a[1])  {
            return mid;
        }
        if(a[mid-1]!=a[mid] && a[mid]!=a[mid+1]){
            return mid;
        }

        if(mid%2==0){     //even
            if(a[mid-1]==a[mid]){  //left
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }  
        else{            //odd  
          if(a[mid-1]==a[mid]){  //left
                st=mid+1;
            }
            else{                //right
                end=mid-1; 
            }
        }
    }
    return -1;
}
int main(){
    vector<int> arr={0,0,1,1,2,2,3,3,4,4,9,9,8,8,7};
    cout<<single(arr);
}