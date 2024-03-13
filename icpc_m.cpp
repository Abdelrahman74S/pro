#include <bits/stdc++.h>
using namespace std;

bool checkPangram(string& str) {
    set<char> characters;
    for (auto ch : str) {
        if (isalpha(ch)) {
            characters.insert(tolower(ch));
        }
    }
    return characters.size() == 26;
}

int main() {
    string str;
    cin >> str;
    if (checkPangram(str)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}