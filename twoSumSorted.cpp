#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int target; cin >> target;
    
    if (n <= 0)
        return 0;

    vector<int> v(n);

    for (int &x : v)
        cin >> x;

    int number;

    for (size_t l = 0, r = n - 1; l < r;) {
        number = v[l] + v[r];

        if (number == target) {
            cout << v[l] << ' ' << v[r] << '\n';
            return 0;
        }

        else if (number < target) 
            ++l;
        else if (number > target)
            --r;
    }

    cout << "Not found.\n";
}
