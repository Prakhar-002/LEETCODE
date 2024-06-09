class Solution {
      public int numSteps(String s) {
            int steps = 0; // Count total steps
            int carry = 0; 

            for (int i = s.length() - 1 ; i >= 1; i--) {
                  // 1 + carry(1) = 2 means 10 hence digit % 2 = 0
                  // 0 + carry(1) = 1 
                  // 1 + carry(0) = 1
                  int digit = ((s.charAt(i) - '0') + carry) % 2; 

                  // If actual digit after adding our carry == 1
                  if (digit == 0) {
                        steps++;
                  } else {  // If actual digit after adding our carry == 0 
                        carry = 1;
                        steps += 2;
                  }
            }

            return steps + carry;
      }
}