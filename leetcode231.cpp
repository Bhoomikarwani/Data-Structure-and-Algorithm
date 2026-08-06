#include <iostream>
using namespace std;
 
bool isPowerOfTwo(int n) {

                                         // brute force approach
      //  if (n <= 0 ){
      //   return false;
      //  }
      //  while(n % 2 == 0){
      //    n = n/2;
      //  }
      //  return n == 1; 
                                         // optimal approach
      return (n & (n-1)) == 0;                                   
}

 bool isPowerOfThree(int n) {
        if(n <= 0 ){
            return false;
        }
        while(n%3 == 0){
            n = n/3;
        }
        return n==1;
}
bool isPowerOfFour(int n) {
        if(n<=0){
            return false;
        }
        while(n%4 == 0){
            n = n/4 ;
        }
        
        return n==1;
}
int main(){
    int n = 16;
    cout << isPowerOfTwo(n) << endl;
    cout << isPowerOfThree(n) << endl;
    cout << isPowerOfFour(n) << endl;
}