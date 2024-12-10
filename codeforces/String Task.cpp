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
string a,nova; cin >> a;
vector<char>v;
for(int i=0; i < a.size();i++){
    if(a[i] != 'a'&&a[i] !='A'&&a[i] != 'e'&&a[i] !='E'&&a[i] != 'i'&&a[i] !='I'&&a[i] != 'o'&&a[i] !='O'&&a[i] != 'u'&&a[i] !='U'&&a[i] != 'y'&&a[i] !='Y'){
    v.pb('.');
    a[i] = tolower(a[i]);
    v.pb(a[i]);}
}
for(int i =0; i < v.size(); i++){
cout << v[i];
}

cout << endl;
}
