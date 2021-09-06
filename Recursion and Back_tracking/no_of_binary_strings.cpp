                                 /*^^::^^^anmit007^^::^^^*/
#include<bits/stdc++.h>
#define ll          long long
#define ld          long double
#define int         int64_t
#define pb          push_back
#define endl        '\n'
#define pll         pair<int,int>
#define vll         vector<int>
#define all(a)      (a).begin(),(a).end()
#define in(a)       insert(a)
#define F           first
#define S           second
#define sz(x)       (int)x.size()
#define hell        1000000007
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mi          map<int,int>
#define set_bits(x) _builtin_popcount(x)
#define gcd(a,b)    __gcd((a),(b))
#define lcm(a,b)    ((a)*(b)) / gcd((a),(b))
#define ios     ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define REP(i,a,b) for(ll i=a;i<b;i++)
#define REPI(i,a,b) for(ll i=b-1;i>=a;i--)
using namespace std;
static mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());


//////////////////////////////////////Exponentiations//////////////////////////////////////
int binary_exponentiaion(int a , int n)
{
  int res = 1 ;
  while (n){if (n % 2 == 0) res *= a  , n-- ;  else a *= a , n /= 2 ;}return res ;
}

int modular_exponnentiation(int a , int n , int p)
{
  int res = 1 ;
  while (n){if (n % 2)res = (res * a) % p , n -- ; else a = (a * a) % p , n /= 2 ; }return res;
}


//////////////////////////////////////counting/////////////////////////////////////
ll countDigit(long long n)
{ll count = 0;while (n != 0){ n = n / 10; ++count;}return count;}



//////////////////////////////////Input_Stuff//////////////////////////////////

void input_vec(int n,vector<ll>&v)
{for(int i = 0  ; i < n ; i++){int x ; cin >> x ; v.pb(x);}}

void input_Freqmap(int n , vector<ll>&v , map<int,int>&m)
{for(int i = 0  ; i < n ; i++){int x ; cin >> x ; v.pb(x);}for(int i = 0 ; i < n ; i++){m[v[i]]++;}}

void input_set(int n , set<int>&s)
{for(int i = 0 ; i < n ; i++){int x ; cin >> x ; s.insert(x);}}

void input_multiset(int n , multiset<int>&ms)
{for(int i = 0 ; i < n ; i++){int x ; cin >> x ; ms.insert(x);}}



//////////////////////////////////Output_Stuff//////////////////////////////////
void output_vec(vector<ll>&v)
{for(auto it:v){cout << it<< " " ;};}

void output_Freqmap(map<int,int>&m)
{for(auto it : m) cout << it.F << " " << it.S << endl;}

void output_set(set<int>&s)
{for(auto it : s) cout << it << " " ;}

void output_multiset(multiset<int>&ms)
{for(auto it : ms) cout << it << " " ;}

/////////////////solve////////////////////////////
int count_binary_string(int n ) {
  if(n==1  or n==2){ /*base case */
    return n+1 ; 
  }
  int choose_zero = count_binary_string(n-1) ; /* choosing zero */
  int choose_one = count_binary_string(n-2); /*choosing one */
  return choose_one + choose_zero; //self work
}
////////////////////main/////////////////////////
signed main()
{
ios
// #ifndef  ONLINE_JUDDGE
//  freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);
// #endif
// ll test = 1;
// //cin >> test ;
// while (test--) {solve();}
int n ; cin >> n ; 
cout << count_binary_string(n);

cerr << (float)clock()/CLOCKS_PER_SEC * 1000 << "ms" << endl;
}