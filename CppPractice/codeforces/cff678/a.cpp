#include<bits/stdc++.h> 
#define boost ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)   
#define ll long long 
#define fi for(ll i=0;i<n;i++)
#define pb push_back
#define countsetbit __builtin_popcount
 
using namespace std;
int main()
{
	boost;
 	#ifndef ONLINE_JUDGE
     		freopen("input.txt","r",stdin);
     		freopen("output.txt","w",stdout);
        #endif
	ll tc;
	cin>>tc;
	while(tc--)
	{
        ll n,m,ans=0;
        cin>>n>>m;
        fi
        {
            ll x;
            cin>>x;
            ans+=x;

        }
        if(ans==m)
           cout<<"YES\n";
        else
          cout<<"NO\n";


	}




	return 0;

}







