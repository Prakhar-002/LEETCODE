#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 3433

#? ⌚ Time complexity ➺ O(nm + m log m log t) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

from typing import List

class Solution:
      def countMentions(
            self, numberOfUsers: int, events: List[List[str]]
      ) -> List[int]:
            """
            Count mentions for each user from MESSAGE events with @mentions.
            Users offline for 60s after OFFLINE event. Process events chronologically.
            """
            # Sort events: by timestamp ASC, then OFFLINE before MESSAGE at same time
            # This ensures OFFLINE processed before MESSAGE at same timestamp
            events.sort(key=lambda e: (int(e[1]), e[0] == "MESSAGE"))
            
            # count[i] = total mentions received by user i
            count = [0] * numberOfUsers
            
            # next_online_time[i] = earliest time user i can be online again
            next_online_time = [0] * numberOfUsers  # Initially all online

            # Process events in chronological order
            for event in events:
                  cur_time = int(event[1])  # Current timestamp
                  
                  # Process MESSAGE events - count mentions
                  if event[0] == "MESSAGE":
                        message_content = event[2]
                        
                        if message_content == "ALL":
                              # Mention ALL users regardless of online status
                              for i in range(numberOfUsers):
                                    count[i] += 1
                        
                        elif message_content == "HERE":
                              # Mention only users who are online at cur_time
                              for i, t in enumerate(next_online_time):
                                    if t <= cur_time:  # User is online
                                          count[i] += 1
                        
                        else:
                              # Direct mentions: @id123, @id456, etc.
                              for idx in message_content.split():
                                    # Extract user ID: "id123" → 123
                                    user_id = int(idx[2:])
                                    count[user_id] += 1

                  # Process OFFLINE events
                  else:  # event[0] == "OFFLINE"
                        user_id = int(event[2])  # User going offline
                        # User offline until cur_time + 60 seconds
                        next_online_time[user_id] = cur_time + 60

            return count
