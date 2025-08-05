#include <iostream>
using namespace std;
int main(){
    int size;
    cin >> size;
    int arr[size];
    for(int i = 0; i<size - 1; i++){
        for(int j = i+1; j<size;j++){
            int min = arr[0];
            if(arr[i] > arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }

}