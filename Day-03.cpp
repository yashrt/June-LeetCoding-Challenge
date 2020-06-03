class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int minCost = 0;
        int N = costs.size() / 2;
        for (int i = 0; i < 2 * N; i++)
            minCost += costs[i][0];

        vector<int> diff(2*N);
        
        for (int i = 0; i < 2 * N; i++)
            diff[i] = costs[i][1] - costs[i][0];

        sort(diff.begin(), diff.end());
        
        for (int i = 0; i < N; i++)
            minCost += diff[i];

        return minCost;
    }
};
