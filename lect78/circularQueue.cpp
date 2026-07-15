#include <iostream>
using namespace std;
class circularQueue{
    int* arr;
    int f,r;   // f-> front , r ->rear
    int cap,currSize ; // cap -> size of array

  public:
    circularQueue(int size){
        arr = new int[size];   // dynamic array
        f = 0 ;
        r = -1; 
        cap = size;
        currSize = 0 ;
    }
    void push(int data){
        if(currSize == cap){
            cout << "circular queue is full";
        }
        r = (r+1) % cap;
        arr[r] = data;
        currSize++;
    }
    void pop(){
       if(empty()){
        cout << "CQ is already empty";
        return;
       }

       f = (f+1) % cap;
       currSize-- ;
    }
    int front(){
        if(empty()){
            cout << "CQ is already empty";
            return -1;
        }
        return arr[f];
    }
    bool empty(){
        return currSize == 0;
    }
     
    void print(){
        for(int i=0 ; i<cap ; i++){
            cout<< arr[i] << " ";
        }
        cout << endl ;
        return;
    }

};
int main(){
    circularQueue cq(3);

    cq.push(1);
    cq.push(2);
    cq.push(3);

    cq.print();  // 1 2 3
    cq.pop();
    cq.push(4);

    while(!cq.empty()){
        cout << cq.front() << " ";  // 2 3 4
        cq.pop();
    }
    cout << endl;
}