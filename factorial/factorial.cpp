#include <iostream>

using namespace std;

int factorial(int number){
    int result = 1, i = 1;

    for (;i <= number; i++){
        result *= i;
    }

    return result;

}

int main()
{
    int num;

    cout << "Enter the the number that you want to find the factorial: ";
    cin >> num;

    if(num < 0){
        cout << "Error, can't solve the factorial" << endl;
    }
    else if (num == 0){
        cout << "So, " << num << "! = 1" << endl; 
    }
    else{
        cout << "So, " << num << "! = " << factorial(num) << endl;
    }

    return 0;
}