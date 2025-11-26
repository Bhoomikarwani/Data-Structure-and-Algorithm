#include <iostream>
using namespace std;

//pow(x^n)
double myPow(double x, int n){
    double ans=1;
    int binaryForm=n;
    if(n==0) return 1.0;
    if(x==0) return 0.0;
    if(x==1) return 1.0;
    if(x==-1 && n%2==0) return 1.0;
    if(x==-1 && n%2!=0) return -1.0;

    //for negative power
    if(n<0){
        x=1/x;
        binaryForm= -binaryForm;
    }

    while(binaryForm >0){
         if(binaryForm%2==1){
            ans*=x;
         }
         x*=x;
         binaryForm /=2;
    }

    return ans;
}

int main(){
    double x=3.0;
    int n=5; 
    cout<< myPow(x,n);
}