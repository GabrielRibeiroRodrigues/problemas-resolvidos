#include <bits/stdc++.h>
using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define d(x) cout<<#x<<" = "<<x<<endl;

#define pb push_back
#define pf push_front
#define mp make_pair
#define f first
#define s second
#define f(i, n) for (int i = 0; i < (n); ++i)
typedef long long ll;
typedef pair<int, int> ii;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main()
{
    int T, D, M;
    cin >> T >> D >> M;

    if (M == 0) {
        cout << "Y" << endl;
        return 0;
    }

    int pausa, inicio = 0;
    bool found = false;

    f(i, M) {
        cin >> pausa;
        if (i == 0) {
            if ((pausa - inicio) >= T) {
                cout << "Y" << endl;
                return 0;
            }
        } else {
            if ((pausa - inicio) >= T) {
                cout << "Y" << endl;
                return 0;
            }
        }
        inicio = pausa;
    }

    cout << "N" << endl;

    return 0;
}
