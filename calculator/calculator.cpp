#include <iostream>
#include <cmath>

using namespace std;

double factorial(double num){
    double result = 1;

    for(int i = 1; i <= num; i++){
        result = result * i;
    }
    
    return result;
}

int main()
{
    int num1, num2;
    char op;


    cout << "(If you want to search a factorial, just enter the operator with exclamation mark, and enter the second number with 0" << endl << endl;
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter the operator: ";
    cin >> op;

    cout << "Enter the second number: ";
    cin >> num2;

    if(op == '+'){
        cout << num1 << " " << op << " " << num2 << " = " << num1 + num2 << endl;
    }
    else if (op == '-'){
        cout << num1 << " " << op << " " << num2 << " = " << num1 - num2 << endl;
    }
    else if(op == '*'){
        cout << num1 << " " << op << " " << num2 << " = " << num1 * num2 << endl;
    }
    else if (op == '/'){
        cout << num1 << " " << op << " " << num2 << " = " << num1 / num2 << endl;
    }
    else if (op == '^'){
        cout << num1 << " " << op << " " << num2 << " = " << pow(num1, num2) << endl;
    }
    else if (op == '%'){
        cout << num1 << " " << op << " " << num2 << " = " << num1 % num2 << endl;
    }
    else if(op == '!'){
        cout << num1 << op << " = " << factorial(num1) << endl;
    }


    return 0;
}