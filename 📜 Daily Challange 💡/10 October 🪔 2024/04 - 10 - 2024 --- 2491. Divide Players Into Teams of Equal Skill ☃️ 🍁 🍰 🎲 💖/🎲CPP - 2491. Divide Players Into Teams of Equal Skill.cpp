//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2491

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(skill)

//? 🧺 Space complexity ➺ O(1)

#include <vector>
#include <algorithm>
using namespace std; 

class Solution {
public:
      long long dividePlayers(vector<int>& skill) {
            // array is sorted in non-decreasing order
            sort(skill.begin(), skill.end());

            // to store the sum of the products of paired skills
            long long chemistry = 0;

            // pointers initialized to the start and end of the sorted array
            int weak = 0, strong = skill.size() - 1;

            // `maxSkill` used to ensure all pairs have the same sum.
            long long maxSkill = skill[weak] + skill[strong];

            // loop runs until the `weak` index is less than the `strong` index
            while (weak < strong) {
                  // if the sum of the current weakest and strongest skills not equals `maxSkill`
                  if (skill[weak] + skill[strong] != maxSkill) {
                        // returns `-1` indicating it's impossible to form such pairs
                        return -1;
                  } 

                  // Adds the product of `skill[weak]` and `skill[strong]` to `chemistry`
                  // Moves the `weak` pointer to higher skill and the `strong` pointer to lower skill
                  chemistry += static_cast<long long>(skill[weak++]) * skill[strong--];
            }

            // returns the computed `chemistry`
            return chemistry;
      }
};

//!------------------------------------------------------------------

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(skill)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <unordered_map>
#include <numeric>

class Solution {
public:
      long long dividePlayers(vector<int>& skill) {
            // calculate the sum of all skill levels
            long long total = accumulate(skill.begin(), skill.end(), 0LL);

            // if the total skill points can not be evenly divided into pairs
            if ((2 * total) % skill.size()) {
                  // return -1 
                  return -1;
            }

            // create a map that maps each distinct skill level 
            // to the number of times it appears
            unordered_map<int, int> count;
            for (int s : skill) {
                  count[s]++;
            }

            // calculates the target sum for each pair of players' skills
            int target = (2 * total) / skill.size();
            // used to keep track of the sum of products of skill levels
            long long chemistry = 0;

            // iterates through each skill level `s` in the vector `skill`
            for (int s : skill) {
                  //  If the current skill `s` has already been completely paired off
                  if (count[s] == 0) {
                        // skip to the next iteration
                        continue;
                  }

                  // Calculates required skill level of player to pair with the current player
                  int diff = target - s;

                  //  If there is no player with the required complementary skill level `diff`
                  if (count[diff] == 0) {
                        //  it means a pair cannot be formed, so the method returns `-1`
                        return -1;
                  }

                  // their chemistry is added to the total `chemistry`
                  chemistry += static_cast<long long>(s) * diff;
                  // Decreases the count of the current skill
                  count[s]--;
                  // Decreases the count of the complementary skill
                  count[diff]--;
            }

            return chemistry;
      }
};

