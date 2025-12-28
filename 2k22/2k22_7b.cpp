#include <bits/stdc++.h>
using namespace std;
template <class Id, class T>
class Product
{
    Id product_id;
    T product_price;

public:
    Product(Id id, T p) : product_id(id), product_price(p) {} // param
    Product() : product_id(Id()), product_price(T()) {}       // default
    void display()
    {
        cout << product_id << " " << product_price << endl;
    }
};
int main()
{
    Product<string, float> p1;
    p1.display();
    Product<string, float> p2("abc", 101);
    p2.display();
    Product<int, float> p3(123, 101);
    p3.display();

    return 0;
}
