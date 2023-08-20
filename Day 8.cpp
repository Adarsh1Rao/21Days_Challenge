#include <bits/stdc++.h>
#include <vector>

using namespace std; // Make sure to include this line to use 'vector' and 'cout'

vector<int> termsOfAP(int x) {
    vector<int> v;
    for (int i = 1;; i++) {
        int value = 3 * i + 2;
        if (value % 4 != 0)
            v.push_back(value);

        if (v.size() == x)
            break;
    }

    return v;
}
