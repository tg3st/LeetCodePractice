class Solution {
public:
    int hammingWeight(int n) {
        
        int out = 0;
        while (n != 0) {
            if ((n & 1) == 1) out++;

            n = n >> 1;
        }
    }
};

class Solution {
public:
    int hammingWeight(uint32_t n) {
        unsigned int count = 0;

        while(n) {
            ++count;
            // unset rightmost set bit
            n = (n & (n - 1));
        }
        
        return count;
    }
};
