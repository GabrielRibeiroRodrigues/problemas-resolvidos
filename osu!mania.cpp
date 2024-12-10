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

typedef long long ll;
typedef pair<int, int> ii;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main()
{
int k;cin >> k;
for(int s = 0; s < k; s++){
int n; cin >> n;
char matriz[n][4];
vector<int>v;
for(int i = 0 ; i < n ; i++){

    for(int j =0 ; j < 4; j++ ){
        cin >> matriz[i][j];
    }
}for(int i = 0 ; i < n ; i++){
    for(int j =0 ; j < 4; j++ ){
        if(matriz[i][j] == '#') {
            v.pb(j+1);
        }
    }

}
reverse(v.begin(),v.end());
 for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

cout << endl;


}

}
