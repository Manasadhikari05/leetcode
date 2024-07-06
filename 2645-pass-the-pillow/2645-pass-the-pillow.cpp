class Solution {
public:
    int passThePillow(int n, int time) {
        int count=1;
        int counter=0;
        while(time)
        {
            if(count==n)
            counter=1;
            else if(count==1)
            counter=0;

            if(counter==1)
            count--;
            else count++;

            time--;
        }
        return count;
    }
};