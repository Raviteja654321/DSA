class Solution{
    public:
    bool is_possible_to_get_seats(int n, int m, vector<int>& seats){
        for(int i=0;i<m;i++)
        {
            if(seats[i]==1)
            {
                if(i>=1)
                {
                    seats[i-1]=2;
                }
                if(i<m-1 && seats[i+1]==0)
                {
                    seats[i+1]=2;
                }
            }
        }
        int count=0;
        for(int i=0;i<m;i++)
        {
            if(seats[i]==0)
            {
                // if(i>=1)
                // {
                //     seats[i-1]=2;
                // }
                count++;
                if(i<m-1)
                {
                    seats[i+1]=2;
                }
            }
        }
        return count>=n;
    }
};
