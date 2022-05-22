#include <iostream>
using namespace std;

/***************************************\
Coding a scratch random integer generator
Using an out of bounds index in an array.
\***************************************/

int rand_int(int i);

int main(){
    for (int i = 0; i < 10; i++){
        cout << rand_int(i) << endl;
    }
    return 0;
}

int rand_int(int i){
    int arr[i] = {0};
    return arr[i+1];
}

// 5/21/22 Current iteration generates same 
// sequence of "random" integers