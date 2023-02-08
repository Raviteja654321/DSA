
class Solution{
  public:
  vector<long long int> countZero(int n, int k, vector<vector<int>>& a){
      int row[100002] = {0};
      int col[100002] = {0};
      int rc=0,cc=0;
      vector<long long int> ans;
      long long int temp=n*n;
      for(int i=0;i<k;i++)
      {
          if(row[a[i][0]] && col[a[i][1]])
          {
                ans.push_back(temp);
          }
          else if(row[a[i][0]])
          {
              col[a[i][1]]=1;
              cc++;
              temp=temp-n+rc;
              ans.push_back(temp);   
          }
          else if(col[a[i][1]])
          {
              row[a[i][0]]=1;
              rc++;
              temp=temp-n+cc;
              ans.push_back(temp);
          }
          else 
          {
              row[a[i][0]]=1;
              col[a[i][1]]=1;
              rc++;
              cc++;
              temp=temp-n+cc;
              temp=temp-n+rc;
              temp--;
              ans.push_back(temp);
          }
      }
      return ans;
  }
};
