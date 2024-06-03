class Solution {
public:
    int scoreOfString(string s) {
        int sum=0;
        for(int i=0;i<s.size()-1;i++)
        {
            int u=s[i],v=s[i+1];
            sum+=abs(u-v);
        }
        return sum;
    }
};