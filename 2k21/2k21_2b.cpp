#include <bits/stdc++.h>
using namespace std;
template <class P = string, class Q = float>
class Result
{
    P course_code;
    Q course_outcome;

public:
    Result(P a, Q b) : course_code(a), course_outcome(b) {}
    Result() : course_code(P()), course_outcome(Q()) {}
    void display()
    {
        cout << course_code << " " << course_outcome << endl;
    }
};
int main()
{
    Result<> r1;
    Result<string, int> r2("CSE1205", 85);
    Result<string, string> r3("CSE1203", "A+");

    r1.display();
    r2.display();
    r3.display();

    return 0;
}
