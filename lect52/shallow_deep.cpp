#include <iostream>
#include <vector>
#include <string>
using namespace std;
                                       // Shallow copy
// class student{
//  public:
//    string name;
//    double* cgpaptr;

//    student(string name , double cgpa){
//     this->name = name;
//     cgpaptr = new double;
//     *cgpaptr = cgpa;
//    }

//    //copy constructor
//    student(student &obj){
//     this->name = obj.name;
//     this->cgpaptr = obj.cgpaptr;
//    }

//    void getInfo(){
//     cout << "name : "<< name << endl;
//     cout << "cgpa : " << *cgpaptr << endl;
//    }


// };
// int main(){
//     student s1("rahul kumar" , 8.9);
//     s1.getInfo();
//     student s2(s1);
//     //s2.getInfo();
//     *(s2.cgpaptr) = 9.8;
//     s1.getInfo();   
//     return 0;
// }

                                       // Deep Copy

class student{
 public:
   string name;
   double* cgpaptr;

   student(string name , double cgpa){   //constructor  -> memory allocate
    this->name = name;
    cgpaptr = new double;
    *cgpaptr = cgpa;
   }

   //copy constructor
   student(student &obj){
    this->name = obj.name;
    cgpaptr = new double;
    *cgpaptr = *obj.cgpaptr;
   }

   void getInfo(){
    cout << "name : "<< name << endl;
    cout << "cgpa : " << *cgpaptr << endl;
   }


   // destructor
   ~student(){
    cout << "Hi , I delete everything";    // destructor -> memory deallocate
    delete cgpaptr;     // yha par destructor mai jaruri hota h ki jo memory dynamically allocate hui h usse free karna
                        // yha par cpgaptr jis memory ko point kar rha tha vo delete hogi , na ki cgpaptr 
                        //dynamically memory ko delete karna isliye jaruri hota hai kyuki baad mai memory leak kai chances hote h              
   }

};
int main(){
    student s1("rahul kumar" , 8.9);
    s1.getInfo();
    student s2(s1);
    //s2.getInfo();
    *(s2.cgpaptr) = 9.8;
    s1.getInfo();   

    s2.name = "neha";
    s2.getInfo();
    return 0;
    
}                                       
