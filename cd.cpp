#include <iostream>
#include <cctype>
#include <string>
#include <algorithm>

using namespace std;
void checkInput(string inpval){
    if (all_of(inpval.begin(),inpval.end(), ::isdigit)){
       cout << "Input is an Integer." << endl;
    }
    else if (inpval.find('.') != string::npos &&
         all_of(inpval.begin(), inpval.end(), [](char c) { 
            return isdigit(c) || c == '.'; 
            }) &&
         count(inpval.begin(), inpval.end(), '.') == 1) {
    cout << "Input is a Floating Point Number." << endl;
}
 else if (inpval.length() == 1) {
        char ch = inpval[0];
        // Check if character is lowercase
        if (islower(ch)) {
            cout << "Input is a Lowercase Letter." << endl;
        }
        // Check if character is uppercase
        else if (isupper(ch)) {
            cout << "Input is an Uppercase Letter." << endl;
        }
        // Check if the character is a special symbol
        else if (ispunct(ch)) {
            cout << "Input is a Special Character." << endl;
        }
    }
    // Check if input is an arithmetic operator
    else if (inpval == "+" || inpval == "-" || inpval == "*" || inpval == "/" || inpval == "%") {
        cout << "Input is an Arithmetic Operator." << endl;
    }
    // Check if input is a relational operator
    else if (inpval == "<" || inpval == ">" || inpval == "=") {
        cout << "Input is a Relational Operator." << endl;
    }
    // Default case
    else {
        cout << "This is for next Lab." << endl;
    }
}

// Main function
int main() {
    string inpval;
    cout << "Enter a value: ";
    cin >> inpval;
    checkInput(inpval);
    return 0;
}

