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
// int factorial(int n){
//     if(n == 0){
//         return 1;
//     }
//     return n * factorial(n-1);
// }
// int main(){
//    cout << factorial(5);
//    return 0 ;
// }

// sum of n nums with recursion
// int sum(int n){
//    if(n == 1){
//     return 1;
//    }
//    return n + sum(n-1);
// }
// int main(){
//    int Sum =sum(4);
//    cout << Sum ;
// }

//fibonacci (find (n) th trem of fibonacci series )
int fib(int n){
    if(n == 0 || n == 1){
        return n;
    }
    return fib(n-1) + fib(n-2);
}
int main(){
    int n = 6;
    int val = fib(n);
    cout << n <<"th term of fibonacci series is : "<< val;
}