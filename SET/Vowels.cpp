#include <iostream>
#include <set>
using namespace std;

bool isVowel(char ch){
      static set<char> vowels = {'a','e','i','o','u','A','E','I','O','U'};
    //   static means :  declared once inside the memory 
      return vowels.count(ch) > 0;
    //   set.count -> means if character ch is in the set than tell its count .
};

int main() {
    int N , M;
    cin >> N >> M;    //Reading input from STDIN
    
    char arr[N][M];
    for(int i =0;i<N;i++){
      for(int j = 0; j<M;j++){
        cin >> arr[i][j];
      }
    }
    
    
    for(int i =0;i<N;i++){
      bool is_vowel = true;
      for(int j = 0;j<M;j++){
        if(isVowel(arr[i][j])){
          cout << "Yes"<<endl;
          is_vowel = false;
          break;
        }
      }
      
      if(is_vowel){
          cout << "No"<<endl;
      }
    }
}