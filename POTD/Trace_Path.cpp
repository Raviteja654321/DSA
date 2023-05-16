class Solution{
public:
    int isPossible(int n, int m, string s){
        int max_hor=0;
        int min_hor=0;
        int hor=0;
        int max_ver=0;
        int min_ver=0;
        int ver=0;
        int size=s.size();
        for(int i=0;i<size;i++)
        {
            if(s[i]=='L')
            {
                hor--;
            }
            else if(s[i]=='R')
            {
                hor++;
            }
            else if(s[i]=='U')
            {
                ver++;
            }
            else 
            {
                ver--;
            }
            max_hor=max(max_hor,(hor));
            min_hor=min(min_hor,hor);
            max_ver=max(max_ver,(ver));
            min_ver=min(min_ver,ver);
        }
        if(max_hor-min_hor+1>m || max_ver-min_ver+1>n)
        {
            return 0;
        }
        return 1;
    }
};
