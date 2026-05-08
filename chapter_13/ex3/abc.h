#ifndef ABC_H
#define ABC_H

class ABC
{
public:
    virtual void View() const = 0; // 纯虚函数
    virtual ~ABC() {}              // 虚析构（必须）
};

#endif