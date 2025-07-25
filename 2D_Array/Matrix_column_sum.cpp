#include <iostream>
using namespace std;
int main() {
    int N, M;
    cin >> N >> M;
    
    int arr[N][M];
    for(int i=0;i<N;i++){
      for(int j=0;j<M;j++){
        cin>> arr[i][j];
      }
    };	// Writing output to STDOUT
    
    int sum=0;
    for(int i =0;i<M;i++){
      for(int j = 0; j<N;j++){
        if(i==0 || i == (M-1)){
          sum+=arr[j][i];
        }else{
          break;
        }
      }
    }
    
    cout << sum;
}