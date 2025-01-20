#include <iostream>
#include <unordered_map>
#include <string>


class Solution {
public:
    bool isValid(string s) {
        std::stack<char> stack;

        std::unordered_map<char, char> pairs = { 
        {')', '('},
        {'}', '{'},
        {']', '['}
};
        for (char ch : s) {
            // checks if it's a closing bracket by verifying if this is a key, if not, it returns 0, meaning false
              if (pairs.count(ch)) {
                // check if the stack is empty or the top element doesnt match
                if (stack.empty() || stack.top() != pairs[ch]) {
                    return false;
                }
                stack.pop(); // if we did find a corresponding value, we can pop the top off the stack
                } else {
                    stack.push(ch);
              }
        }
        // if the stack is empty, all brackets were matched
        return stack.empty();
    }
};


//s = "[]"

int main() {
    std::string input;
    std::cout << "Enter a string of parentheses: ";
    std::cin >> input;

    if (isValid(input)) {
        std::cout << "The string is valid.\n";
    } else {
        std::cout << "The string is invalid.\n";
    }

    return 0;
}