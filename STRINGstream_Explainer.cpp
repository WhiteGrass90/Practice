#include <iostream>
#include <sstream>
using namespace std;
//use stringstream to convert int to string.
/*int main() {
    int num = 54;
    stringstream ss;
    ss << num;
    :string str = ss.str();
    std::cout << "String. " << str << std::endl;
}

*/

//use string stream to split a string.
/*
int main () {
    string data = "Apple banana mango";
    stringstream ss(data);
    string word;

    while (ss >> word) {
        cout << word << endl;
    }
}

*/


//Multiple types from one string.

int main() {
    string input = "25 Arga";
    stringstream ss(input);   //This makes a stringstream object with the command and ss.

    int age;                  //Defining age variable as int.
    string name;              //Defining name variable as String.
    ss >> age >> name;        //By using the ss command it takes 1st word as int and 2nd word as String.
                              //Therefore we get different types from 1 string.
    cout << "age: " << age << ", Name: " << name << endl;
}


//Some use cases
//Parsing user input, Debugging, Converting string to int (vice versa)
// Alternatives Manual Parsing, cout, printf, stoi, to_string
//Why use it? => It gives more control, is cleaner, useful for building formatted strings.


