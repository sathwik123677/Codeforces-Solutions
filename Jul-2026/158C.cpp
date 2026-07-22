#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<string> path;
    while (n--) {
        string cmd;
        cin >> cmd;
        if (cmd == "pwd") {
            cout << "/";
            for (string dir : path)
                cout << dir << "/";
            cout << "\n";
        }
        else {
            string s;
            cin >> s;
            // Absolute path
            if (s[0] == '/')
                path.clear();
            string temp = "";

            for (int i = 0; i <= (int)s.size(); i++) {
                if (i == s.size() || s[i] == '/') {
                    if (!temp.empty()) {
                        if (temp == "..")
                            path.pop_back();
                        else
                            path.push_back(temp);
                        temp = "";
                    }
                }
                else {
                    temp += s[i];
                }
            }
        }
    }
    return 0;
}