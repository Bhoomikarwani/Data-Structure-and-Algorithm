#include <iostream>
using namespace std;
 int main(){
    //int a=5;
    //cout<< &a ;
   

    //array pointer (arr is itself a pointer which stores a addrress of 1st index)
    //int arr[]={1,2,3,4,5};
   //  cout<< arr <<endl;
   //  cout<< *arr <<endl;
   //arr is a constant pointer we cannot store address of another variable
   //int a=15;
   //arr=&a;  =>warning is genrated

   //pointer Arthmetic
   //increment++
   //int a=10;
   //int* p=&a;     //suppose &a=100
   //cout<< p <<endl;  //if we do p++ then it returns 104
  // cout << ++p <<endl; 
   

   //decrement--
   //cout<< --p <<endl;
   
   // int arr[]={1,2,3,4,5};
   // cout << *arr<<endl; //1
   // cout << *(arr+1)<<endl;//2 
   // cout << *(arr+2)<<endl; //3
   // cout << *(arr+3)<<endl; //4
   // cout << *(arr+4)<<endl; //5

   //subtract pointer
   // int* ptr2;//100
   // int* ptr1=ptr2+2;//108
   // cout << ptr1-ptr2<<endl;//8 bits=2 int
  
   //comparision btw pointers
   // int *ptr1;
   // int *ptr2;
   // cout << ptr1<<endl;
   // cout << ptr2<<endl;
   // cout<<(ptr1<ptr2)<< endl;
   //  cout<<(ptr1>=ptr2)<< endl;

   int arr[]={10,20,30,40};
   int *ptr=arr;
   cout<< *(ptr+1)<<endl;
   cout<< *(ptr+3)<<endl;
   ptr++;
   cout<< *ptr<<endl;
   }