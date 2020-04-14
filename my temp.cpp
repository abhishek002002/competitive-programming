                                     //Abhishek Agrawal//
                        //Newbie......You have to be odd to be no. ONE :)//
#include<bits/stdc++.h>
#define ll long long int
#define ld long double
#define fl float
#define vs vector <string>
#define vc vector <char>
#define vll vector<ll>
#define pll pair<ll,ll>
#define vpll vector<pair<ll,ll>>
#define vvll vector<vector<ll>>
#define pb push_back
#define f first
#define s second
#define mll map<ll,ll>
#define mcl map<char,ll>
#define mcc map<char,char>
#define msl map<string,ll>
#define mss map<string,string>  
#define mod 1000000007
#define flash ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL); 
#define test ll t;read(t);while(t--) 
#define sort(v) sort(v.begin(),v.end())
#define INF (ll)(1e15)
#define loop(i,n) for(ll i=0;i<n;i++)
#define loop1(i,n) for(ll i=1;i<=n;i++)
#define rloop(n,i) for(ll i=n-1;i>=0;i--)
#define lloop(i,a,b) for(ll i=a;i<=b;i++)
#define max3(a,b,c) max(max(a,b),c)
#define min3(a,b,c) min(min(a,b),c)

using namespace std;

ll n,q;
ll gcd(ll a, ll b){if (b==0){return a;} return gcd(b,a%b);}
ll pow(ll a,ll b){ll res=1;while(b>0){if(b%2 ==1){res=(res*a);}a=(a*a);b/=2;} return res;}
ll power(ll a,ll b,ll M){a%=M;ll res=1;while(b>0){if(b%2 ==1){res=(res*a)%M;}a=(a*a)%M;b/=2;} return res;}
ll extendedEuclid(ll A,ll B,ll &x,ll &y){
    if(B == 0) {
        x = 1;
        y = 0;
        return A;
    }
    else {
        ll x1 , y1;
        ll gcd = extendedEuclid(B,A%B,x1,y1);
        y = x1-(A/B)*y1; 
        x = y1;
        return gcd;
    }
}
ll mi(ll A, ll M){ll x,y;extendedEuclid(A,M,x,y);if(x<0){x+=mod;} return x;}


template <typename T>
void read(T &x) {
    cin >> x;
}
template <typename T , typename T0>
void read(T &x, T0 &y) {
    cin >> x >> y;
}
template <typename T , typename T0 , typename T1>
void read(T &x, T0 &y, T1 &z) {
    cin >> x >> y >> z;
}
template <typename T , typename T0 , typename T1 , typename T2>
void read(T &x, T0 &y, T1 &z, T2 &w) {
    cin >> x >> y >> z >> w;
}

//pair//
//read pair//
template <typename T , typename T0>
void read(pair< T , T0 > &p) {
    cin >> p.f >> p.s;
}
//write pair//
template <typename T , typename T0>
void write(pair< T , T0 > &p){
    write(p.f);
    write(p.s);
}

//vector//
//read vector//
template <typename T>
void read(vector< T > &oneD, ll n) {
    loop(i,n)
    {
        ll x;
        read(x);
        oneD.pb(x);
    }
}

//arrey//
//read arrey//
template <typename T>
void read(T oneD[] , ll n) {
    loop(i,n){
        read(oneD[i]);
    }
}
//write arrey//
template <typename T>
void write(T oneD[] ,int n){
    loop(i,n){
        write(oneD[i]);
    }
    cout << endl;
}

