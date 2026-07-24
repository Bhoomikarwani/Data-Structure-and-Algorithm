#include <iostream>
using namespace std;
class Node{
    int data;
    Node* left;
    Node* rigth;

    Node(int val){
       data = val;
       left = rigth = NULL ; 
    }
};
int main(){
    return 0;
}