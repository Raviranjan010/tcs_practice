# TCS NQT C++ Input/Output Guide

## Standard Input Templates for TCS iON

### Template 1: Single integer input
```cpp
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    // your code
    cout << n << "\n";
    return 0;
}
```

### Template 2: Array input
```cpp
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    return 0;
}
```

### Template 3: Multiple test cases
```cpp
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        // solve
    }
    return 0;
}
```

### Template 4: 2D Matrix input
```cpp
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m; cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) cin >> matrix[i][j];
    return 0;
}
```

### Template 5: String input (with spaces — use getline)
```cpp
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string line;
    getline(cin, line);
    return 0;
}
```

### TCS iON C++ Compiler Notes:
- Compiler: GCC 9.3, C++17 standard
- `#include <bits/stdc++.h>` works and includes everything
- `ios_base::sync_with_stdio(false); cin.tie(NULL);` for faster I/O
- Maximum array size: use 10^6 safely on stack for global arrays
- Avoid: complex C++20 features, modules, ranges
- Output: use "\n" not endl (endl flushes and is slow)
- Use `long long` when values can exceed 2×10^9
