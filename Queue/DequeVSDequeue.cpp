// Double ended queueue ,: Unlike normal queueue if we can add from front as well as from last ,we can pop from front as well as front , means from both sides we can 

// DEQUE : BOTH SIDES ACTIVE
// DEQUEUE : Pop the data from queue 

#include <iostream>
#include <deque>
using namespace std;

int main(){
    deque<int> dq;

    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);

    dq.push_front(4);
    dq.push_front(5);

    dq.pop_back();
    dq.pop_front();


}