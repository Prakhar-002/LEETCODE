var minMovesToSeat = function(seats, students) {
      seats.sort((a, b) => a - b)
      students.sort((a, b) => a - b)

      let moves = 0

      for (let i = 0; i < seats.length; i++) {
            moves += Math.abs(students[i] - seats[i]);
      }

      return moves;
};