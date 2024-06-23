//! https://github.com/Prakhar-002/LEETCODE

int satisfiedCustomers(int* customers, int customersSize, int* grumpy, int grumpySize, int start, int end, int initialSatisfied){
      // calculate more satisfied customer if owner use themselves power
      // for a period of time which is start to end 
      int satisfied = initialSatisfied;
      for (int i = start; i <= end; i++) {
            // we'll only add those part in which their power used
            // means if in our window there was only 0 then on applying power there will be no change
            // and if there was 1 then it will make changes to satisfied customers
            if (grumpy[i] == 1) {
                  satisfied += customers[i];
            }
      }

      return satisfied;
}

int maxSatisfied(int* customers, int customersSize, int* grumpy, int grumpySize, int minutes) {
      // sliding window will start from 0 to minutes - 1
      int startWindow = 0;
      int endWindow = minutes - 1;
      // max satisfied
      int maxSatisfied = 0;

      // counting initial satisfied customer when our bookstore owner was not grumpy
      int initialSatisfied = 0;

      for (int i = 0; i < customersSize; i++) {
            if (grumpy[i] == 0) {
                  initialSatisfied += customers[i];
            }
      }

      // check for every window we can have with length minutes
      while (endWindow < customersSize) {
            // taking max of every window we could have
            maxSatisfied = fmax(maxSatisfied, satisfiedCustomers(customers, customersSize, grumpy, grumpySize, startWindow++, endWindow++, initialSatisfied));
      }

      return maxSatisfied;
}