#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isEven(int x) {
    return x % 2 == 0;
}

bool divisibleBy3(int x) {
    return x % 3 == 0;
}

int main() {
    vector<int> v;
    for (int i = 1; i <= 20; i++) {
        v.push_back(i);
    }

    reverse(v.begin(), v.end());
    cout << "Reversed vector:\n";
    for (int x : v) cout << x << " ";
    cout << "\n";

    int evenCount = count_if(v.begin(), v.end(), isEven);
    cout << "Even numbers: " << evenCount << "\n";

    v.erase(remove_if(v.begin(), v.end(), divisibleBy3), v.end());
    cout << "Without numbers divisible by 3:\n";
    for (int x : v) cout << x << " ";
    cout << "\n";

    return 0;
}
