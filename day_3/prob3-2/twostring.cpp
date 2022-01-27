#include<iostream>
#include<string>
#include"twostrings.h"

void TwoStrings::setString1(string s){
    m_string1=s;
}
void TwoStrings::setString2(string s){
    m_string2=s;
}
string TwoStrings::getString1(){
    return m_string1;
}
string TwoStrings::getString2(){
    return m_string2;
}
string TwoStrings::getConnectedString(){
    string m_1=m_string1;
    string m_2=m_string2;
    return (m_1.append(m_2));
}
int TwoStrings::getConnectedLength(){
    string m_1=m_string1;
    string m_2=m_string2;
    return m_1.append(m_2).length();
}