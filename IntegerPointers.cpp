#include <iostream>
using namespace std;

//main
int main() {

    //variables
    int num1;
    int num2;
    int num3;
    
    //user input
    cout << "Enter three numbers followed by a space: ";
    cin >> num1 >> num2 >> num3;
    
    //pointer to num(s)
    int *pNum1 = &num1;
    int *pNum2 = &num3;
    int *pNum3 = &num3;

    //output of variables and pointers
    cout << "Number: " << num1 << " | Address: "<< pNum1 << '\n';
    cout << "Number: " << num2 << " | Address: "<< pNum2 << '\n';
    cout << "Number: " << num3 << " | Address: "<< pNum3 << '\n';
return 0;
}