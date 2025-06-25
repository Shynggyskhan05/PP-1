#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;
    int num1, num2, num3;

    cout << "Enter number to push front: ";
    cin >> num1;
    dq.push_front(num1);

    cout << "Enter number to push back: ";
    cin >> num2;
    dq.push_back(num2);

    cout << "Enter another number to push front: ";
    cin >> num3;
    dq.push_front(num3);

    cout << "Deque contains: ";
    for (int x : dq) cout << x << " ";
    cout << "\n";

    cout << "Pop back: " << dq.back() << "\n";
    dq.pop_back();

    cout << "Pop front: " << dq.front() << "\n";
    dq.pop_front();

    cout << "Remaining: ";
    for (int x : dq) cout << x << " ";
    cout << "\n";

    return 0;
}
