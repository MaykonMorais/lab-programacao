// references https://leetcode.com/problems/valid-parentheses/
#include <iostream>
#include <map>
#include <stack>

using namespace std;

class ValidParentheses {
public:
    static bool isValid(string& s) {

        stack <char> stack;
        map<char, char> mapping;
        
        mapping.insert(pair<char, char>(')', '('));
        mapping.insert(pair<char, char>(']', '['));
        mapping.insert(pair<char, char>('}', '{'));
        
        
        for(int i = 0; i < s.length(); i++) {
            if(mapping.count(s.at(i))) {
                
                char top;
                if(stack.empty()) {
                    top = '#';
                } else {
                    top = stack.top();
                    stack.pop();
                }
                
                if(top != mapping.find(s.at(i))->second) {
                    return false;
                }
            } else {
                stack.push(s.at(i));
            }
        
        }
        return stack.empty();
    }
};

int main() {
  string expression = "()[]{}[[]]";

  string result = ValidParentheses::isValid(expression) ? "Valid" : "Not Valid";
  cout << "The expression '" << expression << "' is: "
      << result << endl;
}