#include "car.h"
#include <iostream>

using namespace std;

int main(){
    Ccar* pC=0;
    pC=new Ccar();
    pC->supply(10);
    pC->move();
    pC->move();
    delete pC;
    cout<<"インスタンスの消去終了"<<endl;
    return 0;
}