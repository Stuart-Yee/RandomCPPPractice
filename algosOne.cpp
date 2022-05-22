#include <iostream>
#include <cmath>

using namespace std;

// 13 basic algorithms in C++

void oneTo255();
void sum255();
void arrayMax(int arr[], int size);
int * arrayOdds();

int main() {
    // oneTo255();
    // sum255();
    int myArr[] = {1, 3, 8, 5, 6, 10, 32, 100};
    cout << "I'm going to commit a new change" << endl;
    // arrayMax(myArr, sizeof(myArr)/sizeof(myArr[0]));
    int * newArr;
    newArr = arrayOdds();
    int length = sizeof(newArr)/sizeof(newArr[0]);
    cout << newArr[5] << endl;
    return 0;
}

void oneTo255 (){
    for(int i = 1; i <= 255; i ++){
        cout << i << endl; 
    }
}

void sum255(){
    int total = 0;
    for(int i = 0; i<=255; i++){
        total += i;
        cout << "This integer: " << i << " Current Total: " << total << endl;
    }
}

void arrayMax(int arr[], int size){ //size of an array is lost when passed as an argument
    int max = arr[0];
    cout << size << endl;
    for (int i = 1; i < size; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    cout << max << endl;
} 

int * arrayOdds() {
    static int newArr[lround(255/2)+1];
    int ind = 0;
    for (int i = 1; i <= 255; i += 2){
        newArr[ind] = i;
        ind++;
    }
    int length = sizeof(newArr)/sizeof(newArr[0]);
    for (int i = 0; i < length; i++){
        cout << newArr[i] << " ";
    }
    return newArr;
}