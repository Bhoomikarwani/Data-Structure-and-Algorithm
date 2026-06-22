#include <iostream>
#include <vector>
#include <list>  // => have inbuilt all functions of linked list
using namespace std;
                                // implementation using vector
// class stack{
//    vector<int> v;

// public:
//    void push(int val){
//         v.push_back(val);
//         return;
//    }

//    void pop(){
//       v.pop_back();
//       return;
//    }

//    int top(){
//     return v[v.size()-1];
//    }

//    bool empty(){
//         return v.size() == 0;
//    }

// };
// int main(){
//     stack s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);

//     while(!s.empty()){  // when stack not empty
//         cout<< s.top() << " ";
//         s.pop();
//     }
//     cout << endl;
//     return 0;
// }


                                          // implementation using Linked List
class stack{
    list<int> ll;
public:
    void push(int val){
        ll.push_front(val);
    }   
    void pop(){
        ll.pop_front();
    }
    int top(){
        return ll.front();
    }
    bool empty(){
        return ll.size()==0;
    }
};

int main(){
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    while(!s.empty()){  // when stack not empty
        cout<< s.top() << " ";
        s.pop();
    }
    cout << endl;
    return 0;
}