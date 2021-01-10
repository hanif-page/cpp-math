#include <iostream>
#include <cmath>

using namespace std;

// Use a function for making us easier to customize or add a new features, 
// just use the void function for getting input or just printing a word, and use double or int function for calculating the answer

int power(int base, int power){
    // this function is use for calculating an exponent question
    
    // variable declaration
    int result = 1;

    // make a for loop, for calculating the exponent result
    for(int i = 0; i < power; i++){
        result = result * base;
    }

    // return the calculate result
    return result;
}

double getSqrt(double base){
    // this function is use for calculating an square root question
    // ( actually, I think this function is not too necessary, because we don't calculate anything in here. We just use the sqrt() (cmath function) for calculating the question, and then return it :) )
    
    // variable declaration
    double result;

    result = sqrt(base);

    // return the calculate result
    return result;
}

void funcSqrt(){
    // this function is use for getting the number that the user want to get its square root
    
    // variable declaration
    double baseNum;

    // getting input from the user
    cout << "\nEnter the number that you want to search its square root: ";
    // stored the number into the variable
    cin >> baseNum;

    // the answer of the question
    cout << "The square root of " << baseNum << " is, = " << getSqrt(baseNum) << endl;
}

void funcExponent(){
    // this function is use for getting the base number and the power number of an exponent, from the user

    // variable declaration
    double baseNum;
    double powerNum;

    // getting input from the user
    cout << "\nEnter the base number: ";
    // stored the input to the baseNum variable
    cin >> baseNum;

    // getting input from the user
    cout << "Enter the power number: ";
    // stored the input to the powerNum variable 
    cin >> powerNum;

    // the answer of the question
    cout << "So the result of " << baseNum << "^" << powerNum << " = " << pow(baseNum, powerNum) << endl;
}


int main()
{
    // variable declaration
    int choice;
    bool loop = true;

    // make a while loop, for looping the choice for the user
    while (loop == true){
        cout << "\nHello, what do you want to search? (just enter the number)" << endl;
        cout << "1. Square Root" << endl << "2. Exponent" << endl << "3. Exit" << endl << "Enter just the number: ";
        cin >> choice; // stored the input to the variable

        // use if else statement for determine the situation 
        if(choice == 1){
            funcSqrt();
        }else if(choice == 2){
            funcExponent();
        }
        else if (choice == 3){
            cout << "\nThanks\n" << endl;
            loop = false;
        }else{
            cout << "\nInvalid Input\n" << endl;
            loop = false;
        }
    }

    return 0;
}