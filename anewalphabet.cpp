#include <iostream>
using namespace std;

string parse(char c)
{
    switch (tolower(c))
    {
    case 'a':
        return "@";
    case 'b':
        return "8";
    case 'c':
        return "(";
    case 'd':
        return "|)";
    case 'e':
        return "3";
    case 'f':
        return "#";
    case 'g':
        return "6";
    case 'h':
        return "[-]";
    case 'i':
        return "|";
    case 'j':
        return "_|";
    case 'k':
        return "|<";
    case 'l':
        return "1";
    case 'm':
        return "[]\\/[]";
    case 'n':
        return "[]\\[]";
    case 'o':
        return "0";
    case 'p':
        return "|D";
    case 'q':
        return "(,)";
    case 'r':
        return "|Z";
    case 's':
        return "$";
    case 't':
        return "\'][\'";
    case 'u':
        return "|_|";
    case 'v':
        return "\\/";
    case 'w':
        return "\\/\\/";
    case 'x':
        return "}{";
    case 'y':
        return "`/";
    case 'z':
        return "2";
    default:
        return string(1, c);
    }
}

int main()
{
    string s;
    getline(cin, s);

    for (int i = 0; i < s.size(); i++)
    {
        cout << parse(s[i]);
    }

    return 0;
}