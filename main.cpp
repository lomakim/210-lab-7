// COMSC-210 | Lab 7 | Loma Kim
#include <iostream>
#include <string>
using namespace std;

const int SIZE = 5;

string* reverseArray(string *arr);
// void displayArray(string *arr);

int main() {
    // Array Declaration
    string *arrNames = nullptr;
    arrNames = new string[SIZE] {"Aang", "Katara", "Sokka", "Toph", "Zuko"};

    // Call reverseArray function


    delete [] arrNames;
    return 0;
}

string* reverseArray(string *arr){
    

}

// void displayArray(string *arr){}