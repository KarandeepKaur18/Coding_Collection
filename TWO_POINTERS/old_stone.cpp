#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;    //Reading input from STDIN
    while(t--){
      int nb;
      cin>>nb;
      int arr[nb];
      for(int i =0;i<nb;i++){
        cin>>arr[i];
      }

      int *l = arr;
      int *r = arr+(nb-1);
      int sum_l = *l;
      int sum_r = *r;
      int max_sum=0;
      bool is = true;
      while(l<r){
        if(sum_r == sum_l){
          max_sum = sum_r;
          l++;
          sum_l+=*l;
        }else if(sum_l < sum_r){
          l++;
          sum_l+= *l;
        }else{
          r--;
          sum_r+=*r;
        }
        
      }
      
      cout << max_sum<<endl;
      
      
      
    }	// Writing output to STDOUT
}