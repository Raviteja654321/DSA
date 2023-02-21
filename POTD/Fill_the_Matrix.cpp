//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int minIteration(int n, int m, int x, int y){    
        vector<vector<int>>a(n,vector<int>(m,0));
        a[x-1][y-1]=1;
        queue<pair<pair<int,int>,int>>q;
        int ans=0;
        q.push({{x-1,y-1},0});
        vector<int>xcor={1,0,-1,0};
        vector<int>ycor={0,-1,0,1};
        while(!q.empty())
        {
            int row=q.front().first.first;
            int col=q.front().first.second;
            int cnt=q.front().second;
            ans=cnt;
            for(int i=0;i<4;i++)
            {
                int newrow=row+xcor[i];
                int newcol=col+ycor[i];
                if(newrow>=0 && newcol>=0 && newrow<n && newcol<m && a[newrow][newcol]==0)
                {
                    a[newrow][newcol]=1;
                    q.push({{newrow,newcol},cnt+1});
                }
            }
            q.pop();
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, M, x, y;
        cin >> N >> M;
        cin >> x >> y;
        
        Solution ob;
        cout << ob.minIteration(N, M, x, y) << endl;
    }
    return 0; 
} 
// } Driver Code Ends
