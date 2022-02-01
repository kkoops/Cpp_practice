#include "newcalc.h"
#include <iostream>
using namespace std;

double NewCalc::mul(){
    int result=m_number1*m_number2;
    return result;
}
double NewCalc::div(){
    int result=m_number1/m_number2;
    return result;
}