class Solution {
  public:
    int distributeTicket(int n, int k) {
        int l=1,r=n,f=1;
        while(l<=r){
            if(f){
                if(l+k<r)l+=k;
                else return r;
            }
            else{
                if(r-k>l)r-=k;
                else return l;
            }
            f=!f;
        }
        return 0;
    }
};
