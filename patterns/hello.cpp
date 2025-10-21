#include <iostream>
using namespace std;
int main(){

//    ABCD
//    ABCD
//    ABCD
//    ABCD
//  int n=4;
//     for(int i=0; i<n; i++){
//          char ch='A'; //automatically 65 store karta h
//         for(int j=0; j<n ;j++){
//             cout<<ch<<" ";
//             ch+=1;
//         }
//         cout<<endl;
//     }


//123
//456
//789
// int n=3;
// int num=1;
//  for(int i=0; i<n; i++){
//     for(int j=0; j<n ;j++){
//           cout<<num;
//           num+=1;
//     }
//     cout <<endl;
//  }


//ABC
//DEF
//GHI
// int n=3;
// char ch='A';
// for(int i=0 ;i<n ;i++ )
// {
//       for(int j=0;j<n;j++){
//         cout<<ch;
//         ch+=1;
//       }
//       cout<<endl;
// }

// *
// **
// ***
// ****
// int n=4;
// for(int i=0; i<n; i++){
//   for(int j=0; j<=i; j++){
//     cout<<"* ";
//   }
//   cout<<endl;
// }

// 1
// 22
// 333
// 4444
// int n=4;
// for(int i=0; i<n; i++){
//   for(int j=0; j<=i; j++){
//     cout<<i+1;
//   }
//   cout<<endl;
// }

// 1
// 21
// 321
// 4321
// int n=4;
// for(int i=0; i<n; i++){
//   for(int j=i+1; j>0 ; j--){
//     cout<<j;
//   }
//   cout<<endl;
// }

// 1
// 2 3
// 4 5 6
// 7 8 9 10
int n=4;
int k=1;
for(int i=0; i<n; i++){
  for(int j=0; j<=i; j++){
    cout<<k<<" ";
    k++;
  }
  cout<<endl;
}

}