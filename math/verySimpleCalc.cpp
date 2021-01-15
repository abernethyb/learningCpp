#include <iostream>
using namespace std;

int main()
{
    int input, secondInput;
    int sum;
    cout << "Let's add two numbers!" << endl;
    cout << "enter a number: " << endl;
    cin >> input;
    cout << "you entered: " << input << endl;
    cout << "enter another number: " << endl;
    cin >> secondInput;
    cout << "you entered: " << secondInput << endl;
    sum = input + secondInput;
    cout << input << " + " << secondInput << " is: " << sum << endl;
}
