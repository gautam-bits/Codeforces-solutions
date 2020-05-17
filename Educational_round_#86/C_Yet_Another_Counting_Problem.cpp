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
int gcd(int a, int b){ 
    if (a == 0) 
        return b;  
    return gcd(b % a, a);  
 } 
  
   
// Function to return LCM of two numbers  
  int lcm(int a, int b)  
 {  
    return (a*b)/gcd(a, b);  
 }

int32_t main() 
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    
    cin>>t;
    
    fo(ii,0,t)
    {
        int a,b,q;
        cin>>a>>b>>q;
        int z=max(a,b)-1;
        int c = lcm(a,b);
        int l,r;
        fo(i,0,q)
        {   
            int sum=0;
            cin>>l>>r;
            if(l-(c*(l/c)) <= z) sum += z + 1 - l + (c*(l/c)) ; 
            if(r-(c*(r/c)) <= z) sum += r - (c*(r/c)) + 1 ; 
            int p1 = (l/c) + 1;
            int p2 = (r - z - 1)/c;
            if(p2>=p1)sum += (p2 - p1 + 1)*(z+1);
            
            if((l/c) == (r/c) && l-(c*(l/c)) <= z && r-(c*(r/c)) <= z )
                cout<<0<<" ";
                
            else
                cout<<r - l - sum + 1<<" ";
            
            
            
        }
        cout<<endl;
        
     
    }
	return 0;
}
