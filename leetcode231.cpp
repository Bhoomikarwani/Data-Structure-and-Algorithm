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
int main(){
    int n = 8;
    cout << isPowerOfTwo(n) << endl;
}