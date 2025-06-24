#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {12, 45, 23, 67, 45, 89, 23, 12, 78, 56};

    cout << "Original vector:\n";
    for (int x : v) cout << x << " ";
    cout << "\n";

    sort(v.begin(), v.end());

    cout << "Sorted vector:\n";
    for (int x : v) cout << x << " ";
    cout << "\n";

    auto min_it = min_element(v.begin(), v.end());
    auto max_it = max_element(v.begin(), v.end());
    cout << "Min: " << *min_it << ", Max: " << *max_it << "\n";

    v.erase(unique(v.begin(), v.end()), v.end());
    cout << "Vector without duplicates:\n";
    for (int x : v) cout << x << " ";
    cout << "\n";

    return 0;
}
