#include <iostream>
#include <deque> //=> Double Ended Queue 
using namespace std;
int main(){
    deque<int> dq;

    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);  // 1,2,3

    dq.push_front(4);  // 4,1,2,3

    cout << dq.front() << " " << dq.back() << endl;
    while(!dq.empty()){
      cout << dq.front() << " " ;
      dq.pop_front();
    }
    cout << endl ;
}