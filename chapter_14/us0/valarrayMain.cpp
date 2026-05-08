#include <iostream>
#include <valarray>
#include <cmath>
using namespace std;

void print(const valarray<int> &v, const string &name)
{
    cout << name << ": ";
    for (int x : v)
        cout << x << " ";
    cout << endl;
}

int main()
{
    // =========================
    // 1. 构造函数
    // =========================
    valarray<int> v1;        // 空
    valarray<int> v2(5);     // 5个0
    valarray<int> v3(10, 5); // 5个10
    int arr[] = {1, 2, 3, 4, 5};
    valarray<int> v4(arr, 5);            // 数组构造
    valarray<int> v5 = {6, 7, 8, 9, 10}; // 初始化列表

    print(v3, "v3");
    print(v4, "v4");

    // =========================
    // 2. size / resize
    // =========================
    cout << "size of v4: " << v4.size() << endl;

    v4.resize(3); // 截断
    print(v4, "v4 resized");

    // =========================
    // 3. 元素访问
    // =========================
    cout << "v5[2] = " << v5[2] << endl;

    // =========================
    // 4. 赋值
    // =========================
    v5 = 100; // 全部赋值
    print(v5, "v5 = 100");

    // =========================
    // 5. 数学运算（逐元素）
    // =========================
    valarray<int> a = {1, 2, 3};
    valarray<int> b = {4, 5, 6};

    auto c = a + b;
    print(c, "a + b");

    auto d = a * 2;
    print(d, "a * 2");

    a += 10;
    print(a, "a += 10");

    // =========================
    // 6. 数学函数
    // =========================
    valarray<double> vd = {1.0, 4.0, 9.0};
    valarray<double> vs = sqrt(vd);

    cout << "sqrt: ";
    for (double x : vs)
        cout << x << " ";
    cout << endl;

    // =========================
    // 7. sum / min / max
    // =========================
    valarray<int> v6 = {3, 1, 4, 1, 5};

    cout << "sum = " << v6.sum() << endl;
    cout << "min = " << v6.min() << endl;
    cout << "max = " << v6.max() << endl;

    // =========================
    // 8. shift（平移）
    // =========================
    valarray<int> v7 = {1, 2, 3, 4, 5};
    auto shifted = v7.shift(2); // 左移
    print(shifted, "shifted");

    // =========================
    // 9. cshift（循环平移）
    // =========================
    auto cshifted = v7.cshift(2);
    print(cshifted, "cshifted");

    // =========================
    // 10. apply（函数作用）
    // =========================
    valarray<int> v8 = {1, 2, 3};

    auto squared = v8.apply([](int x)
                            { return x * x; });
    print(squared, "apply x^2");

    // =========================
    // 11. slice（切片）
    // =========================
    valarray<int> v9 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    valarray<int> s = v9[slice(1, 4, 2)];
    print(s, "slice");

    // 修改切片
    v9[slice(0, 3, 2)] = 100;
    print(v9, "v9 after slice assign");

    // =========================
    // 12. mask_array（条件筛选）
    // =========================
    valarray<int> v10 = {1, 2, 3, 4, 5};

    valarray<bool> mask = v10 > 3;
    v10[mask] = 0;

    print(v10, "mask");

    // =========================
    // 13. indirect_array（索引访问）
    // =========================
    size_t idx[] = {0, 2, 4};
    valarray<size_t> indices(idx, 3);

    valarray<int> selected = v10[indices];
    print(selected, "indirect");

    // =========================
    // 14. swap
    // =========================
    valarray<int> x = {1, 2, 3};
    valarray<int> y = {7, 8, 9};

    x.swap(y);

    print(x, "x after swap");
    print(y, "y after swap");

    return 0;
}