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
string a;cin >> a;
string b = a;
for(int i = 0; i < a.size(); i++){
    b[i] = toupper(a[i]);
}
int contm = 0;
for(int i = 0; i < a.size(); i++){
   if(a[i] != b[i]){
    contm++;
   }
}
int contmai = a.size() - contm;

if(contmai > contm){
    for(int i = 0; i < a.size(); i++){
    a[i] = toupper(a[i]);
}
cout << a << endl;

}else{ for(int i = 0; i < a.size(); i++){
    a[i] = tolower(a[i]);
}
cout << a << endl;

}}
