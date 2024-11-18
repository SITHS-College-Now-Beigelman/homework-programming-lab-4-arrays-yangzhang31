//Yang Zhang
//Homework 4
//11.14.2024

#include<iostream>
#include<iomanip>
#include<string>
#include<cmath>

using namespace std;

void filterEvens(int myArray[], int arraySize); //Prototype void function called filterEvens taking an array value and an array size value
void dna_to_rna (string dna); //Prototype void function called dna_to_rna taking a string called dna

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
    int cars[10] = {7, 3, 6, 0, 14, 8, 1, 2, 9, 8}; //Creates an array with 10 boxes, each box is pre filled based on the requiements 
    int totalCars = 0; //The total number of cars sold is set to 0 so that math can be done on it
    int maxCars = 0; //The cars sold by the best sales man, its set to 0 so math can be done on it
    int bestSalesMan; //The best sales man by number of cars sold. Its not set to 0 because its going be set to a number.

    for (int i = 0; i < 10; i++) { //For loops that loops 10 times for each array box
        totalCars = totalCars + cars[i]; //The total cars is equal to the total cars plus one, each time the loops runs it increments it by the number of cars sold in that box
        if (cars[i] > maxCars) { //If the array box is greater then the current maxCars value
            maxCars = cars[i]; //Set the max cars value to that array box value
            bestSalesMan = i + 1; //Set the best sales man to i + 1 because i starts at 0
        }
    }
    cout << "Total of " << totalCars << " cars were sold. The best sales person was sales person #" << bestSalesMan << " with " << maxCars << " cars sold."; //Prints all of that

//Exercise Four
    cout << endl; //Seperates the terminal into readable parts
    cout << " ------------------------- Exercise Four ------------------------- " << endl;
    string dna; //Creates a string variable named dna 

    cin.ignore(); //Tells the get line function to ignore the empty space before the input area.
    cout << " Input a DNA string: "; //Prompts user for a DNA string
    getline(cin, dna); //Gets the whole line instead of only one section of the line. Then inputs it into the string dna

    dna_to_rna(dna); //Calls of the function giving it the variable dna
    
    return 0;
}

void filterEvens(int myArray[], int arraySize) { 
    cout << "The even numbers in that set of numbers are "; //prints some extra flare
    for (int i = 0; i < arraySize; i++) { //For loop to check each variable
        if (myArray[i] % 2 == 0) //If the corresponding array is divisalbe by two, if the remainder is 0 then its even.
            cout << myArray[i] << " "; //Prints the even number
    }
}

void dna_to_rna (string dna) {
    int stringLength = dna.length(); //The length of the string is found using dna.length() function
    cout << " RNA protien is "; //Outputs the starter statement
    for (int i = 0; i < stringLength; i++) { //Loops for however long the string is
        if (dna[i] == 'A')  //If it is A then 
            cout << "U"; //Print a U
        else if (dna[i] == 'C') //If it is a C then
            cout << "G"; //Print a G
        else if (dna[i] == 'G') //If it is a G then
            cout << "C"; //Print a C
        else if (dna[i] == 'T') //If it is a T then
            cout << "A"; //Print an A
    }
    //Instructions didn't specify if the function should create a string then print, or print each character.
}

/*

 ------------------------- Exercise One ------------------------- 
Please input an integer value (x1): 1
Please input an integer value (x2): 2
Please input an integer value (x3): 3
Please input an integer value (x4): 4
Please input an integer value (x5): 5
Please input an integer value (x6): 6
Please input an integer value (x7): 7
Please input an integer value (x8): 8
The even numbers in that set of numbers are 2 4 6 8 
 ------------------------- Exercise Two ------------------------- 
Total of 58 cars were sold. The best sales person was sales person #5 with 14 cars sold.
 ------------------------- Exercise Four ------------------------- 
 Input a DNA string: ACG TGCA
 RNA protien is UGCACGU
*/