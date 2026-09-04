#include <iostream>
using namespace std;
                //Given an integer n, return true if n has exactly three positive divisors. Otherwise, return false

bool isThree(int n) {
        int check = 0;
        for(int i = 1 ; i<= n ; i++){
            if(n%i == 0){
                check++;
            }
        }
        if(check == 3){
            return true;
        }
        else{
            return false;
        }
}
int main(){
   cout << isThree(4) << endl;
}