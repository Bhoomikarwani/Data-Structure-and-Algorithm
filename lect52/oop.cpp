#include <iostream>
#include <string>
using namespace std;

class Teacher{
private:
     double salary;

public:
    
    Teacher(){
        // cout << "constructor is called" <<endl;
        dept = "Computer Science";                              // non-parameterized constructor
    }

    // parameterized constructor
    Teacher(string name, string subject , double salary , string dept){
       this->name = name;
       this->subject = subject;
       this->salary = salary;
       this->dept = dept;
    }

    //we can make our own copy constructor
    Teacher(Teacher &obj){   // pass by refrence
         cout << "i am custom copy constructor"<< endl;

        this->name = obj.name;
        this->dept = obj.dept;
        this->subject = obj.subject;
        this->salary = obj.salary;
    }

    //properties /attributes
    string name;
    string dept;
    string subject;

    //methods / member function
    void changeDept(string newDept){
        dept = newDept;
    }

    // setter
    void setSalary(double s){
        salary =s;
    }
    //getter
    double getSalary(){
        return salary;
    }
     
    void getinfo(){
        cout<< "name : " << name << endl;
        cout << "subject :" << subject << endl;
    }
};

// class Account{
// private:
//   double balance;
//   string password;  //data hiding


// public:
//   string accountId;
//   string username;    
// };



int main(){
    Teacher t1("bhoomi" ,"CS" , 25000 , "CSE");
    //t1.getinfo();
    // cout<<  t1.name <<t1.subject;
    // cout<< t1.getSalary() << endl;
   // cout << t1.dept << endl; 

   //Teacher t2(t1);   // default copy constructor
   Teacher t2(t1);     //custom copy constructor
   t2.getinfo();
    return 0;
}


// shallow and deep copy
// inheritance
// polymorphism
// abstraction
// virtual function
// sstatic