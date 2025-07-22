#include <iostream>
using namespace std;
int main(){
    int arr[4][5]={
        {0,0,3,0,4},
        {0,0,5,7,0},
        {0,0,0,0,0}
    }

    int count =0;

    for(int i = 0; i<4;i++){
        for(int j = 0;j<5;j++){
            if(arr[i][j] != 0){
                count ++;
            }
        }
    }

    int sparse_matrix[count][3];
    for(int i = 0; i<4;i++){
        for(int j = 0;j<5;j++){
            if(arr[i][j] != 0){
                sparse_matrix[i][j] = arr[i][j];
                cout << sparse_matrix[i][j];
            }
        }
    }

}