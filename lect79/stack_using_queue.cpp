#include <iostream>
#include <queue>
using namespace std;  
                                 // Implementation of stack using queue
class MyStack {
public:
    queue<int> q1;
    queue<int> q2;
    
    MyStack() {
        
    }
    
    void push(int x) {
        while(!q1.empty()){     // copy elements of q1 in q2
            q2.push(q1.front());
            q1.pop();
        }

        // push x in q1
        q1.push(x);

        // copy elements of q2 in q1
        while(!q2.empty()){     
            q1.push(q2.front());
            q2.pop();
        }
    }
    
    int pop() {
        int ans = q1.front();
        q1.pop();
        return ans;
    }
    
    int top() {
          return q1.front();
    }
    
    bool empty() {
        return q1.empty();
    }
};

int main(){
     MyStack s;
     s.push(1);
     s.push(2);
     s.push(3);

     while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
     }

     cout << endl;
}