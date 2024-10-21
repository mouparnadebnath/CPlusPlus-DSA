#include <iostream>
#include <stack>
using namespace std;

bool parentheses(string s)
{
    stack<char> c;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if (ch == '(' || ch == '{' || ch == '[')
        {
            c.push(ch);
        }
        else
        {
            // closing bracket
            if (!c.empty())
            {
                char top = c.top();
                if ((ch == ')' && top == '(') ||
                    (ch == '}' && top == '{') ||
                    (ch == ']' && top == '['))
                {
                    c.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }
    if (c.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string s;
    cin >> s;
    cout << parentheses(s) << endl;
    return 0;
}