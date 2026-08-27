class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int total = n * n;
        
        int repeated = -1, missing = -1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int x = abs(grid[i][j]);
                int r = (x - 1) / n;
                int c = (x - 1) % n;

                if (grid[r][c] < 0)
                    repeated = x;
                else
                    grid[r][c] *= -1;
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] > 0) {
                    missing = i * n + j + 1;
                }
            }
        }

        return {repeated, missing};
    }
};