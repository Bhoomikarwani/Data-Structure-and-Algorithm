#include<iostream>
#include<vector>
#include<list>
using namespace std;

//same as vector but


//list is like a doubly linked list , we can push elements in list from ending as well as from starting

int main(){
  list<int> l={1,2,3};   
  l.emplace_back(1);
  l.push_back(2);
  l.push_front(3);
  for(int val: l){
    cout<< val;
  }
  cout<< endl;
  l.pop_back();
  l.pop_front();

  for(int val: l){
    cout<< val;
  }

}