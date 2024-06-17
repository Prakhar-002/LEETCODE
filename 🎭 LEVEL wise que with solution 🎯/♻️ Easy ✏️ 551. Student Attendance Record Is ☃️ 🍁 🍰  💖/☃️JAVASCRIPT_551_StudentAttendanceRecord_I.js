var checkRecord = function(s) {
      if (s.includes("LLL")) {
            return false;
      }

      let absCount = 0

      for (let i = 0; i < s.length; i++) {
            if (s.charAt(i) == 'A') {
                  absCount++;
            }

            if (absCount > 1) {
                  return false; 
            }
      }

      return true;
};