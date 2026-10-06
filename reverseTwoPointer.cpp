#include <iostream>
#include <string>
#include <utility>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    getline(cin, str);

    if (str.empty())
        return 0;

    for (size_t l = 0, r = str.size() - 1; l < r; ++l, --r) 
        swap(str[l], str[r]);

    cout << str;
}
