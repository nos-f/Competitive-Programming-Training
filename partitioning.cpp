#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> v(n);

    for (int &x : v)
        cin >> x;

    int l = 0;
    int r = n - 1;

    while (true) {
        while (l < n && v[l] % 2 != 0)
            ++l;
        while (r >= 0 && v[r] % 2 == 0)
            --r;

        if (l >= r)
            break;

        swap(v[l], v[r]);
    }

    for (int x : v)
        cout << x << ' ';
}
