#include <iostream>
using namespace std;

int maximum_num(){
    int array[7] = {23, 34, 12, 56, 78, 12, 10};
    int max = array[0];

    for(int i = 1; i<7 ; i++){
        if(array[i] > max){
            max = array[i];
        }
    }

    return max;

}

int main(){
   int maximum = maximum_num();
   cout << maximum;
}