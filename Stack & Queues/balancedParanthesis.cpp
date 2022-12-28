// balanced paranthesis
#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s)
{
    bool flag = true;
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '{' || s[i] == '[' || s[i] == '(')
            st.push(s[i]);

        /* else if (!st.empty() && s[i] == ')')
         {
             if (st.top() == '(')
                 st.pop();
             else
             {
                 flag = false;
                 return flag;
             }
         }
         else if (!st.empty() && s[i] == ']')
         {
             if (st.top() == '[')
                 st.pop();
             else
             {
                 flag = false;
                 return flag;
             }
         }
         else if (!st.empty() && s[i] == '}')
         {
             if (st.top() == '{')
                 st.pop();
             else
             {
                 flag = false;
                 return flag;
             }
         }
         else
         {
             flag = false;
             return flag;
         }*/

        else
        {
            if (st.empty())
                return false;
            char c = st.top();

            if (s[i] == ')' && c == '(' || s[i] == '}' && c == '{' || s[i] == ']' && c == '[')
            {
                st.pop();
            }
            else
                return false;
        }
    }

    if (!st.empty())
    {

        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    string s;
    getline(cin, s);
    if (isValid(s))
        cout << "Valid";
    else
        cout << "Invalid";

    return 0;
}