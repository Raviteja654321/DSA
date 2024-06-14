class Solution {
  public:
    string armstrongNumber(int n) {
        int sum=0;
        int tempn=n;
        while(n)
        {
            int unit= n%10;
            sum+=pow(unit,3);
            n/=10;
        }
        if(sum==tempn)
        {
            return "true";
        }
        return "false";
    }
}
