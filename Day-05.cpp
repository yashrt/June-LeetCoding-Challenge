class Solution {
public:
    vector<int> s;
    int sum = 0;
    Solution(vector<int>& w) {
        for(int a: w)
        {
            sum += a;
            s.push_back(sum);
        }
    }
    
    int pickIndex() {
        int temp = rand()%sum;
        auto it = upper_bound(s.begin() ,s.end(), temp) - s.begin();
        return it;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */
