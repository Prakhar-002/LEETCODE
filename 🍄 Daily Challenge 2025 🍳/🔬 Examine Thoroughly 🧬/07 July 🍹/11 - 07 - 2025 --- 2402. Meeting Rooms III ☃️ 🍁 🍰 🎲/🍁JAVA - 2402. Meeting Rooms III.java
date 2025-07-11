//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 2402

//? ⌚ Time complexity ➺ O(m * log m + m log n) 👉🏻  n = len(nums)

//? 🧺 Space complexity ➺ O(n)

class Solution {
      public int mostBooked(int n, int[][] meetings) {
            // Array to count how many meetings each room has hosted
            var meetingCount = new int[n];

            // Min-heap for rooms currently in use
            // Each element is a pair [endTime, roomIndex]
            // Rooms are sorted by earliest end time, then by room index
            var usedRooms = new PriorityQueue<long[]>(
                        (a, b) -> a[0] != b[0] ? Long.compare(a[0], b[0]) : Long.compare(a[1], b[1]));

            // Min-heap of unused rooms available, sorted by room index
            var unusedRooms = new PriorityQueue<Integer>();
            for (int i = 0; i < n; i++) {
                  unusedRooms.offer(i); // Initially all rooms are unused
            }

            // Sort meetings by their start time, then by end time
            Arrays.sort(meetings, (a, b) -> a[0] != b[0] ? Integer.compare(a[0], b[0]) : Integer.compare(a[1], b[1]));

            // Iterate over each meeting in sorted order
            for (int[] meeting : meetings) {
                  int start = meeting[0];
                  int end = meeting[1];

                  // Free up any rooms whose meetings ended before or at the current start time
                  while (!usedRooms.isEmpty() && usedRooms.peek()[0] <= start) {
                        int room = (int) usedRooms.poll()[1]; // Get room number
                        unusedRooms.offer(room); // Mark it available again
                  }

                  if (!unusedRooms.isEmpty()) {
                        // If there's an available room, use the one with the smallest index
                        int room = unusedRooms.poll();
                        usedRooms.offer(new long[] { end, room }); // Schedule the meeting
                        meetingCount[room]++; // Increment meeting count for this room
                  } else {
                        // No room is free, so delay the meeting
                        long roomAvailabilityTime = usedRooms.peek()[0];
                        int room = (int) usedRooms.poll()[1];

                        // Push the new delayed meeting with extended end time
                        usedRooms.offer(new long[] { roomAvailabilityTime + end - start, room });
                        meetingCount[room]++; // Count the meeting for that room
                  }
            }

            // After all meetings, find the room with the most meetings
            int maxMeetingCount = 0;
            int maxMeetingCountRoom = 0;

            for (int i = 0; i < n; i++) {
                  if (meetingCount[i] > maxMeetingCount) {
                        maxMeetingCount = meetingCount[i];
                        maxMeetingCountRoom = i;
                  }
            }

            // Return the index of the room with the most meetings
            return maxMeetingCountRoom;
      }
}
