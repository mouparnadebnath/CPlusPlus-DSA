#include <iostream>
#include <stack>
using namespace std;

bool redundantBracket(string& str)
{
    stack<char> s;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            s.push(ch);
        }
        else
        {
            if (ch == ')')
            {
                bool isRedundant = true;

                while (s.top() != '(')
                {
                    char t = s.top();
                    if (t == '+' || t == '-' || t == '*' || t == '/')
                    {
                        isRedundant = false;
                    }
                    s.pop();
                }

                if (isRedundant == true)
                {
                    return true;
                    s.pop();
                }
            }
        }
    }
    return false;
}
int main()
{
    string str = "(a+b(()))";
    cout << redundantBracket(str);

    return 0;
}