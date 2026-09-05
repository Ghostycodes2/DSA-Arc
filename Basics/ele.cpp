#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void accessCharacters(string s) {
        for (int i = 0; i < s.length(); i++) {
            cout << s[i] << endl;
        }
    }
};

int main() {

    Solution obj;
    string s;
    cout<<"Enter a string: ";
    getline(cin, s);
    obj.accessCharacters(s);
    return 0;
}