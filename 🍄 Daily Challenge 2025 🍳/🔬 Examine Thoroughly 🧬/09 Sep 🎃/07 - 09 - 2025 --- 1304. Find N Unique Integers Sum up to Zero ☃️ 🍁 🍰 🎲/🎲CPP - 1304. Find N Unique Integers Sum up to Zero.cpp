//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1304

//? ⌚ Time complexity ➺ O(n)

//? 🧺 Space complexity ➺ O(1)

class Solution {
public:
      vector<int> sumZero(int n) {
            vector<int> arr;             //      Initialize the result vector to store integers

            //      Add pairs of (-val, val) for each value from 1 to n / 2
            for (int val = 1; val <= n / 2; val++) {
                  arr.push_back(-val);   //      Append negative value to balance positive
                  arr.push_back(val);    //      Append positive value for zero sum pairing
            }
            //      If n is odd, add 0 to ensure total sum is zero
            if (n % 2 == 1) {
                  arr.push_back(0);      //      Append zero if required
            }
            return arr;                  //      Return the vector with n integers summing to zero
      }
};
