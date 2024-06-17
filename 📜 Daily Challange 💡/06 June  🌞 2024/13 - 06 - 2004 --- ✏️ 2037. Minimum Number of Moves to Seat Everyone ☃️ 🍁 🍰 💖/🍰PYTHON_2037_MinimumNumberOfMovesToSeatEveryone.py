class Solution:
      def minMovesToSeat(self, seats: List[int], students: List[int]) -> int:
            # Sort the both arrays
            seats.sort()
            students.sort()

            moves = 0

            for i in range(len(seats)):
                  # Take the abs diff of every student[i] and seats[i]
                  moves += abs(seats[i] - students[i])


            return moves 