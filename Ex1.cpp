#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> n;
    int input;

    for (int i = 0; i < 5; i++)
    {
        cin >> input;
        n.push(input);
    }

    while (!n.empty())
    {
        cout << n.top() << " ";
        n.pop();
    }

    return 0;
}