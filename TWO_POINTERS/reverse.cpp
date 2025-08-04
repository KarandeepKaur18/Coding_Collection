#include <iostream>
using namespace std;
int main() {
    int n,k;
    cin >> n >> k;    //Reading input from STDIN
    int arr[n];
    for(int i =0;i<n;i++){
      cin>>arr[i];
    }
    
    int left = 0;
    int right = n-1;
    while(left<right){
      if(arr[right] == k){
        right++;
        while(left<right){
          int c = arr[left];
          arr[left] = arr[right];
          arr[right] = c;
          right--;
          left++;
        }
      }else{
        right--;
      }
    }
    
    for(int i = 0 ; i<n;i++){
      cout <<arr[i]<<" ";
    }
}