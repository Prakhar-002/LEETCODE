
import java.util.*;

class Solution {
      public String predictPartyVictory(String senate) {
            Deque<Character> q1 = new LinkedList<>();

            Deque<Character> q2 = new LinkedList<>();

            for (Character ch : senate.toCharArray()) {
                  q1.add(ch);
            }

            while (!q1.isEmpty()) {
                  if (q1.size() == 1) {
                        return Character.toString(q1.peek());
                  }

                  Character senator = q1.pollFirst();

                  while (!q1.isEmpty() && q1.peekLast() == senator) {
                        q2.addLast(q1.pollLast());

                        if (q1.isEmpty()) {
                              return Character.toString(senate);
                        }
                  }

                  q1.pollLast();

                  while (!q2.isEmpty()) {
                        q1.addLast(q2.pollFirst());
                  }

                  q1.addLast(senator);
            }

            return Character.toString(q1.peekFirst());
      }
}