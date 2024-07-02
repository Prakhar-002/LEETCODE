import java.util.*;

class Solution {

      public boolean isDivide(int n) {
            int num = n;
            while (n > 0) {
                  int rem = n % 10;
                  if (rem == 0 || num % rem != 0) {
                        return false;
                  }
                  n /= 10;  
            }

            return true;
      }

      public List<Integer> selfDividingNumbers(int left, int right) {
            ArrayList<Integer> res = new ArrayList<>();
            for (int i = left; i <= right; i++) {
                  if (isDivide(i)) {
                        res.add(i);
                  }
            }

            return res;
      }
}