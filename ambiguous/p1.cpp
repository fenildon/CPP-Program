#include <iostream>
using namespace std;
void sum(float);
void sum(double);
int main()
{
    sum(22.5f); // hare if we write 22.5 vallid ,,22 ambiguous,22.5f not ambigous
}
void sum(float f)
{
}
void sum(double d)
{
}
