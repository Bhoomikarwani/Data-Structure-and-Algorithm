#include <iostream>
using namespace std;

int dec_to_bin(int decNum){
    int ans=0,pow=1,remainder;
     while(decNum>0){
         remainder=decNum%2;
         decNum=decNum/2;
         ans+=(remainder*pow);
         pow=pow*10;
         }
         return ans;
}

int bin_to_dec(int binNum){
    int ans=0 ,pow=1;
    while(binNum>0){
    int rem=binNum%10;
    ans+=(rem*pow);
    binNum=binNum/10;
    pow*=2;}
    return ans;
}

int main(){
    //decimal to binary
//     int num=15;
//    cout << dec_to_bin(num);

//binary to decimal
 int num=10100;
  cout<< bin_to_dec(num);

}