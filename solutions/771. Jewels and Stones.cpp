class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int counter=0;
        set<char> s;
        for (int i=0; i<jewels.length();i++)
            s.insert(jewels[i]);
        for (auto x:stones)
        {
            if (s.find(x)!=s.end())
                counter++;
        }
        return counter;
    }
};
