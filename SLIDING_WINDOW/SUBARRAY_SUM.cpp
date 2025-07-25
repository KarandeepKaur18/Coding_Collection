#include <iostream>
using namespace std;
int main(){
    cout << "Please enter the sum to be compared";
    int sum;
    cin >> sum;

    int Window_sum = 0;

    int arr[6];
    for(int i = 0; i<6;i++){
        cin >> arr[i];
    }

    int low = arr[0];
    int high = arr[0];

    for(int i = 0; i<6;i++){
        while(Window_sum < sum){
            Window_sum += low + high;
            if(Window_sum == sum){
                for(int i = low ; i<= high ; i++){
                    cout << arr[i] << " ";
                }
                break;
            }
            if(Window_sum < sum){
                high++;
                if(high < 6) {
                 Window_sum += arr[high];
                }
            }
            if(Window_sum > sum){
                Window_sum = Window_sum - low;
                low++;
            }
        }
    }

}