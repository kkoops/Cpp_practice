#ifndef _CAR_H_
#define _CAR_H_

class Ccar
{
private:
    int m_fuel;//燃料
    int m_migration;//移動距離
public:
    //コンストラクタ
    Ccar();
    //デストラクタ
    ~Ccar();
    //移動メソッド
    void move();
    //燃料補給メソッド
    void supply(int fuel);
};

#endif //_CAR_H_
