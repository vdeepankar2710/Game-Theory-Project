/* The program requires a function for utility, i.e., utility(v)
so to run the program we first need to define that according to the conditions
and then run the code*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define dd double
#define endl "\n"
#define pb push_back
#define all(v) v.begin(),v.end()
#define mp make_pair
#define fi first
#define se second
#define vll vector<ll>
#define pll pair<ll,ll>
#define fo(i,n) for(int i=0;i<n;i++)
#define fo1(i,n) for(int i=1;i<=n;i++)
ll mod=1000000007;
ll n,k,t,m,q,flag=0;
ll power(ll a,ll b) {ll res=1;a%=mod; assert(b>=0); for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
ll min(ll a,ll b){if(a>b)return b;else return a;}
ll max(ll a,ll b){if(a>b)return a;else return b;}
ll gcd(ll a , ll b){ if(b > a) return gcd(b , a) ; if(b == 0) return a ; return gcd(b , a%b) ;}
ll maxval  = 100;
ll ans;
ll utility(vll v){
    return 0;
}
void solve(vll v){

    if ( A*v <= c ){
        ans = max ( ans , utility(v) );
        fo(i,m){
            if(v[i]<maxval)
            vll v1=v;
            v1[i]++;
            solve(v1);
        }

    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    #ifdef NOOBxCODER
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #else 
    #define NOOBxCODER 0
    #endif
    //cin>>t;
    t=1;
    while(t--){
        cin>>n>>m; // inputting number of links and nodes for network
        ll A[n][m];
        fo(i,n)fo(j,m)cin>>A[i][j];
        ll c[n];
        fo(i,n)cin>>c[i];
        ans=0;
        vll v;
        fo(i,m)v.pb(0);
        solve(v);
        cout<<ans;

        
    }
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}