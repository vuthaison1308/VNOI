#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <unordered_map>
#include <cmath>
#define fi first
#define se second
#define all(a) a.begin(), a.end()
#define endl std::endl
using son = long long;
const son N = 1e6+5;
son n, d;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL); std::cout.tie(NULL);
    freopen("test.INP", "r", stdin);
    std::cin >> n;
    for (son i = 1; i * (i + 1) / 2 <= n; i++) {
        son x = n - i * (i + 1) / 2;
        if (x % i == 0) {
            d++;
        }
    }
    std::cout << d-1;
    return 0;
}
