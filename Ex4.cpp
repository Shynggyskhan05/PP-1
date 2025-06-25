#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<string> q;
    string name;

    cout << "Enter 3 names:\n";
    for (int i = 0; i < 3; i++) {
        cin >> name;
        q.push(name);
    }

    while (!q.empty()) {
        cout << "Serving: " << q.front() << "\n";
        q.pop();
    }

    return 0;
}
