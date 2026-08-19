#include <iostream>
using namespace std;
                            // return the difference between the product of its digits and the sum of its digits
int subtractProductAndSum(int n) {
        int pro = 1 ;
        int sum = 0 ;
        while(n>0){  
            int remainder = n%10;
            n = n/10;
            sum += remainder;
            pro *= remainder;
        }
        return  pro - sum;
    }
int main(){
    int n = 234;
    cout << subtractProductAndSum(n);
}