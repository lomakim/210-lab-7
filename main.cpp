// COMSC-210 | Lab 7 | Loma Kim
#include <iostream>
#include <string>
using namespace std;

const int SIZE = 5;

void reverseArray(string *arr);
// void displayArray(string *arr);

int main() {
    // Array Declaration
    string *arrNames = nullptr;
    arrNames = new string[SIZE] {"Aang", "Katara", "Sokka", "Toph", "Zuko"};

    // Call reverseArray function


    delete [] arrNames;
    return 0;
}

void reverseArray(string *arr){
    string temp;
    int f = 0, l = SIZE - 1;
    
    while (f < l){
        temp = *(arr + f);
        *(arr + f) = *(arr + l);
        *(arr + l) = temp;
        f++;
        l--;
    }

}

// void displayArray(string *arr){}