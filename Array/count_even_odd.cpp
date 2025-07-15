#include <iostream>
using namespace std;
int main(){
    int array[8] = {1,4,3,2,5,6,5,3};

    int sum_even=0;
    int sum_odd = 0;

    for(int i = 0;i<8;i++){
        if(array[i] % 2 == 0){
            sum_even = sum_even + 1;
        }else{
            sum_odd = sum_odd + 1;
        }
    }

    cout << "Sum of even numbers : " << sum_even << endl;
    cout << "Sum of odd numbers : " << sum_odd;
}
