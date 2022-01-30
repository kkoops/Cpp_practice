#ifndef _VECTOR2D_H_
#define _VECTOR2D_H_

class Vector2D
{
protected:
    void init();
public:
    Vector2D();
    //~Vector2D();
    void setValue(int x,int y);
    int getX();
    int getY();
protected:
    int m_x;
    int m_y;
};

#endif // _VECTOR2D_H_
