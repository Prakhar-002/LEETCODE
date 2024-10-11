//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 1942

//? ⌚ Time complexity ➺ O(n log n) 👉🏻  n = len(times)

//? 🧺 Space complexity ➺ O(n)

var smallestChair = function (times, targetFriend) {
      // Create a list to store arrival time, leaving time, and friend index
      const timesList = times.map((time, i) => [...time, i]);

      // Sort the list based on arrival time
      timesList.sort((a, b) => a[0] - b[0]);

      // Priority queue to store used chairs (leaving time, chair number)
      // Min heap based on leaving time
      const usedChair = new MinPriorityQueue({ priority: x => x[0] });

      // Priority queue to store available chairs
      // Min heap to always get the smallest chair number
      const availableChair = new MinPriorityQueue();

      // Initialize available chairs with numbers from 0 to times.length - 1
      for (let i = 0; i < times.length; i++) {
            availableChair.enqueue(i);
      }

      // Iterate through the sorted times list
      for (const [arrivalTime, leavingTime, idx] of timesList) {
            // Free up chairs that are no longer in use
            // Check if any friend has left before or at the current arrival time
            while (!usedChair.isEmpty() && usedChair.front().element[0] <= arrivalTime) {
                  const [, chair] = usedChair.dequeue().element;
                  // Make the chair available again
                  availableChair.enqueue(chair);
            }

            // Assign the smallest available chair
            const chair = availableChair.dequeue().element;

            // Mark the chair as used by adding it to the usedChair queue
            usedChair.enqueue([leavingTime, chair]);

            // If this is the target friend, return the assigned chair
            if (idx === targetFriend) {
                  return chair;
            }
      }

      // This line should never be reached if the input is valid
      return -1;
};