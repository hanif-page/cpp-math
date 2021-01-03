#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num1, num2;
    char op;

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


    return 0;
}