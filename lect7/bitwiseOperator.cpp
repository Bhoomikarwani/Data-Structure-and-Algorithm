#include<iostream>
using namespace std;
// int main(){
//    int a=4,b=8;
//    cout<<(a&b)<<endl;  //bitwise and
//    cout<<(a|b)<<endl;  //bitwise or
//    cout<<(a^b)<<endl;  //bitwise XOR
// }

//globally declared variables
// int x=3;
// void print(){
//    cout<< x<<endl;
// }
// int main(){
//    print();
//    cout<<x<<endl;
// }


//figure out how to find if a number is power of 2 without any loop
// bool isPowerOfTwo(int n){
//    return(n>0) && ((n & (n-1))==0); //if bitwise and karne par zero nhi aata means not power of 2
// }
// int main(){
//    int n;
//   cout<<"enter any number:";
//   cin>>n;
//   (isPowerOfTwo(n))?cout<<"is a power of 2":cout<<"is not a power of two";
// }

//WAF to reverse an integer n
int reverse(int n){
   int rev=0;
   while(n>0){
   int rem=n%10;
   rev=(rev*10)+rem;
   n=n/10;
   }
   return rev;
}
int main(){
     int n;
     cout<<"enter any number:";
     cin>>n;
     cout<<"reverse of no. : "<< reverse(n)<<endl;
}