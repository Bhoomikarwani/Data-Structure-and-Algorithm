#include <iostream>
using namespace std;

//int main(){
    // int arr[5]={1,2,3,4,5};
    // //int matrix[4][3] = { { 1,2,3}, {4,5,6} , {7,8,9} , { 10, 11, 12}};
    // int matrix[4][3];
    // int rows =4;
    // int cols =3 ;

    // for(int i=0 ; i < rows ; i++){
    //     for(int j=0 ; j < cols ; j++ ){
    //         cin >> matrix[i][j]  ;
    //     }
    // }

    // for(int i=0 ; i < rows ; i++){
    //     for(int j=0 ; j < cols ; j++ ){
    //         cout << matrix[i][j]  << " ";
    //     }
    //     cout << endl;
    // }
    // cout << endl;
    
//}    
    
// pair<int,int> LinearSearch(int key , int rows , int cols , int matrix[][3]){
//         for(int i=0 ; i < rows ; i++){
//             for(int j=0 ; j < cols ; j++){
//                if(matrix[i][j]== key){
//                    return {i,j};
//                }
//             }
//         }
//         return {-1,-1};
// }
// int main(){ 
//     int matrix[4][3] = { { 1,2,3}, {4,5,6} , {7,8,9} , { 10, 11, 12}};
//     int rows =4;
//     int cols =3 ;
//     pair<int , int> result=LinearSearch(10,  rows , cols , matrix);
//     if(result.first != -1){
//         cout << "(" << result.first << ","<< result.second<< ")" << endl;
//     }
//     else{
//         cout << "key not found";
//     }
//     //cout << LinearSearch(3,  rows , cols , matrix);
//     return 0;
// }


//maximum row sum
//1 2 3
//4 5 6
//7 8 9
int maxRowSum(int matrix[][3], int rows , int cols){
 int maxsum=0;
 for( int i=0 ; i< rows ; i++){
    int sum = 0;
    for(int j=0 ; j< cols ;j++){
        sum = sum + matrix[i][j];
    }
    // if(maxsum < sum ){
    //     maxsum = sum ;
    // }
    maxsum = max(sum , maxsum);
 }
 return maxsum;
}

int maxColSum(int matrix[][3], int rows, int cols)
{
    int maxsum = 0;
    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        for (int j = 0; j < cols; j++)
        {
            sum = sum + matrix[j][i];
        }
        // if(maxsum < sum ){
        //     maxsum = sum ;
        // }
        maxsum = max(sum, maxsum);
    }
    return maxsum;
}

//Digonal sum  (rows== column)
//  \  -> primary digonal
//   \ 

//   /  -> secondary digonal
//  /
int digonalSum(int mat[][3], int n) {//O(n)
    int sum=0;
    //pd : j=i
    //sd : j=n-i-1

    for(int i=0 ; i<n ; i++){
        sum += mat[i][i];

        if(i != n-i-1){
            sum += mat[i][n-1-i];
        }
    }
    return sum;
}

int main(){
    int matrix[3][3] = { { 1,2,3}, {4,5,6} , {7,8,9}};
    int rows =3;
    int cols =3 ;
   // cout<< "maximum row sum : "<< maxRowSum(matrix , rows , cols);
   // cout<< "maximum column sum : "<< maxColSum(matrix , rows , cols);
   cout <<digonalSum(matrix , rows);
}
