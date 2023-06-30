class Solution{
public:	
		
	int isDivisible(string s){
	    int n=s.size();
	    int odd=0,even=0;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]-'0')
	        {
	            if(i%2)
	            {
	                odd++;
	            }
	            else 
	            {
	                even++;
	            }
	        }
	    }
	    if(abs(odd-even)%3==0)
	    {
	        return true;
	    }
	    return false;
	}

};
