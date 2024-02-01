#include <iostream>
using namespace std;
class family
{
    int cash, gold;

public:
    family();
    family(int = 10, int = 20); // in this case ambigious genrated compiler unable to decided which one take as defult construcotr
    // but error is depent upon main fn object creation
    void get_data();
};
family::family()
{
    cout << "enter cash and gold in def constructor" << endl;
    cin >> cash >> gold;
}
family::family(int a, int b)
{
    cash = a, gold = b;
}
void family::get_data()
{
    cout << cash << " " << gold << endl;
}
int main()
{
    family f1;
    f1.get_data();
}
