//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 3433

//? ⌚ Time complexity ➺ O(nm + m log m log t) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

/**
 * @param {number} numberOfUsers
 * @param {string[][]} events
 * @return {number[]}
 */
var countMentions = function (numberOfUsers, events) {
      /**
       * Count mentions for each user from MESSAGE events with @mentions.
       * Users offline for 60s after OFFLINE event. Process chronologically.
       */

      // Sort events: timestamp ASC, OFFLINE before MESSAGE at same time
      events.sort((a, b) => {
            const timeA = parseInt(a[1]);  // Timestamp A
            const timeB = parseInt(b[1]);  // Timestamp B

            if (timeA !== timeB) {
                  return timeA - timeB;  // Chronological order
            }

            // Same time: OFFLINE(1) before MESSAGE(0)
            // (bIsOFFLINE - aIsOFFLINE): OFFLINE first
            return (b[0] === "MESSAGE" ? 0 : 1) - (a[0] === "MESSAGE" ? 0 : 1);
      });

      // count[i] = total mentions received by user i
      const count = new Array(numberOfUsers).fill(0);

      // nextOnlineTime[i] = earliest time user i can be online again
      const nextOnlineTime = new Array(numberOfUsers).fill(0);  // All online initially

      // Process events in chronological order
      for (const event of events) {
            const curTime = parseInt(event[1]);  // Current timestamp
            const type = event[0];               // Event type

            // Process MESSAGE events - count mentions
            if (type === "MESSAGE") {
                  const target = event[2];  // Message content/target

                  if (target === "ALL") {
                        // Mention ALL users regardless of status
                        for (let i = 0; i < numberOfUsers; i++) {
                              count[i]++;
                        }
                  }
                  else if (target === "HERE") {
                        // Mention only users online at curTime
                        for (let i = 0; i < numberOfUsers; i++) {
                              if (nextOnlineTime[i] <= curTime) {
                                    count[i]++;
                              }
                        }
                  }
                  else {
                        // Direct mentions: "@id123 @id456"
                        const users = target.split(" ");  // Split by space
                        for (const user of users) {
                              // Extract ID: "@id123" → 123
                              const idx = parseInt(user.substring(2));
                              count[idx]++;
                        }
                  }
            }
            // Process OFFLINE events
            else {  // type === "OFFLINE"
                  const userId = parseInt(event[2]);  // User going offline
                  // User offline until curTime + 60 seconds
                  nextOnlineTime[userId] = curTime + 60;
            }
      }

      return count;
};
