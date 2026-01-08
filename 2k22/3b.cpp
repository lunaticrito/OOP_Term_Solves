#include <bits/stdc++.h>
template <typename T>
T max(T a, T b){
    if(a > b) return a;
    else return b;
}
class Test{
private:
    int val;
public:
    Test(int val) : val(val) { }
    // Overload operator>
    bool operator>(const Test& other) const {
        return val > other.val;
    }
    // Overload operator<<
    friend std::ostream& operator<<(std::ostream& os, Test& t) {
        os << t.val;
        return os;
    }
};

int main()
{
    Test t1 = Test(10);
    Test t2 = Test(5);
    Test t3 = max(t1, t2);
    std::cout << t3;
    return 0;
}
