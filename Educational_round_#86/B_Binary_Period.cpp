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
    
    fo(ii,0,t)
    {   
        int count = 0;
        string s;
        cin>>s;
        int n = s.length();
        fo(i,0,n)
            if(s[i]=='0')count++;
            
        if(count ==0 || count == n)
            cout<<s<<endl;
        else
        {
                char a='0';
                char b='1';
                fo(i,0,n) cout<<a<<b;
                cout<<endl;
        
        }
        
     
    }
	return 0;
}
