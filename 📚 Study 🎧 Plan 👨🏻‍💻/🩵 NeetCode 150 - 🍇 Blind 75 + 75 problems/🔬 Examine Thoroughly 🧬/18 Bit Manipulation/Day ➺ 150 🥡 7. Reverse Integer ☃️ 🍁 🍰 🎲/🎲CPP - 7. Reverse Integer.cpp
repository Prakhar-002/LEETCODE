//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 7

//? ⌚ Time complexity -> O(LogN) 👉 Number of digit in x

//? 🧺 Space complexity -> O(1)

#include <cmath>
#include <climits>
using namespace std;

class Solution{
public:
      int reverse(int x){
            int num = abs(x);
            long long rev = 0;
            while (num > 0){
                  int pop = num % 10;
                  num = num / 10;
                  rev = (rev * 10) + pop;
            }

            // for 32 bit system cause 64-bit integers does not allow
            if (rev >= INT_MIN && rev <= INT_MAX){
                  return x < 0 ? static_cast<int>(-rev) : static_cast<int>(rev);
            }
            else{
                  return 0;
            }
      }
};