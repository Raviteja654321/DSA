//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<string> CamelCase(int n, vector<string> d, string p) {
        vector<pair<string,string>>m;
        vector<string>v;
        for(auto i:d){
            pair<string,string>p;
            string a="";
            for(int j=0;j<i.size();j++){
                if(i[j]>=65 && i[j]<=90){
                    a+=i[j];
                }
            }
            p.first=i;
            p.second=a;
            m.push_back(p);
        }
        for(auto i:m){
            int k=p.size();
            string s=i.second.substr(0,k);
            if(s==p)v.push_back(i.first);
        }
        if(v.size()==0)return {"-1"};
        return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<string> Dictionary(N);
        for (int i = 0; i < N; i++) cin >> Dictionary[i];
        string Pattern;
        cin >> Pattern;
        Solution ob;
        vector<string> ans = ob.CamelCase(N, Dictionary, Pattern);
        sort(ans.begin(), ans.end());
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
