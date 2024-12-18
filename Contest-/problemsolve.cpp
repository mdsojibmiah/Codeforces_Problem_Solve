#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

#define ll long long
#define INF LLONG_MAX
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

int main() {
    fast_io;
    ll A;
    cin >> A;

    ll min_perimeter = INF;

    for (ll i = 1; i * i <= A; ++i) {
        if (A % i == 0) {
            ll side1 = i;
            ll side2 = A / i;
            ll perimeter = 2 * (side1 + side2);
            min_perimeter = min(min_perimeter, perimeter);
        }
    }

    cout << min_perimeter << endl;
    return 0;
}