#include <iostream>
using namespace std;
//WAF to calculate sum and product of all numbers in an array
// int sum(int arr[],int size){
//    int sum=0;
//    for(int i=0; i<size; i++){
//       sum+=arr[i];
//    }
//    return sum;
// }
// int product(int arr[],int size){
//     int product=1;
//     for(int i=0; i<size; i++){
//         product*=arr[i];
//     }
//     return product;
// }
// int main(){
//     int arr[]={1,2,3,4,5,6};
//     int size=6;
//     cout<<"sum :"<< sum(arr,size)<< endl;
//     cout<<"product :"<< product(arr,size)<< endl;
// }


//WAF to swap the max & min number of an array
// void swap_max_min(int arr[]){
//      int largest= INT8_MIN;
//     for(int i=0; i<5 ;i++){
//         if(arr[i]>largest){
//             largest=i;
//         }
//     } 
//      int smallest= INT8_MAX;  //( +infinity)
//     for(int i=0 ; i<5 ;i++){
//         if(arr[i]<smallest){
//             smallest=i;
//         }
//     }
//     int temp;
//     temp=arr[largest];
//     arr[largest]=arr[smallest];
//     arr[smallest]=temp;
// }


// int main(){
//   int arr[5]={4,3,6,78,1};
//   swap_max_min(arr);

//   for(int i=0;i<5 ;i++){
//     cout<< arr[i]<<" ";
//   }
//   return 0;
// }

//waf to print all unique values in arr
// void print_unique(int arr[]){
//    int i,j;
//    bool isDuplicate=false;
//   for( i=0;i<6;i++){
//     for( j=0;j<6;j++){
//       if(arr[i]==arr[j]){
//          isDuplicate=true;
//          break;
//       }
//     }
//     if(!isDuplicate){   //WE WANT ALWAYS FALSE CONDITION
//        cout<< arr[i]<<endl;
//     }
//   }
// }
// int main(){
//   int arr[6]={0,1,0,2,3,2};
//   print_unique(arr);
//   return 0;
// }

//WAF to print intersection of 2 arrays
void intersection(int arr1[],int arr[]){
   for(int i=0 ;i<5 ;i++){
    for(int j=0; j<5;j++){
      if(arr1[i]==arr[j]){
        cout<< arr[i]<<endl;
      }
    }
   }
}
int main(){
  int arr1[5]={1,3,2,4,6};
  int arr2[5]={2,0,3,9,6};
  intersection(arr1, arr2);
}