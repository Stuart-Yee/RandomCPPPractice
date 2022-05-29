#include <iostream>
#include <stdio.h>
#include <cmath>
#include <cstdlib>

using namespace std;

// 13 basic algorithms in C++

void oneTo255();
void sum255();
void arrayMax(int arr[], int size);
int * arrayOdds();
void greaterThanY(int arr[], int size, int y);
void MaxMinAvg(int arr[], int size);

int main() {
    oneTo255();
    system("pause");
    sum255();
    system("pause");
    int myArr[] = {1, 3, 8, 5, 6, 10, 32, 100};
    int myArrSize = sizeof(myArr)/sizeof(myArr[0]);
    cout << "I'm going to commit a new change" << endl;
    arrayMax(myArr, myArrSize);
    system("pause");
    int * newArr;
    newArr = arrayOdds();
    system("pause");
    int length = sizeof(newArr)/sizeof(newArr[0]);
    cout << newArr[5] << endl;
    greaterThanY(myArr, myArrSize, 9);
    system("pause");
    MaxMinAvg(myArr, myArrSize);
    system("pause");
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

void greaterThanY(int arr[], int size, int y){
    int count = 0;
    for (int i = 0; i < size; i++){
        if (arr[i] > y){
            count++;
        }
    }
    cout << "There are " << count << " values greater than " << y <<".\n";
}

void MaxMinAvg(int arr[], int size) {
    int max = arr[0];
    int min = arr[0];
    float sum = arr[0];
    float avg;

    for (int i =1; i < size; i++){
        sum += arr[i];
        if (arr[i] > max) {
            max = arr[i];
        } else if (arr[i] < min) {
            min = arr[i];
        }
    }
    avg = sum/size;
    cout << "The smallest value is " << min << endl;
    cout << "The largest value is " << max << endl;
    cout << "The average is " << avg << endl;
}