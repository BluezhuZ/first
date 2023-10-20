/***********************************************************\
  Filename:   Lab01A_arithmetic_CQU20220149
  Name:       Zheyang Zhu
  UCID|CQU#:  20220149
  About:      A program that gets two integer-type values from the user and prints the sum, difference, product, quotient, and modulo.
\***********************************************************/

#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout<<setprecision(1)<<setfill(' ')<<fixed;
    int A;
    int B;
    cout << "Enter A: ";
    cin >> A;
    cout << "Enter B: ";
    cin >> B;
    cout << endl << "A+B =" <<setw(5) << A+B<< endl;
    cout << "A-B =" <<setw(5) << A-B<< endl;
    cout << "A*B =" <<setw(5) << A*B<< endl;
    cout << "A/B =" <<setw(5) << A/B<< endl;
    cout << "A%B =" <<setw(5) << A%B<< endl;

    return 0;
}