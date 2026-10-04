#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int size; cin >> size;
    vector<int> v(size);
    
    for (int i = 0; i < size; i++) {
        cin >> v[i];
    }

    int amount; cin >> amount;

    amount %= v.size();

    reverse(v.begin(), v.begin() + amount);
    reverse(v.begin() + amount, v.end());
    reverse(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << ' ';
        // 3, 4, 5, 6, 7, 8, 1, 2 (amount = 2)
        // 6, 7, 8, 1, 2, 3, 4, 5 (amount = 5)
    }
}
