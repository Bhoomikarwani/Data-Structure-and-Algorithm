#include <iostream>
using namespace std;
void printHello(){
     cout<<"Hello\n";
}

double sum(double a, double b){
     return a+b;
}

//calculate sum digits of a number
int sumOfDigits(int num){
  int sum=0;
  while(num>0){
  sum=sum+(num%10);
  num=num/10;
  }
  return sum;
}

int factorial(int num){
  int fact=1;
  for(int i=num; i>0 ;i--){
    fact*=i;
  }
  return fact;
}
 int nCr(int n,int r){
      int fact_n=factorial(n);
      int fact_r=factorial(r);
      int fact_n_r=factorial(n-r);
      return fact_n/ (fact_r * fact_n_r);
 }

 void isPrime(int num){
  int count=0;
    for(int i=2; i<num; i++){
      if(num%2==0){
          count++;
      }
    }
    if(count>0){
      cout<< " not prime";
    }
    else{
      cout<< "prime";
    }
 }

 void fab(int n){
    int a=0,b=1;
    cout << a <<"\t"<<b<<"\t";
    for(int i=0;i<n-2; i++){
    int c=a+b;
    cout <<c <<"\t";
         a=b;
         b=c;
    }
 }

int main(){
     //  printHello();
     //  cout << "sum = "<<sum(3.34,5.53)<<endl;
      // cout<< "Sum of digits= "<<sumOfDigits(145) <<endl;
      // cout<<3%10;
      // cout << "factorial = "<< factorial(6) <<endl;
    //  cout<<"nCr = " <<nCr(6,3)<<endl;
    //isPrime(13);
    fab(10);
 }