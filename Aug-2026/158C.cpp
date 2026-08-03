#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<string> cur;

    while (n--) {
        string cmd;
        cin >> cmd;

        if (cmd == "pwd") {
            cout << "/";
            for (auto &dir : cur)
                cout << dir << "/";
            cout << "\n";
        } else {
            string path;
            cin >> path;

            if (path[0] == '/') {
                cur.clear();
            }

            string temp = "";
            int start = (path[0] == '/') ? 1 : 0;

            for (int i = start; i <= path.size(); i++) {
                if (i == path.size() || path[i] == '/') {
                    if (temp == "..") {
                        if (!cur.empty())
                            cur.pop_back();
                    } else if (!temp.empty()) {
                        cur.push_back(temp);
                    }
                    temp.clear();
                } else {
                    temp += path[i];
                }
            }
        }
    }

    return 0;
}