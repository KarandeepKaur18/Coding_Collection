#include <iostream>
using namespace std;
int main(){
    int array[5] = {20,40,12,60,10};
    int min = array[0];
    int max = array[0];
    
    for(int i = 1; i<(sizeof(array)/sizeof(array[0])) ; i++){
        if(array[i] < min){
            min = array[i];
        };
        
        if(array[i] > max){
            max = array[i];
        }
    }
    
    cout << min <<endl;
    cout << max ;
}