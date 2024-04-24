class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>result;
        for(int i=0;i<words.size();i++)
        {
            string a=words[i];
            auto it=find(a.begin(),a.end(),x);
            if(it!=a.end())
            {
                result.push_back(i);
            }
        }
        return result;
    }
};