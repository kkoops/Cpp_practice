#include<iostream>
#include<string>
#include"calculation.h"


void Calculation::setNumber1(int number_1){
    num1=number_1;
}
void Calculation::setNumber2(int number_2){
    num2=number_2;
}
int Calculation::getNumber1(){
    return num1;
}
int Calculation::getNumber2(){
    return num2;
}
int Calculation::add(){
    return num1+num2;
}
int Calculation::sub(){
    return num1-num2;
}
