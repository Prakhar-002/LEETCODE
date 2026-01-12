//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER Quest Software Design L5 Q1

//? ⌚ Time complexity ➺ O(log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class RangeModule {
public:
      RangeModule() {}

      void addRange(int left, int right) {
            /**
             * Add [left, right) to intervals, merging overlapping intervals
             * Uses set<pair<start,end>> sorted by START time
             */
            // Find first interval starting > left (upper_bound({left, INT_MAX}))
            auto l = invals.upper_bound({left, INT_MAX});
            
            // Check previous interval (might overlap from left side)
            if (l != invals.begin()) {
                  l--;
                  if (l->second < left) l++;  // No overlap, move forward
            }
            
            // Find first interval starting > right
            auto r = invals.upper_bound({right, INT_MAX});
            
            // Merge all intervals [l, r)
            if (l != r) {
                  // Expand bounds to cover all merged intervals
                  left = min(left, l->first);
                  right = max(right, (--r)->second);  // r-- to get last interval before upper_bound
                  
                  // Erase merged intervals [l, r)
                  invals.erase(l, ++r);
            }
            
            // Insert merged interval
            invals.insert({left, right});
      }

      bool queryRange(int left, int right) {
            /**
             * Check if [left, right) is completely covered by some interval
             */
            // Find first interval starting > left
            auto it = invals.upper_bound({left, INT_MAX});
            
            // Check previous interval covers [left, right)
            if (it == invals.begin()) return false;
            it--;
            
            return it->second >= right;  // end >= right means covers [left, right)
      }

      void removeRange(int left, int right) {
            /**
             * Remove [left, right) from all intervals, splitting as needed
             */
            // Find overlapping intervals [l, r) - same logic as addRange
            auto l = invals.upper_bound({left, INT_MAX});
            auto r = invals.upper_bound({right, INT_MAX});
            
            if (l != invals.begin()) {
                  l--;
                  if (l->second < left) l++;
            }
            
            if (l == r) return;  // No overlapping intervals
            
            // Find bounds of merged region to split
            int l1 = min(left, l->first);      // Original left extent
            int r1 = max(right, (--r)->second); // Original right extent
            
            // Remove overlapping intervals
            invals.erase(l, ++r);
            
            // Add back leftover parts
            if (l1 < left) 
                  invals.insert({l1, left});    // Left fragment
            if (right < r1) 
                  invals.insert({right, r1});   // Right fragment
      }

private:
      // set<pair<start,end>> automatically sorted by START time
      // Non-overlapping intervals maintained invariant
      set<pair<int, int>> invals;
};
