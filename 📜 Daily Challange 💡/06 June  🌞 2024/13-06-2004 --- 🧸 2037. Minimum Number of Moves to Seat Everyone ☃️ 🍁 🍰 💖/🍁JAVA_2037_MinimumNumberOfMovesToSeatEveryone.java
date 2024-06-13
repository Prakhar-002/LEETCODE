import java.util.Arrays;

class Solution {
      public int minMovesToSeat(int[] seats, int[] students) {
            Arrays.sort(seats);
            Arrays.sort(students);

            int moves = 0;

            for (int i = 0; i < students.length; i++) {
                  moves += Math.abs(students[i] - seats[i]);
            }

            return moves;
      }
}