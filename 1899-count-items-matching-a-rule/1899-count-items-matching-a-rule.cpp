class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int n=items.size();
        int count=0;
            for(auto &it:items)
            {
                if(ruleKey=="type")
                {
                    if(it[0]==ruleValue)
                    count++;
                }
                else if(ruleKey=="color")
                {
                    if(it[1]==ruleValue)
                    count++;
                }
                else if(ruleKey=="name")
                {
                    if(it[2]==ruleValue)
                    count++;
                }
            }
        
        return count;
    }
};