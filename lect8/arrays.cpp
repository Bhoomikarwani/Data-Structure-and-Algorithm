#include <iostream>
using namespace std;
//int main(){
    // int marks[5]={49,29,27,49,20};
    // int size= sizeof(marks)/sizeof(int);
    // for(int i=0;i<size ;i++){
    //     cout<< marks[i]<<endl;
    // }

    // int marks[5];
    // int size=5;
    // for(int i=0 ;i<size ;i++){
    //     cin>> marks[i];
    // }
    // cout<<"array created-"<<endl;
    //  for(int i=0 ;i<size ;i++){
    //     cout<< marks[i]<<endl;
    // }


    
    // int arr[6]={4,-6,111,-8,222,82};
    // int size=6;
    //smallest no. in array
    // int smallest= INT8_MAX;  //( +infinity)
    // for(int i=0 ; i<size ;i++){
    //     if(arr[i]<smallest){
    //         smallest=arr[i];
    //     }
    // }
    //cout<< "smallest no. "<<smallest<<endl;
    //or
    // int smallest= INT8_MAX;;
    // for(int i=0; i<size ;i++){
    //     smallest=min(arr[i],smallest);
    // }
    // cout<< "smallest no. "<<smallest<<endl;


    //largest no. in array
   // int largest= INT8_MIN;
    // for(int i=0; i<size ;i++){
    //     if(arr[i]>largest){
    //         largest=arr[i];
    //     }
    // }
    // cout << "largest no. "<< largest<<endl;

    //or
    //  for(int i=0; i<size ;i++){
    //     largest=max(arr[i],largest);
    //  }
    //   cout << "largest no. "<< largest<<endl;

    //print index of largest no.
//     int largest=INT8_MIN;
//     int index;
//     for(int i=0; i<size ; i++){
//         if (arr[i]>largest)
//           {
//             largest=arr[i];
//             index=i;
//           }
//     }  
//     cout << "index of largest no. " <<index<<endl;
//return 0;
//}
    

//pass by refrence
// void changeVal(int arr[]){  //automatic address mai change hoga 
//     cout<<"in function"<<endl;
//    for(int i=0;i<5;i++){
//     arr[i]=2*arr[i];
//    }
// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//     changeVal(arr);
//     cout <<"in main fn."<<endl;
//     for(int i=0; i<5 ;i++){
//         cout<< arr[i]<<endl;
//     }
//     return 0;
// }


//linear search
// int linearSearch(int arr[],int target){
//     for(int i=0;i<5;i++){
//         if(arr[i]==target){  //found
//             return i;
//         }
//     }
//     return -1;  //not found
// }
// int main(){
//     int arr[5]={34,67,86,24,77};
//     int target=24;
//      cout<< linearSearch(arr,target)<<endl;
//     return 0;
// }

    
//reverse an array (by 2 pointer approach)
int reverse(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[5]={34,67,86,24,77};
    int size=5;
    reverse(arr,size);
    for(int i=0; i<size; i++){
        cout<< arr[i] <<endl;
    }
}
 

