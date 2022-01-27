#ifndef _CALCULATION_H_
#define _CALCULATION_H_
 
#include <iostream>
#include <string>
 
using namespace std;
 
class Calculation{
private:
    int num1;
    int num2;

public:
    void setNumber1(int number_1);
    void setNumber2(int number_2);
    int getNumber1();
    int getNumber2();
    int add();
    int sub();
 };


 
#endif // _CALCULATION_H_