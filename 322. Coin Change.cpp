class Solution {
public:
    int mem[13][100005];
    int inf=1e9;

    int solve(vector<int>& coins, int amount, int i) {
        if (amount < 0) return inf;
        int n = coins.size();

        if (i == n) {
            if (amount == 0) return 0;
            return inf;
        }

        if (mem[i][amount] != -1) {
            return mem[i][amount];
        }

        int take = 1+solve(coins, amount - coins[i], i);
        int dont_take = solve(coins, amount, i + 1);

        
        mem[i][amount] = min(take,dont_take);
        return mem[i][amount];
    }

    int coinChange(vector<int>& coins, int amount) {
        for (int i = 0; i < 13; ++i) {
            for (int j = 0; j < 100005; ++j) {
                mem[i][j] = -1;
            }
        }


        int ans=solve(coins, amount, 0);
        if (ans==inf) ans=-1;
        return ans;
    }
};
