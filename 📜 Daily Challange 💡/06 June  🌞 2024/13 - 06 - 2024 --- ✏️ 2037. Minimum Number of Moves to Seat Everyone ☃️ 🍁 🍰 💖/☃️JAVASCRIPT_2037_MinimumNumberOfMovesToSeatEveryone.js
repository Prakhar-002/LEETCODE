//! https://github.com/Prakhar-002/LEETCODE


// Todo 📌 QUESTION NUMBER 2037  

var minMovesToSeat = function(seats, students) {
      // Sort the both arrays
      seats.sort((a, b) => a - b)
      students.sort((a, b) => a - b)

      let moves = 0

      for (let i = 0; i < seats.length; i++) {
            // Take the abs diff of every student[i] and seats[i]
            moves += Math.abs(students[i] - seats[i]);
      }

      return moves; 
};