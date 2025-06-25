#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    int num;

    cout << "Enter 5 numbers:\n";
    for (int i = 0; i < 5; i++) {
        cin >> num;
        q.push(num);
    }

    cout << "Dequeued: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << "\n";
    return 0;
}
