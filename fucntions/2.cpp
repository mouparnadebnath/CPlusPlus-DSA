// find if given numbers are pythogorian triplet or not
#include <iostream>
using namespace std;
bool istriplet(int a, int b, int c)
{
    int x = max(a, max(b, c)) ;int y;
    int z;
    if (x == a)
    {
        y = b;
        z = c;
    }
    else if (x == b)
    {
        y = a;
        z = c;
    }
    else
    {
        y = a;
        z = b;
    }
    if (x * x == y * y + z * z)
        return true;
    return false;
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (istriplet(a, b, c) == true)
    {
        cout << "its pythogorian number";
    }
    else
        cout << "its not";
}