#include <iostream>
using namespace std;

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