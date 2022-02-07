#include<bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
using namespace std;

//#define ordered_set1 tree<int,null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
//#define ordered_set2 tree<int,null_type,greater<int>, rb_tree_tag,tree_order_statistics_node_update>
//#define ordered_set3 tree<int,null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
//#define ordered_set4 tree<int,null_type,greater_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
#define ll long long
#define llmx 9223372036854775807
#define llmn -9223372036854775808
#define imx INT_MAX
#define imn INT_MIN
#define endl '\n'
#define rep(i,s,t) for(ll i=s ; i<t ;i++)
#define rrep(i,s,t) for(ll i=s ; i>=t ; i--)
#define vi vector<ll>
#define vpi vector<pair<ll,ll>>
#define pqpi priority_queue< pair<ll,ll> >
#define pi pair<ll,ll>
#define qi queue<ll>
#define pqpim priority_queue<pi, vector<pi>, greater<pi>>
#define qpi queue<pair<ll,ll>>
#define pb(v) push_back(v)
#define umpi unordered_map<ll,ll>
#define umpiv unordered_map<ll,vector<ll>>
#define umpib unordered_map<ll,bool>
#define si stack<ll>
#define mset(a,v) memset(a, v, sizeof(a))


int main(){
ios_base::sync_with_stdio(false); 
cin.tie(NULL);
    ll t,n,m,x ;
    // cin>>t;
    // t = 1;
    while(1)
    {
        cin>>n;
        if(n==-1) break;

        ll a[n],sum = 0;

        rep(i,0,n)
        {
            cin>>a[i];
            sum += a[i];
        } 

        if(sum%n){
            cout<<-1<<'\n';
            continue;
        }
        // cout<<1<<'\n';
        ll ans = 0,rang = sum/n,curr;

        for(int i=0; i<n; i++){
            if(a[i]>=rang) continue;
            curr = rang - a[i];
            for(i++; i<n; i++){
                if(a[i]>=rang) break;
                curr += rang-a[i]; 
            }
            ans = max(ans,curr);
        }
        if(ans==0)
            cout<<-1<<'\n';
        else
            cout<<ans<<'\n';
    }
    return(0);
}