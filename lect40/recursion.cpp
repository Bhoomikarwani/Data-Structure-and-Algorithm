#include <iostream>
using namespace std;
// void printNum(int n){  //recursive function
//     if(n == 1){
//         cout << 1 ;
//         return;
//     }
//     cout << n << " ";
//     printNum(n-1);
// }
// int main(){
//     printNum(50);
//     return 0;
// }

// N fACTORIAL
int factorial(int n){
    if(n == 0){
        return 1;
    }
    return n * factorial(n-1);
}
int main(){
   cout << factorial(5);
   return 0 ;
}