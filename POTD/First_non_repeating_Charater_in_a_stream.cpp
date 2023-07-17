class Solution {
	public:
		string FirstNonRepeating(string s){
		    int n=s.size();
		    string ans="";
		    int l=0;
		    map<char,int>mp;
		    for(int r=0;r<n;r++)
		    {
		        mp[s[r]]++;
		        char ch='#';
		        while(l<=r)
		        {
		            if(mp[s[l]]==1)
		            {
		                ch=s[l];
		                break;
		            }
		            else 
		            {
		                l++;
		            }
		        }
		        ans.push_back(ch);
		    }
		    return ans;
		}
};
