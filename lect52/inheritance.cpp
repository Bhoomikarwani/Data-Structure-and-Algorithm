#include <iostream>
#include <vector>
using namespace std;
// inheritance

// class Person{    // parent class
// public:        
//     string name;
//     int age;

//     Person(){
//         cout << "parent constructor" << endl;
//     }

//     ~Person(){
//         cout << "parent destructor" << endl;
//     }
// };

// class student: public Person{   // child class
// public:
//    int roll;
   
//    student(){
//       cout << "child constructor" << endl;
//    }

//    void getInfo(){
//     cout << "name : " << name << endl;
//     cout << "age : " << age << endl;
//     cout << "roll no. : " << roll << endl;
//    }

//    ~student(){
//       cout << "child destructor" << endl;
//    }
 
// };
// int main(){
//   student s1;
//   s1.name = "bhoomi";
//   s1.age = 19;
//   s1.roll =98;
//   s1.getInfo();
// }


                                            // for parameterized constructor
// class Person{    // parent class
// public:        
//     string name;
//     int age;

//     Person(string name , int age){
//        this->name = name;
//        this->age = age;
//     }

    
// };

// class student: public Person{   // child class
// public:
//    int roll;
   
//    student(string name, int age , int roll):Person(name,age){
//      this->roll = roll;
//    }

//    void getInfo(){
//     cout << "name : " << name << endl;
//     cout << "age : " << age << endl;
//     cout << "roll no. : " << roll << endl;
//    }

//    ~student(){
//       cout << "child destructor" << endl;
//    }
 
// };
// int main(){
//   student s1("bhoomi",19,98);
//   s1.getInfo();
// }

                                         // types of inheritance
// above code is an example of single inheritance

// multi-level inheritance
// class Person{    // parent class
// public:        
//     string name;
//     int age;
// };
// class student: public Person{   // child class
// public:
//    int roll;
// };
// class gradStudent: public student{
// public:
//     string researchArea;
// };   
// int main(){
//     gradStudent s1;
//     s1.name = "bhoomi";
//     s1.age=19;
//     s1.roll = 98;
//     s1.researchArea = "air";

//     cout<< s1.name << " " << s1.age <<" "<< s1.roll << " " << s1.researchArea;
// }



//multiple inheritance
// class teacher{};
// class student{};
// class TA : public teacher, public student {};   // TA -> teacher assistant
