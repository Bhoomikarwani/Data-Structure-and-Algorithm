#include <iostream>
#include <vector>
using namespace std;
 //easy approach
// int main(){
//     int m=6,n=3;
//     int a[6]={1,2,3,0,0,0};
//     int b[3]={2,5,6};
//     int idx=0, i=0 ,j=0;
//     int c[6];
//     while(i<m || j<n){
//         if(a[i]<=b[j]){
//             c[idx]=a[i];
//             idx++;
//             i++;
//         }
//         else{
//             c[idx]=b[j];
//             idx++;
//             j++;
//         }
//     }
//     for(int i=0; i<6 ; i++){
//         cout << c[i];
//     }
// }

//optimize approach
void merge(vector<int>& A, int m , vector<int>& B, int n){
    int idx=m+n-1 , i= m-1 ,j=n-1;
    while(i>=0 && j>=0){
        if(A[i] >= B[j]){
            A[idx]=A[i];
            idx--;
            i--;
        }
        else{
            A[idx]=B[j];
            idx--;
            j--;
        }
    }
    while(j >=0){  //in case of A={4,5,6,0,0,0} and B={1,2,3}
       A[idx]=B[j];
            idx--;
            j--;
    }
}

int main(){
    vector<int> A={1,2,3,0,0,0}; // size should be equal to m+n
    int m=3; //sorted elements in A
     vector<int> B={2,5,6};
     int n=3;
     for(int i=0 ; i< m+n ; i++){
        cout <<A[i];
     }
}