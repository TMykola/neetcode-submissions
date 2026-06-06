class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());

        while (left < right) {
            int value = 0;
            int k = (left + right) / 2;
            for(int i : piles){
                value += (i + k - 1) / k;
            }
            if (value > h) left = k + 1 ;
            else right = k;
            
        }
        return left;

    }
};

