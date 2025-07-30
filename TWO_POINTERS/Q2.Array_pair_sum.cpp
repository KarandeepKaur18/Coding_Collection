// here we used simple pointer approach , and without storing address in pointer .
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int size;
    int sum = 0;
    cin >> size;    //Reading input from STDIN
    int arr[size];
    for(int i =0;i<size;i++){
      cin>>arr[i];
    }// Writing output to STDOUT
    
    int left = arr[0];
    int right = arr[size-1];
    int f_size = static_cast<int>(ceil(size/2));
    int f_arr[f_size];
    for(int i = 0; i<f_size;i++){
      sum = 0;
      sum = left + right;
      f_arr[i] = sum;
      if(size%2==0){
        left = arr[i+1];
        right = arr[(size-1)-(i+1)];
      }else{
        if(i==f_size-1){
          left = arr[i+1];
        }
      }
    }
    
    
    for(int i = 0; i<f_size;i++){
      cout << f_arr[i] << " ";
    }
}