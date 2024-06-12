class Solution {
  public:
    int countNumberswith4(int n) {
    int count = 0;
    for (int i = 1; i <= n; ++i) {
        int num = i;
        while (num > 0) {
            if (num % 10 == 4) {
                ++count;
                break; 
            }
            num /= 10;
        }
     }
     return count;
    }
};
