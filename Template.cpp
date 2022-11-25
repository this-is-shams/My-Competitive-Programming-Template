//Bismillahir Rahmanir Rahim

#include<bits/stdc++.h>
#include<iostream>
#include<C:\Users\SHAMS\Desktop\VS Codes\HEADER\debug.cpp>
using namespace std;

#define fasterIO         ios::sync_with_stdio(0); cin.tie(0);
#define forn(i,n)        for (int i = 0; i < int(n); i++)
#define forn1(i,n)        for (int i = 1; i <= int(n); i++)
#define Pi               3.141592653589793
#define PI               acos(-1.0)
#define SQR(n)           (n * n)
#define sz(a)            int((a).size()) 
#define pb               emplace_back
#define all(x)           (x).begin(), (x).end()
#define rall(s)          s.rbegin(),s.rend()
#define SS               stringstream
#define P(x)             cout << x << endl;
#define mset(a,v)        memset(a,v,sizeof(a));
#define LB               lower_bound
#define UB               upper_bound
#define READ             freopen("input.txt", "r", stdin); 
#define WRITE            freopen("output.txt", "w", stdout);
#define MOD              1000000007
#define Y                cout<<"YES"<<endl;
#define N                cout <<"NO"<<endl;
#define YR               cout<<"YES\n";return;
#define NR               cout<<"NO\n";return;
#define in(n)            scanf("%d", &n);
#define innm(n,m)        scanf("%d%d",&n,&m);
#define out(n)           printf("%d\n",n);
#define sp               <<" ";
#define nl               <<'\n';

typedef  vector<int>              vi;
typedef  vector<long long>       vll;
typedef  long long                ll;
typedef  unsigned long long      ull; 
typedef  vector<int>              vi; 
typedef  vector<string>          vs; 
typedef  vector<char>             vc;
typedef  vector<bool>             vb;

int dx[8] = {1, -1, 0,  0, 1,  1, -1, -1};
int dy[8] = {0,  0, 1, -1, 1, -1,  1, -1};  

/// Functions Start 
ll factorial(ll n){ ll i, ans=1; for(i=n; i>1; i--){ans*=i;} return ans; }
ll Pow(ll c,ll d) {return d=0? 1:c*pow(c,d-1);} //2^62
template <class T> T gcd(T a,T b){if(b == 0)return a;return gcd(b,a%b);} 
template <class T> T lcm(T a, T b ){return (a*b)/gcd(a,b);}
ll bigmod(ll a, ll x, ll m){a %= m;ll res=1;while(x>0){if(x&1)res=res*a%m;a=a*a%m;x/=2;}return res;}
ll modinv(ll n, ll mod){return bigmod(n,mod-2,mod);}
bool isSquare(ll x){ll sq=sqrt(x);return sq*sq==x;}
bool isPowerOfTwo(int n){if (n == 0)return 0;while (n != 1){if(n%2 != 0)return 0;n = n/2;}return 1;}
ll LOG2(ll n){ll v=1,c=0;while(v<=n)c++,v*=2;return c-1;}
bool prime(ll n) { if(n<2) return false; for(ll i=2;i<=sqrt(n);i++){ if(n%i==0)return false;} return true; }
void vout(auto v) {for(auto &x : (v)) cout<<x<<' ';}
void vin(auto &v, auto n) {for(int i=1; i<=n; i++){int x;cin>>x;v.pb(x);}}
/// Functions End

void solve()
{
   
}

int main()
{
  fasterIO
  int t=1;
  //cin >> t;
  while(t--) solve();

  return 0;
}
