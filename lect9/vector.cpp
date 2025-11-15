#include <iostream>
#include <vector>
using namespace std;

//same as array but in vectors no fixed size
//g++ -std=c++11 vector.cpp(for compilation)

//int main(){
    //creation of vector
    // vector<int> vec={ 1,2,3};  //vector<data type> variable name
    // cout<< vec[0]<<endl;
    // cout<< vec[1]<<endl;
    // cout<< vec[2]<<endl;

    // vector<int> vec(3,0); // vec(3,0) where 1st value is size of vector &2nd value is data
    // //for each loop
    // for(int val :  vec){   //vec is vector vaiable ka name &val vec kai andar ki ek-ek vale ko
    //      cout<<val <<endl; //access karega
    // } 

    //vector<char> vec={'a','b','c','d'};
    //  for(char val :  vec){   
    //      cout<<val <<endl; 
    //  } 
    
    //functions
//      vector<int> vec;
//    cout << "size =" <<vec.size()<<endl;
//    vec.push_back(25);  //data last mai jakar add hojayega
//    vec.push_back(35);
//    vec.push_back(45);  //Dynamic memory allocation
//    cout << "size =" <<vec.size()<<endl;
   
//    vec.pop_back();
//    for(int val: vec){
//     cout<<val<<endl;
//    }

//    cout<<vec.front()<<endl;
//     cout<<vec.back()<<endl;
//     cout<<vec.at(1)<<endl;
//     cout<<vec.at(2)<<endl;  //error
// }


// //single number(leetcode 136)
// int main(){
//  vector<int> vec={5,6,2,5,6};
//  int ans=0;
//  for(int val: vec){
//     ans^=val;
//  }
//  cout<<"unique number ="<< ans<<endl;
// }

//linear search in vector
// int LS(vector<int> &num,int x ){// call by refrence isse usi vector ka ek or name create hoga
//     for(int val: num){           //and same vector mai changes implement hojayenge
//         if(val==x){
//             cout<< "found"<<endl;
//             return 0;
//         }

//     }
//     cout<<"not found"<<endl;
//     return -1;
// }
// int main(){
//     vector<int> vec={2,3,4,1,7};
//     int target=8;
//     LS(vec,target);
// }


//reverse a vector
//2 pointer approach
int main(){
    vector<int> vec={1,2,3,4,5};
    int start=0;
    int end=vec.size()-1;
    while(start<end){
    swap(vec.at(start),vec.at(end));
    start++;
    end--;
    }
    for(int val:vec){
        cout<< val<<endl;
    }
}
