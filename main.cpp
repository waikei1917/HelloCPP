#include <iostream>

using namespace std;

void printHello();
void introFunction();
void ifStatementFunction();

int main() {
    printHello();
    introFunction();
    ifStatementFunction();
    return 0;
}

void printHello () {
    std::cout << "Hello, World" << std::endl;
    cout << "Hihi CPP" << endl;
}

void introFunction(){
    cout << "Hey, you, I'm aive! Oh, and Hello world! \n";
    cin.get(); //pause the command line
    int x;
    char letter;
    float the_float;

    int a, b, c, d;

    int theInputNumber;
    cout << "Please enter a number:";
    cin >> theInputNumber;
    cin.ignore();
    cout << "The number you enter is:" << theInputNumber<< "\n";

    int theNumberA, theNumberB;
    cout << "Please enter number A:";
    cin >> theNumberA;
    cout << "Please enter number B:";
    cin >> theNumberB;
    theNumberA = theNumberA * 6;
    theNumberB = theNumberB + 3;
    cout << "The total is:" << theNumberA+theNumberB << endl;

    cin.get();
}

void ifStatementFunction () {

}

