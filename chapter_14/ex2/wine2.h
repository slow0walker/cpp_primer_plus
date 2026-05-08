#ifndef WINE2_H_
#define WINE2_H_

#include <iostream>
#include <string>
#include <valarray>

typedef std::valarray<int> ArrayInt;
typedef std::pair<ArrayInt, ArrayInt> PairArray;

class Wine : private std::string, private PairArray
{
private:
    int years;

public:
    // 默认构造
    Wine();

    // 初始化数据
    Wine(const char *l, int y,
         const int yr[],
         const int bot[]);

    // 创建空数组
    Wine(const char *l, int y);

    // 输入数据
    void GetBottles();

    // 返回酒名
    const std::string &Label() const;

    // 返回总瓶数
    int sum() const;

    // 显示
    void Show() const;
};

#endif