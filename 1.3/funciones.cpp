#include <iostream>
#include <string.h>
using namespace std;

// Prints an array separated by spaces in the terminal
template <class T>
void printArray(T arr[], int size){   
    int i = 0;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Inputs a value
template <class T>
T input(string textoPrevio){
    cout << textoPrevio;
    T resultado;
    cin >> resultado;
    return resultado;
}



//	int* ptr; //pointer to hold address
//	ptr = input("textoprevio: ",7); //address 

int* input(string textoPrevio, int nvalues){ //return type- address of integer array

    cout << textoPrevio;

	static int a[100]; //array declared as static. Max 100 values
	for(int i = 0; i<nvalues; i++){
        int num;
        cin >> num;
		a[i] = num; //array initialisation
	}

	return a; //address of a returned
}



// Display a value in the terminal
void print(string thisIsAString){
    cout << thisIsAString << endl;
}

// Checks if a string is a month
int getMonthAsNumber(string value){
    if(value == "Jan") return 0;
    if(value == "Feb") return 1;
    if(value == "Mar") return 2;
    if(value == "Apr") return 3;
    if(value == "May") return 4;
    if(value == "Jun") return 5;
    if(value == "Jul") return 6;
    if(value == "Aug") return 7;
    if(value == "Sep") return 8;
    if(value == "Oct") return 9;
    if(value == "Nov") return 10;
    if(value == "Dec") return 11;
    else return -1;
}

// Checks if a month is a string
string getNumberAsMonth(int value){
    if(value == 0) return "Jan";
    if(value == 1) return "Feb";
    if(value == 2) return "Mar";
    if(value == 3) return "Apr";
    if(value == 4) return "May";
    if(value == 5) return "Jun";
    if(value == 6) return "Jul";
    if(value == 7) return "Aug";
    if(value == 8) return "Sep";
    if(value == 9) return "Oct";
    if(value == 10) return "Nov";
    if(value == 11) return "Dec";
    else return "Na";
}
