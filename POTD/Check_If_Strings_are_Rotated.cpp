class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        if(s1.size()!=s2.size())
        {
            return 0;
        }
        
        string s=s1+s1;
        if(s.find(s2)!=string::npos)
        {
            return 1;
        }
        return 0;
    }
};
