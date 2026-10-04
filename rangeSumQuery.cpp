#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N; cin >> N;
    int L, R;

    vector<int> v(N);
    vector<int> prefix(N + 1);

    for (int i = 0; i < N; i++)
        cin >> v[i];

    for (int i = 0; i < N; i++)
        prefix[i + 1] = prefix[i] + v[i]; 

    cin >> L >> R;

    cout << prefix[R + 1] - prefix[L];
}
