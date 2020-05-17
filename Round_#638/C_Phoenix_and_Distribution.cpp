//-------We can be heroes , just for one day!!.---------//
 
    #include <bits/stdc++.h>
    using namespace std;
  
//*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ knowledge $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$*//
 
    #define pb push_back
    #define MP make_pair
    #define F first
    #define S second
    #define int long long
    #define fo(i,a,b) for(int i=a;i<b;i++)
    #define rfo(i,b,a) for(int i=b;i>=a;i--)
    #define deb(x) cout<<#x<<" "<<x<<endl;
    #define mem( a, val ) memset(a, val, sizeof( a ) )
    #define deci( x ) cout<<fixed<<setprecision( x )
    #define bitcount( x ) __builtin_popcountll( x )
    #define endl "\n" 
 
    
    typedef vector<int> vi;
    typedef pair<int,int> pi; 
    
    const int MOD =  1000000007 ;
    const int MAX = 2e4 + 7;
    const int dx[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
    const int dy[8] = {-1, 0, 1, 1, 1, 0, -1, -1};
 
//*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$ intelligence $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$*//  

int32_t main() 
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        if(k==1) cout<<s<<endl;
        else if(s[0] != s[k-1] ) cout<<s[k-1]<<endl;
        else
        {   
            if(s[k] != s[n-1])
            {
                fo(i,k-1,n) cout<<s[i];
                cout<<endl;
                
            }
            else
            {
                vector<char> v;
                v.pb(s[0]);
                if((n-k)%k == 0)
                {
                    fo(i,0,(n-k)/k) v.pb(s[k]);
                }
                else
                {
                    fo(i,0,((n-k)/k) + 1) v.pb(s[k]);
                }
                string s2(v.begin(),v.end());
                cout<<s2<<endl;
                
            }
            
            
        }
        
        
        
            
    }
	return 0;
}
