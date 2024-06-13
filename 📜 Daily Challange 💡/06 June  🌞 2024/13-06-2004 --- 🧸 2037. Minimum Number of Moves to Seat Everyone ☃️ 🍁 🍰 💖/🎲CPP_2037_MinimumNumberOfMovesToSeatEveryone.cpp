class Solution{
public:
      int minMovesToSeat(vector<int> &seats, vector<int> &students){
            sort(seats.begin(), seats.end());
            sort(students.begin(), students.end());

            int moves = 0;

            for (int i = 0; i < students.size(); i++){
                  moves += abs(students[i] - seats[i]);
            }

            return moves;
      }
};