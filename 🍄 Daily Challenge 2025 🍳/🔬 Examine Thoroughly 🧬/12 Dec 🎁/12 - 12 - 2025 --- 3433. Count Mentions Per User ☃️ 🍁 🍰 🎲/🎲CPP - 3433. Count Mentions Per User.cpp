//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3433

//? ⌚ Time complexity ➺ O(nm + m log m log t) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
      vector<int> countMentions(int numberOfUsers,
                                    vector<vector<string>>& events) {
            /**
             * Count mentions for each user from MESSAGE events with @mentions.
             * Users offline for 60s after OFFLINE event. Process chronologically.
             */
            
            // count[i] = total mentions received by user i
            vector<int> count(numberOfUsers);
            
            // next_online_time[i] = earliest time user i can be online again
            vector<int> next_online_time(numberOfUsers, 0);  // Initially all online

            // Sort events: timestamp ASC, OFFLINE before MESSAGE at same time
            sort(events.begin(), events.end(),
                  [&](const vector<string>& lth, const vector<string>& rth) {
                        // Compare timestamps first
                        int lth_timestamp = stoi(lth[1]);
                        int rth_timestamp = stoi(rth[1]);
                        if (lth_timestamp != rth_timestamp) {
                              return lth_timestamp < rth_timestamp;  // Time ascending
                        }
                        
                        // Same time: OFFLINE before MESSAGE
                        if (rth[0] == "OFFLINE") {
                              return false;  // lth after rth (OFFLINE first)
                        }
                        return true;  // lth before rth
                  });

            // Process events in chronological order
            for (auto&& event : events) {
                  int cur_time = stoi(event[1]);  // Current timestamp
                  
                  // Process MESSAGE events - count mentions
                  if (event[0] == "MESSAGE") {
                        const string& message = event[2];
                        
                        if (message == "ALL") {
                              // Mention ALL users regardless of status
                              for (int i = 0; i < numberOfUsers; i++) {
                                    count[i]++;
                              }
                        } 
                        else if (message == "HERE") {
                              // Mention only online users at cur_time
                              for (int i = 0; i < numberOfUsers; i++) {
                                    if (next_online_time[i] <= cur_time) {
                                          count[i]++;
                                    }
                              }
                        } 
                        else {
                              // Parse direct mentions: "@id123 @id456"
                              int idx = 0;
                              for (int i = 0; i < message.size(); i++) {
                                    // Extract digits after "id"
                                    if (isdigit(message[i])) {
                                          idx = idx * 10 + (message[i] - '0');
                                    }
                                    // End of number: space or end of string
                                    if (i + 1 == message.size() || 
                                          message[i + 1] == ' ') {
                                          count[idx]++;  // Count mention
                                          idx = 0;       // Reset for next ID
                                    }
                              }
                        }
                  } 
                  // Process OFFLINE events
                  else {  // event[0] == "OFFLINE"
                        int user_id = stoi(event[2]);  // User going offline
                        // User offline until cur_time + 60 seconds
                        next_online_time[user_id] = cur_time + 60;
                  }
            }
            
            return count;
      }
};
