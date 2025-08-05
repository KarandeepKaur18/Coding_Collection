// THIS is the part of sorting array , 
#include <iostream>
using namespace std;
int main(){
    int arr1[5] = {2,4,6,8,9};
    int arr2[5] = {1,3,4,7,12};

    int arr3[10];
    int *l = arr1;
    int *r = arr2;
    int *k = arr3;
    
    
    for(int i = 0; i<10;i++){
        if(*r<*l){
            arr3[i] = *r;
            r++;
            k++;
        }else{
            arr3[i] = *l;
            l++;
            k++;
        }
    }

    for(int i = 0; i< 10;i++){
        cout << arr3[i] << " ";
    }

}