class Solution {
public:
    string removeDuplicates(string s) {
        std::stack<char> stack;
        std::string result;

        for (char c : s) {
            if (stack.empty()) {
                stack.push(c);
            } else {
                if (stack.top() == c) {
                    stack.pop();
                } else {
                    stack.push(c);
                }
            }
        }

        while (!stack.empty()) {
            result += stack.top();
            stack.pop();
        }

        std::reverse(result.begin(), result.end());
        return result;
    }
};