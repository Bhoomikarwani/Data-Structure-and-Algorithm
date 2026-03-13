#include <iostream>
#include <vector>
using namespace std;
int main(){
    //2d vector (dynamic , we can increase size during run time or allocate memory)

    vector<vector<int>> matrix= {{1,2,3} , {4,5,6} , {7,8,9}};

    // for(int i=0 ; i<3 ; i++){
    //    for(int j=0 ; j<3 ; j++){
    //     cout<< matrix[i][j] << " "  ;
    //    }
    //    cout << endl;
    // }


    //rows = matrix.size()            1 2 3
    //column = matrix[i].size()       4 5 6
//                                    7 8 9

    for(int i=0 ; i< matrix.size() ; i++){
       for(int j=0 ; j< matrix[i].size() ; j++){
        cout<< matrix[i][j] << " "  ;
       }
       cout << endl;
    }
}