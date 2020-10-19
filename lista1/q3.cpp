//ref https://leetcode.com/problems/reverse-string/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void reverseString(vector<char> &s);

int main()
{
    vector<char> chars{'h', 'e', 'l', 'l', 'o'};
    reverseString(chars);
    for (auto c : chars)
        cout << c << " ";
}

void reverseString(vector<char> &s)
{
    for (int i = 0; i < s.size() / 2; i++)
    {
        char aux = s[i];
        s[i] = s[s.size() - i - 1];
        s[s.size() - i - 1] = aux;
    }
}