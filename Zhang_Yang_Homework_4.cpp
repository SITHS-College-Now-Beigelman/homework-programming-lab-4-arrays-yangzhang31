//Yang Zhang
//Homework 4
//11.14.2024

#include<iostream>
#include<iomanip>
#include<string>
#include<cmath>

using namespace std;

void filterEvens(int myArray[], int arraySize); //Prototype void function called filterEvens taking an array value and an array size value

int main() {
//Exercise One
    cout << endl; //Seperates the terminal into readable parts
    int myArray[8]; //Declares the array with 8 boxes

    for (int i = 0; i < 8; i++) { //For loot using i 
        cout << "Please input an integer value (x" << (i + 1) << "): "; //Prompts user with a counter. Its i + 1 because i starts at 0
        cin >> myArray[i]; //Inputs the value into the corresponding array box
    }
    filterEvens(myArray, 8); //Calls on the function 

    return 0;
}

void filterEvens(int myArray[], int arraySize) { 
    cout << "The even numbers in that set of numbers are "; //prints some extra flare
    for (int i = 0; i < arraySize; i++) { //For loop to check each variable
        if (myArray[i] % 2 == 0) //If the corresponding array is divisalbe by two, if the remainder is 0 then its even.
            cout << myArray[i] << " "; //Prints the even number
    }
}