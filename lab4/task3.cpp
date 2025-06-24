#include <iostream>
#include <sstream>
#include <map>
using namespace std;

int main() {
    string sentence = "this is a test this is only a test";
    map<string, int> wordCount;
    string word;
    istringstream iss(sentence);

    while (iss >> word) {
        wordCount[word]++;
    }

    cout << "Word frequencies:\n";
    for (auto pair : wordCount) {
        cout << pair.first << " -> " << pair.second << "\n";
    }

    return 0;
}
