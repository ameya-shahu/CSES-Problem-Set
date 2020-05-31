#include<bits/stdc++.h>
#define REP(i,n) for (int i = 1; i <= n; i++)
#define RREP(i,a,b) for (int i = a;i<b;i++)
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define lli long long int
#define INF 1000000000
#define endl '\n'
const double PI = 3.141592653589793238460;
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;

using namespace std;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    
    cin>>n;
    if(1<n && n<=3) cout<<"NO SOLUTION";
    else{
        int i = 2;
        while(i<=n){
            cout<<i<<" ";
            i+=2;
        }

        i = 1;
        while(i<=n){
            cout<<i<<" ";
            i+=2;
        }

    }
    return 0;
}