#include <bits/stdc++.h>

using namespace std ;
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> a(n);

        int mx = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mx = max(mx, a[i]);
        }

        while (m--) {
            char op;
            int l, r;
            cin >> op >> l >> r;
            if (op == '+') {
                if (mx >= l && mx <= r)
                    mx++;
            }
            else {
                if (mx >= l && mx <= r)
                    mx--;
            }
            cout << mx << ' ';
        }
        cout << '\n';
    }
}

