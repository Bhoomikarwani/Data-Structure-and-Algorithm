#include <iostream>
#include <string>
using namespace std;
                                    // constructor overloading
// class student{
// public:
//   string name;

//   student(){
//     cout << "non parameterised" << endl;
//   }
//   student(string name){
//     cout << "parameterized" << endl ; 
//   }
  
// };
// int main(){
//     student s1("tony stark");
//     return 0;
// }

                                        // function overloading
// class Print{
// public:    
//     void show(int x){
//         cout<< "int : " << x << endl;
//     }
//     void show(char ch){
//       cout << "char : " << ch << endl;
//     }
// };
// int main(){
//     Print p1;
//     p1.show('&');
// }
 

                                     // function overriding
// class Parent{
// public:
//    void show(){ 
//         cout<< "parent class" << endl;
//     }
   
// };
// class Child : public Parent{
// public:
//    void show(){ 
//         cout<< "child class" << endl;
//    }
// };  
// int main(){
//     Parent p1;
//     p1.show();
//     return 0;
// }                                   

                                       // virtual function
// class Parent{
// public:
//    virtual void hello(){ 
//         cout<< "hello from parent" << endl;
//     }
// };  
// class Child : public Parent{
// public:
//    void hello(){ 
//         cout<< "hello from child " << endl;
//    }
// };                                      


                                       // abstract class
// class Shape{  // abstract class
//     virtual void draw() = 0 ; //pure virtual funtion
// };                                       
// class Circle : public Shape{
//     public:
//     void draw(){
//         cout << "drawing circle\n" ;
//     }
// };
// int main(){
//     //Shape s1;   //->object of abstract class type "Shape" is not allowed

//     Circle c1;
//     c1.draw();
//     return 0;
// }

                                        // static variable
void fun(){
    static int x=0 ;  // ek hi baar initialize ho sakta hai
    cout << "x : " << x << endl;
    x++;
}    
int main(){
    fun();
    fun();
    fun();
    return 0;
}         
