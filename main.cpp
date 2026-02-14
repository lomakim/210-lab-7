// COMSC-210 | Lab 7 | Loma Kim
#include <iostream>
#include <string>
using namespace std;


// Const Declaration
const int SIZE = 5;


//Function Prototypes
void reverseArray(string *arr);
void displayArray(string *arr);

int main() {
    // Declarations
    string *arrNames = nullptr;
    arrNames = new string[SIZE] {"Aang", "Katara", "Sokka", "Toph", "Zuko"};

    // Output original array
    cout << "\tOriginal array: ";
    displayArray(arrNames);

    // Call reverseArray function
    reverseArray(arrNames);


    // Output reversed array
    cout << "\tReversed array: ";
    displayArray(arrNames);


    delete [] arrNames;
    return 0;
}


// Function Definitions
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

void displayArray(string *arr){
    for (int i = 0; i < SIZE; i++)
        cout << *(arr + i) << " ";
    
    cout << endl;
}