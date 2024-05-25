class Solution {
      public int numRescueBoats(int[] people, int limit) {
            Arrays.sort(people);

            int i = 0;
            int j = people.length - 1;

            int boat = 0;

            while (i <= j) {
                  // If the lighteest go with highest weighted person
                  if (people[i++] + people[j--] <= limit) {
                        i++;
                        j--;
                        boat++;
                        // or heaaviest persone go alone
                  } else {
                        j--;
                        boat++;
                  }
            }

            return boat;
      }
}