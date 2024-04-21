class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int>v;
        for(int i=1;i<=n;i++)
        {
            v.push_back(i);
        }
        while(k!=1)
        {
            k--;
            next_permutation(v.begin(),v.end());
        }
        string s="";
        for(auto i:v)
        {
            s=s+to_string(i);
        }
        return s;
    }
};