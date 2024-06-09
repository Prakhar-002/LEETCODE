var expect = function (val) {
      const toBe = (num) => {
            if (val === num) {
                  return true;
            } else {
                  throw new Error("Not Equal");
            }
      }

      const notToBe = (num) => {
            if (val !== num) {
                  return true;
            } else {
                  throw new Error("Equal");
            }
      }

      return {
            toBe,
            notToBe
      }
};