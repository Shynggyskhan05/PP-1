#include <iostream>
#include <vector>
using namespace std;

double average(const vector<int>& v) {
    int sum = 0;
    for (auto it = v.begin(); it != v.end(); ++it) {
        sum += *it;
    }
    return (double)sum / v.size();
}

int main() {
    vector<int> v = {10, 20, 30, 40, 50};
    double avg = average(v);
    cout << "Average: " << avg << "\n";

    return 0;
}
