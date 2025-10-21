#include <iostream>
using namespace std;

int main() {
    //TODO: Create int var and cout and cin commands
    int input;

    cout << "Input a number: ";

    cin >> input;


    // TODO: Write a for loop that runs from 1 to limit

    for (int num = 1; num <= input; num++) {
        // TODO: Use if/else statements to apply FizzBuzz logic
        if(num % 3 == 0 && num % 5 == 0) {
            cout << "FizzBuzz" << endl;
        } else if (num % 3 == 0) {
            cout << "Fizz" << endl;
        } else if (num % 5 == 0) {
            cout << "Buzz" << endl;
        } else {
            cout << num << endl;
        }
        
    }
        
    return 0;
}
