//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1298

//? ⌚ Time complexity ➺ O(n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {
public:
      int maxCandies(vector<int>& status, vector<int>& candies,
                        vector<vector<int>>& keys,
                        vector<vector<int>>& containedBoxes,
                        vector<int>& initialBoxes) {
            
            // Get the number of total boxes
            int n = status.size();

            // Boolean vectors to track box states
            vector<bool> can_open(n);     // can_open[i] = true if box i is openable
            vector<bool> has_box(n);      // has_box[i] = true if we possess box i
            vector<bool> used(n);         // used[i] = true if box i is already opened and processed

            // Initialize the can_open vector using the status
            for (int i = 0; i < n; ++i) {
                  can_open[i] = (status[i] == 1);            // A box is openable if status[i] == 1
            }

            // Queue to process openable boxes
            queue<int> q;

            // Variable to store total candies collected
            int ans = 0;

            // Process initialBoxes to start with
            for (int box : initialBoxes) {
                  has_box[box] = true;                       // Mark that we possess this box
                  if (can_open[box]) {                       // If the box can be opened now
                        q.push(box);                         // Add it to the queue
                        used[box] = true;                    // Mark as used
                        ans += candies[box];                 // Collect candies from it
                  }
            }

            // Start BFS to process boxes
            while (!q.empty()) {
                  int big_box = q.front();                   // Get the front box to process
                  q.pop();                                   // Remove it from the queue

                  // Process all keys found in the current box
                  for (int key : keys[big_box]) {
                        can_open[key] = true;                // Now we can open the box with this key
                        if (!used[key] && has_box[key]) {    // If we have it and it wasn't used yet
                              q.push(key);                   // Add it to the queue
                              used[key] = true;              // Mark it as used
                              ans += candies[key];           // Collect its candies
                        }
                  }

                  // Process all contained boxes inside the current box
                  for (int box : containedBoxes[big_box]) {
                        has_box[box] = true;                 // We now have this box
                        if (!used[box] && can_open[box]) {   // If it's openable and not used
                              q.push(box);                   // Add it to the queue
                              used[box] = true;              // Mark it as used
                              ans += candies[box];           // Collect its candies
                        }
                  }
            }

            // Return the total candies collected after processing
            return ans;
      }
};
