#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isAnagram(string s, string t) {
    if (s.length() != t.length()) {
        return false;
    }

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    return s == t;
}

int main() {
    string s = "rat";
    string t = "car";

    cout << (isAnagram(s, t) ? "true" : "false") << endl;

    return 0;
}