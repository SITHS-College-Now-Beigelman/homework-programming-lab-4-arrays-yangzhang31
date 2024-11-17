//Yang Zhang
//Homework 4
//11.14.2024

#include<iostream>
#include<iomanip>
#include<string>
#include<cmath>

using namespace std;

void filterEvens(int myArray[], int arraySize); //Prototype void function called filterEvens taking an array value and an array size value
void dna_to_rna (string dna); 

int main() {
//Exercise One
    cout << endl; //Seperates the terminal into readable parts
    cout << " ------------------------- Exercise One ------------------------- " << endl;
    int myArray[8]; //Declares the array with 8 boxes

    for (int i = 0; i < 8; i++) { //For loot using i 
        cout << "Please input an integer value (x" << (i + 1) << "): "; //Prompts user with a counter. Its i + 1 because i starts at 0
        cin >> myArray[i]; //Inputs the value into the corresponding array box
    }
    filterEvens(myArray, 8); //Calls on the function 

//Exercise Two
    cout << endl; //Seperates the terminal into readable parts
    cout << " ------------------------- Exercise Two ------------------------- " << endl;
    int cars[10] = {7, 3, 6, 0, 14, 8, 1, 2, 9, 8};
    int totalCars = 0;
    int maxCars = 0;
    int bestSalesMan;

    for (int i = 0; i < 10; i++) {
        totalCars = totalCars + cars[i];
        if (cars[i] > maxCars) {
            maxCars = cars[i];
            bestSalesMan = i + 1;
        }
    }
    cout << "Total of " << totalCars << " cars were sold. The best sales person was sales person #" << bestSalesMan << " with " << maxCars << " cars sold.";

//Exercise Four
    cout << endl; //Seperates the terminal into readable parts
    cout << " ------------------------- Exercise Four ------------------------- " << endl;

    return 0;
}

void filterEvens(int myArray[], int arraySize) { 
    cout << "The even numbers in that set of numbers are "; //prints some extra flare
    for (int i = 0; i < arraySize; i++) { //For loop to check each variable
        if (myArray[i] % 2 == 0) //If the corresponding array is divisalbe by two, if the remainder is 0 then its even.
            cout << myArray[i] << " "; //Prints the even number
    }
}