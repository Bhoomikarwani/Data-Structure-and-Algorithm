#include <iostream>
#include <vector>
#include <string>
using namespace std;
//to one number
// string isPrime(int n){
//     for(int i=2; i*i <= n ; i++){
//         if(n % i==0){
//             return "not prime";
//         }
//     }
//     return "prime";
// }

//to check for range of numbers(brute force approach)
// string isPrimeRange(int N)
// {
//     for (int n = 2; n <= N; n++)
//     {
//         bool isPrime = true;

//         for (int i = 2; i * i <= n; i++)
//         {
//             if (n % i == 0)
//             {
//                 isPrime = false;
//                 break;
//             }
//         }
//         if (isPrime)
//         {
//             cout << n << endl;
//         }
//     }
// }

//to check for range of numbers(optimize approach)
//sieve of Eratosthenes
//int PrimeInRange(int N){

//      vector<bool> prime(N+1,true);
//      int count =0;

//      for(int i=2 ; i<N ; i++){
//          if(prime[i]==true){
//             count++;
//             for(int j=i*2 ; j<N ; j=j+i){
//                 prime[j]=false;
//             }
//          } 
//      }
//      return count;
// }


// void printDigits(int n){
//     int count = 0;
//     int sum = 0;
//     while(n != 0)
//     {
//         int digit = n % 10 ;
//         cout << digit << endl ;
//         n = n / 10 ;
        
//         count++ ;

//         sum += digit;
//     }
//     cout << count << endl ;
//     cout << sum << endl ;
// }

// void countDigits(int n){
//     cout<< (int)(log10(n)+1) << endl;
// }

bool isArmstrong(int n){  //153 = 1^3 + 5^3 + 3^3
   int copyN = n ;
   int sumOfCubes= 0 ;

   while(n != 0){
    int dig = n %10 ;
    sumOfCubes+= (dig * dig *dig);

    n = n / 10 ;
   }

   return sumOfCubes == copyN;
}

int main(){
    // int n=47;
    // cout<< isPrime(n)<< endl;

    //cout << isPrimeRange(50) <<endl;

    //cout << PrimeInRange(50) <<endl ; 

    //int n=3599;
    //printDigits(n);
    //countDigits(n);

    int n=371;   // 153, 371 ,1
    if(isArmstrong(n)){
         cout<< "Armstrong" << endl;
    }
    else{
        cout<< "NOT Armstrong" << endl;
    }
    return 0;
}