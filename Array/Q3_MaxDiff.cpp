#include <iostream>
using namespace std;
int main(){
    cout << "Please enter the size of the array";
    int size;
    cin >> size;

    int arr[size];

    for(int i = 0; i<size ; i++){
        cin >> arr[i];
    };

    // arr = {3,4,5,6,7,8};

    // max diff means biggest - smallest ;

    int min = arr[0];
    int max = arr[0];
    
    for(int i = 1; i<(sizeof(arr)/sizeof(arr[0])) ; i++){
        if(arr[i] < min){
            min = arr[i];
        };
        
        if(arr[i] > max){
            max = arr[i];
        }
    }

    int max_diff = max - min;
    cout << "Maximum differnce is : " << max_diff;
}