var satisfiedCustomers = function(customers, grumpy, start, end, initialSatisfied){
      // calculate more satisfied customer if owner use themselves power
      // for a period of time which is start to end 
      let satisfied = initialSatisfied;
      for (let i = start; i <= end; i++) {
            // we'll only add those part in which their power used
            // means if in our window there was only 0 then on applying power there will be no change
            // and if there was 1 then it will make changes to satisfied customers
            if (grumpy[i] === 1) {
                  satisfied += customers[i];
            }
      }

      return satisfied;
}

var maxSatisfied = function(customers, grumpy, minutes) {
      // sliding window will start from 0 to minutes - 1
      let startWindow = 0;
      let endWindow = minutes - 1;
      // max satisfied
      let maxSatisfied = 0;

      // counting initial satisfied customer when our bookstore owner was not grumpy
      let initialSatisfied = 0;

      for (let i = 0; i < customers.length; i++) {
            if (grumpy[i] === 0) {
                  initialSatisfied += customers[i];
            }
      }

      // check for every window we can have with length minutes
      while (endWindow < customers.length) {
            // taking max of every window we could have
            maxSatisfied = Math.max(maxSatisfied, satisfiedCustomers(customers, grumpy, startWindow++, endWindow++, initialSatisfied));
      }

      return maxSatisfied;
};