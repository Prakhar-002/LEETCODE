class Solution{
public:
      int minMovesToSeat(vector<int> &seats, vector<int> &students){
            // Sort the both arrays
            sort(seats.begin(), seats.end());
            sort(students.begin(), students.end());

            int moves = 0;

            for (int i = 0; i < students.size(); i++){
                  // Take the abs diff of every student[i] and seats[i]
                  moves += abs(students[i] - seats[i]);
            }

            return moves;
      }
};