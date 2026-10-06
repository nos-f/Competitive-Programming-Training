#include <iostream>
#include <string>
using namespace std;

int main() {
    string str; getline(cin, str);
    
    for (size_t l = 0, r = str.size() - 1; l < r; ++l, --r) {
        if (str[l] != str[r]) {
            cout << "String is not a palindrome.\n";
            return 0;
        }
    }

    cout << "String is a palindrome.\n";
}
