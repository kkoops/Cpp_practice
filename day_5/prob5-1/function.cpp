#include "function.h"
#include <iostream>

using namespace std;

int Function::max(int n1,int n2){
    int maxnum=0;
    if(n1>=n2){
        maxnum=n1;
    }
    else{
        maxnum=n2;
    }
    return maxnum;
}
int Function::min(int n1,int n2){
    return -max(-n1,-n2);
}