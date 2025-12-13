//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3433

//? ⌚ Time complexity ➺ O(nm + m log m log t) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

import java.util.*; 

class Solution {
      public int[] countMentions(int numberOfUsers, List<List<String>> events) {
            /**
             * Count mentions for each user from MESSAGE events with @mentions.
             * Users offline for 60s after OFFLINE event. Process chronologically.
             */

            // Sort events: timestamp ASC, then MESSAGE after OFFLINE at same time
            events.sort((a, b) -> {
                  // Compare timestamps first (ascending)
                  int timeA = Integer.parseInt(a.get(1));
                  int timeB = Integer.parseInt(b.get(1));
                  if (timeA != timeB) {
                        return Integer.compare(timeA, timeB);
                  }

                  // Same timestamp: OFFLINE before MESSAGE
                  // Boolean.compare(false, true) = -1 → OFFLINE first
                  boolean aIsMessage = a.get(0).equals("MESSAGE");
                  boolean bIsMessage = b.get(0).equals("MESSAGE");
                  return Boolean.compare(aIsMessage, bIsMessage);
            });

            // count[i] = total mentions received by user i
            int[] count = new int[numberOfUsers];

            // nextOnlineTime[i] = earliest time user i can be online again
            int[] nextOnlineTime = new int[numberOfUsers]; // Initially all 0 (online)

            // Process events in chronological order
            for (List<String> event : events) {
                  int curTime = Integer.parseInt(event.get(1)); // Current timestamp
                  String type = event.get(0); // Event type

                  // Process MESSAGE events - count mentions
                  if (type.equals("MESSAGE")) {
                        String target = event.get(2); // Message content

                        if (target.equals("ALL")) {
                              // Mention ALL users regardless of online status
                              for (int i = 0; i < numberOfUsers; i++) {
                                    count[i]++;
                              }
                        } else if (target.equals("HERE")) {
                              // Mention only users online at curTime
                              for (int i = 0; i < numberOfUsers; i++) {
                                    if (nextOnlineTime[i] <= curTime) {
                                          count[i]++;
                                    }
                              }
                        } else {
                              // Direct mentions: "@id123 @id456"
                              String[] users = target.split(" "); // Split by space
                              for (String user : users) {
                                    // Extract ID: "@id123" → 123
                                    int idx = Integer.parseInt(user.substring(2));
                                    count[idx]++;
                              }
                        }
                  }
                  // Process OFFLINE events
                  else { // type == "OFFLINE"
                        int userId = Integer.parseInt(event.get(2)); // User going offline
                        // User offline until curTime + 60 seconds
                        nextOnlineTime[userId] = curTime + 60;
                  }
            }

            return count;
      }
}
