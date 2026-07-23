#include <iostream>
#include <vector>
using namespace std;
int main(){

                                        // in this question we have return the index of starting station for completion of circuit
    vector<int> gas = {5,1,2,3,4};
    vector<int> cost = {4,4,1,5,1};

    int totalGas = 0 , totalCost = 0;
    for(int val : gas){
        totalGas += val;
    }
    for(int val : cost){
        totalCost += val;
    }

    if(totalGas < totalCost){
        cout <<  -1;
        return 0;
    }
    int currGas = 0 , start =0 ;
    for(int i = 0 ; i < gas.size() ; i++){
        currGas += gas[i] - cost[i];
        if(currGas < 0 ){
            start=i+1;
            currGas = 0;
        }
    }
    cout << start;
    return  0; 
}