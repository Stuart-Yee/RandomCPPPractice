#include <iostream>

using namespace std;

// 13 basic algorithms in C++

void oneTo255();
void sum255();
void arrayMax(int arr[], int size);

int main() {
    // oneTo255();
    // sum255();
    int myArr[] = {1, 3, 8, 5, 6, 10, 32, 100};
    arrayMax(myArr, sizeof(myArr)/sizeof(myArr[0]));
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