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
        int n,max=0,d=0;
        cin>>n;
        int temp,b[n+1]={0};
        
        fo(i,0,n)
        {
            cin>>temp;
            b[temp]++;
        }
        
        //fo(i,1,n+1)
        //    cout<<b[i]<<endl;
        fo(i,1,n+1)
            if(b[i]>max)max=b[i];
        fo(i,1,n+1)
            if(b[i]>0)d++;
        d--;
        //cout<<max<<" "<<d<<endl;
        if(d>=max)
            cout<<max<<endl;
        else
        {
            if(max-d==1)cout<<d<<endl;
            else cout<<d+1<<endl;
            
        }
        
            
    }
	return 0;
}
