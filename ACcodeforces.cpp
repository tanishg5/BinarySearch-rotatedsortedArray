//जय गणेशाय नम
#include<bits/stdc++.h>
using namespace std::chrono;
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define boolalpha std::cout << std::boolalpha;
#pragma GCC optimize("Ofast")
typedef long long ll;
typedef long double lld;
typedef signed long long int ull;
/*-------------------------------------------------------------*/
#define endl '\n'
#define mem(arr) memset(arr,0,sizeof(arr))
#define debug(x) cout << #x << " ---> " << x << endl;
#define pb push_back
#define ff first
#define ss second
#define sz(a) ((int)((a).size()))
#define all(v) v.begin() , v.end()
#define gr(v)  v.begin() , v.end() , greater<int>()
#define rall(x) x.rbegin(), x.rend()
#define vll vector<ll>
#define setll set <ll>
#define printi(v) for(auto i : v) cout<<i<<" "; cout<<endl;
#define mapi(mp) for(auto i : mp) cout<<i.ff<<" "<<i.ss<<endl;
#define inputi(v) for(ll i = 0 ; i<n; i++) cin>>v[i];
#define repii(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define rep(i,x,y) for(ll i=x;i<y;i++)
#define rrep(i,x,y) for(ll i=x;i>=y;i--)
/*-------------------------------------------------------------*/
#define mod 1000000007
const int M = 1e9 + 7;
const int maxN = (int)3e5+10;
const int inf = 1e9+7 ;
const ll inf64= 1e17;
const ll ninf = inf*(-1)*1e5;
const int MAX = 1e6;
/*-------------------------------------------------------------*/
void YES() { cout<<"YES"<<endl; }
void NO() { cout<<"NO"<<endl; }
/*-----------------------------------------------------------------------------*/
ll mod_add(ll a, ll b) { return (a % M + b % M) % M; }
ll mod_sub(ll a, ll b) { return (a % M - b % M + M) % M; }
ll mod_mul(ll a, ll b) { return (a % M * b % M) % M; }
ll mod_expo(ll a, ll b) { if (b == 0) return 1; int res = mod_expo(a, b / 2); res = mod_mul(res, res); if (b % 2 == 1) res = mod_mul(res, a); return res; }
ll mod_inv(ll a) { return mod_expo(a, M - 2); }
ll mod_div(ll a, ll b) { return mod_mul(a, mod_inv(b)); }
/*----------------------------------------------------------------------------------------------------------------*/
// 1) To check perfect square no
bool isPerfectSquare(long long x)
{
    if (x >= 0) {
        ll a = llround(sqrtl(x)) ;
        return a*a==x ;
    }
    return false;
}
/*----------------------------------------------------------------------------------------------------------------*/
int gcd (int a , int b) { //gcd
    if(a==0) {
        return b ;
    }
    return gcd(b%a,a);
}
/*----------------------------------------------------------------------------------------------------------------*/
int lcm (int a , int b){  //lcm
    return (a*b)/gcd(a,b);
}
/*----------------------------- -----------------------------------------------------------------------------------*/
int power(int a, int n){   //power
    int ans=1; 
      while(n>0){
        int last_bit = n&1;
          if(last_bit){
            ans = mod_mul(ans,a);
        }
      a = mod_mul(a,a);
      n = n >> 1;
    }
      return ans;
}
/*----------------------------- -----------------------------------------------------------------------------------*/
vector<ll> sieve(ll n) //seive of erathonesis for prime nos //o(nloglogn):tc
{
    int *arr = new int[n + 1]();   // ll arr[n+1]{0} ;
    vector<ll> vec;
    for (ll i = 2; i <= n; i++)
        if (arr[i] == 0)
        {
            vec.push_back(i);
            for (ll j = i * i; j <= n; j += i)
                arr[j] = 1;
        }
    return vec;
}
/*----------------------------------------------------------------------------------------------------------------*/
vector<ll> sieve1(ll n) // seive for primefactors
{ 
   vector<ll>spf(n+1);
  rep(i,0,n+1) {
    spf[i] = i ;
  }
  for(ll i = 2 ; i*i<=n; i++) {
    if(spf[i]==i) {
      for(ll j = i*i; j<=n; j+=i) {
        if(j == spf[j]) {
          spf[j] = i ; 
        }
      }
    }
  }
   return spf; 
}
/*----------------------------------------------------------------------------------------------------------------*/
  int setcount(int n) { return __builtin_popcount(n); }
  void precision(int a) { cout << setprecision(a) << fixed; }
  
  #define TxtIO freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout); 
/*----------------------------------------------------------------------------------------------------------------*/
 int recursivefn(ll n , ll j , ll k) {
   if(k==1) return 1 ;
   else if ( j < n-j) return 0 ;
   else if (n-j<0) return 0;
   return recursivefn( j ,n-j,k-1);

 }
 void solve ( ) {
  vector<ll>v={11,12,15,18,2,5,6,8};
  ll n = v.size();
  ll start = 0 ; 
  ll end = v.size()-1 ;
  if(v[start]<=v[end]) {
    cout<<0<<endl;
    return;
  }
  while(start<=end) {
    ll mid = start + (end-start)/2;
    ll next = (mid+1)%n; 
    ll previous = (mid-1+n)%n;
    if(v[mid]<=v[previous] && v[mid]<=v[next]) {
      cout<<mid<<endl;
      return;
    }
    else if (v[mid]>=v[0]) {
      start = mid + 1;
    }
    else if (v[end]>=v[mid]) {
      end = mid - 1 ;
    }
  }
 }

 

signed main ( ) {
       // TxtIO;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
        ll tc ;
        cin>>tc;
        while(tc--) {
          solve();
        }

   }
//I just sit back and think kitnay mujhse khaar khayein ge?
//came from nothing rab ki naemat behisaab bhai pe
//I got everything I need mujhay kya chahiye?
//Dil ki gali mein baraye karam na ayie 




