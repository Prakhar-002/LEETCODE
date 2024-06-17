bool judgeSquareSum(int c) {
      // taking to pointer a star with 0
      long long st = 0;
      // end with the square root of given c we'll take the ceil value
      long long end = (long long)ceil(sqrt(c));

      // While start <= end
      while (st <= end) {
            // Calculating square
            long long square = (st * st) + (end * end);
            // If it is equal to c return TRUE
            if (square == c) {
                  return 1;
            // If it is greater than c shift end pointer to left
            } else if (square > c) {
                  end--;
            // If it is smaller than c shift start pointer to right
            } else {
                  st++;
            }
      }

      return 0;
}