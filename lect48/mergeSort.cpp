#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int>& arr , int st , int end , int mid){
    int i=st , j=mid+1;
    vector<int> temp;

    while(i<=mid && j<=end){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
            j++; 
    }
    // copy temp in original arr
    for(int i=0 ; i<temp.size() ; i++){
        arr[i+st]=temp[i];
    }
}
void mergeSort(vector<int>& arr , int st , int end){
    if (st < end)
    {
        int mid = st + (end - st) / 2;
        // left half
        mergeSort(arr, st, mid);
        // rigth half
        mergeSort(arr, mid + 1, end);
         
        merge(arr,st,end,mid);
    }
}
int main(){
    vector<int> arr = {12, 31, 35, 8, 32, 17};
    mergeSort(arr , 0 , arr.size()-1);
    for(int val : arr){
        cout << val << " ";
    }
    cout<< endl;
    return 0 ;
}