#include <iostream>

using namespace std;

//Age calculator but using terniary operator.

int main() {
    int age1;
    cout << "Enter age of person 1: ";
    cin >> age1;
    int age2;
    cout << "Enter age of person 2: ";
    cin >> age2;
    
    cout << (age1 < age2 ? "P2 is older\n" : "P1 is older\n");
    
    // This is a terniary expression meaning the [?] symbol. before this it checks condition like a mini If-Else statement.
    // And after the [?] symbol is the return value statement(if true print this)
    // And after the [:] symbol is the Else statement.    
    return 0;
}
