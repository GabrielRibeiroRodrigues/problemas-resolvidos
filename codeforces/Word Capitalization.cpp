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

set<char>s;
string a;
cin >> a;
for(int i =0; i < a.size(); i++){
        char j = a[i];
        s.insert(j);
}
int b = s.size();

if((b%2) == 0){
    cout << "CHAT WITH HER!" << endl;
}
else{
    cout << "IGNORE HIM!" << endl;
}

}