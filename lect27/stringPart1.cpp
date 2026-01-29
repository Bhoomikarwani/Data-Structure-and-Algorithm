#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    //include cstring for char arr
    // char str[]= {'a', 'b', 'c' , '\0'};
    // cout<< strlen(str) << endl;

    // char str[]= "college";
    // cout<< strlen(str) << endl;

    // char str[]= "college";
    // cout<< str[2] << endl;

    // char str[100];
    // cout << "enter char array :" ;
    // cin >> str;
    // cout << str << endl;

    // char str[100];
    // cout << "enter char array :" ;
    // cin.getline(str ,100 , '$');         //input - bhoomi karwani$ hello  , output -  bhoomi karwani
    // cout << "output : "<<str << endl;

    //print all the characters of string
    // char str[12];
    // cout << "enter char array :" ;
    // cin.getline(str ,100 );
    // for(char ch : str){
    //     cout << ch <<" " ;
    // }   
    // cout << endl;

    //calculate length using for loop
    // char str[100]=" apna college";
    // int len=0;
    // for(int i=0 ; str[i] != '\0' ; i++){
    //     len++;
    // }
    // cout<< len;


//strings --> include string
    // string str;
    // getline(cin, str);
    // cout<< "output : "<< str<<endl;

    // for(int i=0 ; i< str.length() ; i++){
    //     cout<< str[i] << " " ;
    // }
    // cout<< endl;

    // for(char ch: str){
    //     cout<<ch<< " " ;
    // }


  //reverse a string
    //with char array
    // char arr[6]="hello";
    // int st=0, end = 6-1;
    // while(st<end){
    //     swap(arr[st++] , arr[end--]);
    // }
    // for(char ch :arr){
    //     cout<< ch;
    // }

    //with string
    //   string str="hello";
    //   reverse(str.begin() , str.end()); //iterators
    //   cout<< str;

   //check whether string is palindrome  or not
      string str="racebike";
      string str1= str;
      reverse(str.begin() , str.end()); //iterators
      if(str1==str){
        cout<< "palindrome";
      }
      else{
        cout << "not palindrome"; 
      }
    return 0;
}
