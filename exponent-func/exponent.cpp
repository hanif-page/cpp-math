#include <iostream>
#include <cmath>

using namespace std;

// tambahkan fungsi buat pindah" biar gampang, pake void ajaa karena bukan return

int power(int base, int power){
    int result = 1;

    for(int i = 0; i < power; i++){
        result = result * base;
    }

    return result;
}

double getSqrt(double base){
    double result;

    result = sqrt(base);

    return result;
}

void funcSqrt(){
    double baseNum;
    cout << "\nEnter the number that you want to search its square root: ";
    cin >> baseNum;

    cout << "The square root of " << baseNum << " is, = " << getSqrt(baseNum) << endl;
}

void funcExponent(){
    double baseNum;
    double powerNum;
    cout << "\nEnter the base number: ";
    cin >> baseNum;

    cout << "Enter the power number: ";
    cin >> powerNum;

    cout << "So the result of " << baseNum << "^" << powerNum << " = " << pow(baseNum, powerNum) << endl;
}


int main()
{
    int choice;
    bool loop = true;

    while (loop == true){
        cout << "\nHello, what do you want to search? (just enter the number)" << endl;
        cout << "1. Square Root" << endl << "2. Exponent" << endl << "3. Exit" << endl << "Enter just the number: ";
        cin >> choice;

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