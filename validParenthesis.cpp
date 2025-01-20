#include <iostream>
#include <stack>
#include <unordered_map>

bool isValid(std::string s) {
    std::stack<char> stack;
    // Map for matching brackets
    std::unordered_map<char, char> matchingBrackets = {
        {')', '('},
        {'}', '{'},
        {']', '['}
    };

    for (char ch : s) {
        // If it's a closing bracket
        if (matchingBrackets.count(ch)) {
            // Check if the stack is empty or the top element doesn't match
            if (stack.empty() || stack.top() != matchingBrackets[ch]) {
                return false;
            }
            stack.pop(); // Pop the matching opening bracket
        } else {
            // Push opening brackets onto the stack
            stack.push(ch);
        }
    }

    // If the stack is empty, all brackets were matched
    return stack.empty();
}

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