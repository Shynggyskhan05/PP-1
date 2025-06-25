#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;
    int num;

    cout << "Enter 10 integers:\n";
    for (int i = 0; i < 10; i++) {
        cin >> num;
        s.insert(num); // добавляем в set (дубликаты уберутся автоматически)
    }

    cout << "Enter number to search: ";
    cin >> num;

    if (s.find(num) != s.end()) {
        cout << "Number found\n";
    } else {
        cout << "Number not found\n";
    }

    cout << "Set elements:\n";
    for (int x : s) {
        cout << x << " ";
    }
    cout << "\n";

    return 0;
}