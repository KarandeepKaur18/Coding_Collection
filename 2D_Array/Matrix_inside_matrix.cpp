#include <iostream>
using namespace std;
int main() {
    int N,M;
    cin >> N>>M;    //Reading input from STDIN
    int arr[1][N][M];// Writing output to STDOUT
    for(int k = 0;k<1;k++){
      for(int i = 0; i<N;i++){
        for(int j =0;j<M;j++){
          cin >> arr[k][i][j];
        }
      }
    }
    
    int count = 0;
    int count_prime  = 0;
    for (int k = 0; k < 1; k++) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
              count = 0;
                for(int p =1;p<=arr[k][i][j];p++){
                  if(p > arr[k][i][j]){
                    break;
                  }
                  if(arr[k][i][j] % p == 0){
                    count++;
                    if(count > 2){
                      count = 0;
                      break;
                    }
                  }
                  
                }
                
                if(count == 2){
                      count_prime++;
                    
                }
                
            }
        }
        
    }
    cout << count_prime;
}