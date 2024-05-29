var numSteps = function(s) {
      let steps = 0

      let carry = 0

      for(let i = s.length - 1; i >= 1; i--){
            // 1 + carry(1) = 2 means 10 hence digit % 2 = 0
            // 0 + carry(1) = 1 
            // 1 + carry(0) = 1
            let digit = ((s.charAt(i).charCodeAt(0) - '0'.charCodeAt(0)) + carry) % 2

            // If actual digit after adding our carry == 1
            if (digit == 0) {
                  steps++;
            } else { // If actual digit after adding our carry == 0 
                  carry = 1;
                  steps += 2;
            }
      }

      return steps + carry
};