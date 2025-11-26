

// Java version
import java.util.*;

class Solution {
      public int[] exclusiveTime(int n, List<String> logs) {
            int[] res = new int[n];
            Deque<Integer> stack = new ArrayDeque<>();
            int prevTime = 0;

            for (String log : logs) {
                  String[] parts = log.split(":");
                  int functionId = Integer.parseInt(parts[0]);
                  String type = parts[1];
                  int timestamp = Integer.parseInt(parts[2]);

                  if (type.equals("start")) {
                        // If a function is running, add elapsed time to it
                        if (!stack.isEmpty()) {
                              res[stack.peek()] += timestamp - prevTime;
                        }
                        stack.push(functionId);
                        prevTime = timestamp;
                  } else {
                        // End current function and add elapsed time (+1)
                        res[stack.pop()] += timestamp - prevTime + 1;
                        prevTime = timestamp + 1;
                  }
            }

            return res;
      }
}
