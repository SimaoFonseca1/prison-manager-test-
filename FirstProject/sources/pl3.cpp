//
// Created by uni on 23/03/22.
//

#include <iostream>
#include "pl3.h"
using namespace std;
void printArray(int *arr, int n){
    for(int* ptr = arr; ptr < arr + n; ptr++){
        cout << (long) ptr - (long) arr<< ": " << *ptr << endl;
    }
}
int getPositiveNumber(){
    int value = 0;
    do{
        cout<<"Enter a positive number:";
        cin >> value;
    }while(value < 0);
    return value;
}
void fillInArray(int *arr, int n){
    for(int* ptr = arr; ptr < arr + n; ptr++){
        *ptr = getPositiveNumber();
    }
}
