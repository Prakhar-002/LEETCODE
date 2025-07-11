//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2402

//? ⌚ Time complexity ➺ O(m * log m + m log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {
public:
      int mostBooked(int n, vector<vector<int>>& meetings) {
            // Sort meetings by start time
            sort(meetings.begin(), meetings.end());

            vector<int> count(n, 0); // count[i] = number of meetings room i has hosted

            // Min-heap for available rooms (by room number)
            priority_queue<int, vector<int>, greater<int>> available;
            for (int i = 0; i < n; i++) available.push(i);

            // Min-heap for rooms in use: {end_time, room_number}
            priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<>> inUse;

            for (auto& meeting : meetings) {
                  int start = meeting[0], end = meeting[1];

                  // Free all rooms whose meetings have ended before current start
                  while (!inUse.empty() && inUse.top().first <= start) {
                        available.push(inUse.top().second);
                        inUse.pop();
                  }

                  if (!available.empty()) {
                        int room = available.top(); available.pop();
                        inUse.emplace(end, room);
                        count[room]++;
                  } else {
                        // Delay this meeting to the earliest room free time
                        auto [readyTime, room] = inUse.top(); inUse.pop();
                        inUse.emplace(readyTime + (end - start), room);
                        count[room]++;
                  }
            }

            // Find room with maximum meetings
            int maxRoom = 0;
            for (int i = 1; i < n; i++) {
                  if (count[i] > count[maxRoom]) {
                        maxRoom = i;
                  }
            }

            return maxRoom;
      }
};
