#include "car.h"
#include <iostream>

using namespace std;

//コンストラクタ
Ccar::Ccar() : m_fuel(0),m_migration(0)
{
    cout<<"Ccarオブジェクト生成"<<endl;
}
//デストラクタ
Ccar::~Ccar()
{
    cout<<"CCarオブジェクト破棄"<<endl;
}void Ccar::move()
{
    //燃料があるなら移動
    if(m_fuel>=0){
        m_migration++;
        m_fuel--;
    }
    cout<<"移動距離"<<m_migration<<endl;
    cout<<"燃料"<<m_fuel<<endl;
}
//燃料補給メソッド
void Ccar::supply(int fuel)
{
    if(fuel>0){
        m_fuel+=fuel;
    }
    cout<<"燃料"<<m_fuel<<endl;
}