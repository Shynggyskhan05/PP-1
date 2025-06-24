#include <iostream>
#include <stack>
using namespace std;

int main() {
    string expr = "((a+b)*(c-d))";
    stack<char> st;
    bool correct = true;

    for (char ch : expr) {
        if (ch == '(') {
            st.push(ch);
        } else if (ch == ')') {
            if (st.empty()) {
                correct = false;
                break;
            }
            st.pop();
        }
    }

    if (correct && st.empty())
        cout << "Correct\n";
    else
        cout << "Incorrect\n";

    return 0;
}
