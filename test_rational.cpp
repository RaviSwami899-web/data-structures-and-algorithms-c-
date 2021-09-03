#include "Rational.h"
#include <iostream>

using namespace std;

int main(){
    Rational number1;
    Rational number2;
    Rational number3(number2);
    number3.setNumDen(1,4);

    number1 = number2;
    cout<<number1.getDenominator();

    number1+=number3;
    cout<<number1.getDenominator();

    number1.simplify();

    cout<<number1.getNumerator();

    return 0;

}
