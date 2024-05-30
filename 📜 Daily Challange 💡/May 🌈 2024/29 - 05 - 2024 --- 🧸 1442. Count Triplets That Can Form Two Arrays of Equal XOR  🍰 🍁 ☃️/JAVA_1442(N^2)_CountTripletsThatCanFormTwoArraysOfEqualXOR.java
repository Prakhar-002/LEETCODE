class Solution {
      public int countTriplets(int[] arr) {
            int triplets = 0;

            for (int i = 0; i < arr.length - 1; i++) {
                  int curXor = arr[i];
                  for (int k = i + 1; k < arr.length; k++) {
                        curXor ^= arr[k];
                        if (curXor == 0) {
                              triplets += k - i;
                        }
                  }
            }

            return triplets;
      }
}