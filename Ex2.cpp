#include <iostream>
#include <stack>
using namespace std;

int main() {
    string input;
    stack<char> st;

    cout << "Enter a string: ";
    cin >> input;

    for (char ch : input) {
        st.push(ch);
    }

    cout << "Reversed string: ";
    while (!st.empty()) {
        cout << st.top();
        st.pop();
    }
    cout << "\n";
    return 0;
}
