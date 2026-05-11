#include <iostream>
#include <vector>
using namespace std;
int partition(vector<int>& arr, int st ,int end){
    int pivot = arr[end];
    int idx = -1;
    for(int j=0 ; j<end ; j++){
        if(arr[j] <= pivot){     // for desecending order >=
            idx++;
            swap(arr[j] , arr[idx]);
        }
    }

    //placing pivot at right position
    idx++;
    swap(arr[idx] , arr[end]);
    return idx;
}

void quickSort( vector<int>& arr , int st ,int end){
  if(st<end){
    int pivIdx = partition(arr, st, end);

    quickSort(arr , st , pivIdx-1);   // left part
    quickSort(arr , pivIdx +1 , end); //right part
  }
}

int main(){
    vector<int> arr = {5,2,4,1,6,3};
    quickSort(arr , 0 , arr.size() - 1);

    for(int val : arr){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}