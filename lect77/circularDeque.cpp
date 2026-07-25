#include <iostream>
using namespace std;
class MyCircularDeque {
public:
    int* arr;
    int f, r;
    int cap , currSize;
    MyCircularDeque(int k) {
        cap = k;
        f = 0;
        r = -1;
        arr = new int[k];
        currSize = 0;   
    }
    
    bool insertFront(int value) {
        if(currSize == cap){
            return false;
        }
        else{
            f = (f+cap-1) % cap;
            arr[f] = value;
            currSize++;
            return true;
        }
    }
    
    bool insertLast(int value) {
        if(currSize == cap){
            return false;
        }
        else{
            r = (r+1) % cap ;
            arr[r] = value;
            currSize++;
            return true;
        } 
    }
    
    bool deleteFront() {
        if(currSize == 0){
            return false;
        }
        else{
            f = (f+1) % cap;
            currSize--;
            return true;
        }    
    }
    
    bool deleteLast() {
        if(currSize == 0){
            return false;
        }
        else{
            r = (r-1+cap) % cap;
            currSize--;
            return true;
        }
    }
    
    int getFront() {
        if(currSize == 0){
            return -1;
        }
        else{
            return arr[f];
        }
    }
    
    int getRear() {
        if(currSize == 0){
            return -1;
        }
        else{
            return arr[r];
        }
    }
    
    bool isEmpty() {
        return currSize == 0;
    }
    
    bool isFull() {
        return currSize == cap;
    }
};    
int main(){

}