#include <iostream>
using namespace std;

//main
int main() {

    //variables
    int *num1 = new int;
    int *num2 = new int;
    int *num3 = new int;
    
    //user input
    cout << "Enter three numbers followed by a space: ";
    cin >> *num1 >> *num2 >> *num3;

    //output of variables and pointers
    cout << "\n-Values entered-\n";
    cout << "Number: " << *num1 << " | Address: "<< num1 << '\n';
    cout << "Number: " << *num2 << " | Address: "<< num2 << '\n';
    cout << "Number: " << *num3 << " | Address: "<< num3 << '\n';

    //clean memory
    delete num1;
    delete num2;
    delete num3;
    
return 0;
}