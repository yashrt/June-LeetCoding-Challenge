class Solution {
public:
    static bool compare(vector<int>& a, vector<int>& b)
    {
        return a[0]>b[0] || (a[0]==b[0] &&a[1]<b[1]);
    }

    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        vector<vector<int>> res;
        sort(people.begin(), people.end(), compare);
        
        for(vector<int> temp: people)
            res.insert(res.begin()+temp[1], temp);
        return res;
    }
};
