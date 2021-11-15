/*
Like and Follow us 

	<?>   <?>
	   ~V~


insta : @codersvilla
yt   : PLASMINDO
*/
// gcc optimisation
#pragma GCC optimize("Ofast")
#pragma GCC target("fma,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
#pragma GCC optimize("unroll-loops")

#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional> // for less
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,
             tree_order_statistics_node_update>
    o_set;
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define re register
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define elif else if
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define fp(i,start,end) for(ll i = start;i < end; i++)
#define fn(i,start,end) for(ll i = start;i > end; i--)
#define rep(x,start,end) for(auto x=(start)-((start)>(end));x!=(end)-((start)>(end));((start)<(end)?x++:x--))
#define vl vector<ll>
#define vc vector<char>
#define vs vector<string>
#define vll vector<vector<ll>>
#define si set<ll>
#define B begin()
#define E end()
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
#define ts auto time_started_here = chrono::steady_clock::now();
#define te auto time_ended_here = chrono::steady_clock::now(); auto difference = time_ended_here - time_started_here; cerr << "Complete span : " << chrono::duration <double, milli> (difference).count() << " ms" << endl; 
#define fl(flag,x) bool flag = x;
#define vec vector

#define acc accumulate
// String copy
#define sc(S,s,a,b) s = S.substr(a,b);

// ub and lb
#define ub upper_bound
#define lb lower_bound

// iterators
#define ssi std::set<string>::iterator
#define sii std::set<ll>::iterator

//pairs
#define vpll std::vector<pair<ll,ll>>

// min max in a array
#define minel(arr) min_element(all(arr));
#define maxel(arr) max_element(all(arr));

// void solve()
#define v() void solve()
// iterator
#define it iterator

//new line
#define endl "\n"


bool isvowel(char ch) { return (ch == 'a') || (ch == 'e') ||(ch == 'i') ||(ch == 'o') ||(ch == 'u') ||(ch == 'A') ||(ch == 'E') ||(ch == 'I') ||(ch == 'O') ||(ch == 'U'); }
// my power okie :_:
ll pw(ll val,ll pwr){
	ll res = 1;
	fp(i,0,pwr){
		res *= val;
		res%=MOD;
	}
	return res;
}

//automatic insertion array vector
#define arm(n,arr) ll n; cin>>n; vl arr(n); fp(i,0,n) cin>>arr[i];
#define ram(n,arr) vl arr(n); fp(i,0,n) cin>>arr[i];

ll _setbit(ll n){
	ll cnt = 0;
	while(true){
		if(n&1){
			cnt++;
			break;
		}
		n=n>>1;
		cnt++;
	}
	return cnt;
}
/*-----------------------setbits above-------------------------*/


ll nod(ll n){
	ll cnt = 0;
	while(n){
		n/=10; cnt++;
	}
	return cnt;
}
ll _max(ll a,ll b,ll c){
	return max(a,max(b,c));
}
/*----------------------------code-----------------------------------*/
/*____________leetcode_____________*/

v(){}


/*_________________________________*/
/*______________codeforces_________*/

v(){}

/*_________________________________*/
/*___________codechef______________*/

v(){}


/*_________________________________*/






int main() {
	fastio();
	#ifndef ONLINE_JUDGE
		freopen("Error.txt", "w", stderr);
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
		ts
	ll t,m;
	cin>>t;
	m = t;
	fp(i,1,t+1)
		solve();
	te
	return 0;
	
}
