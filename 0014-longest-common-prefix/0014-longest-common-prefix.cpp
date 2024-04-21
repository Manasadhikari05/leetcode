class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string str="";
        sort(strs.begin(),strs.end());
        int x=strs.size();
        string l=strs[0],r=strs[x-1];
        int size=min(l.size(),r.size());
        for(int i=0;i<size;i++)
        {
            if(l[i]==r[i])
            str=str+l[i];
            else
            break;
        }
        return str;

    }
};