import java.util.*;

class Solution {

      public interface Subsets {
            void subSetArr(int i);
      }

      public boolean isSafe(int nums[], List<Integer> part, int j, int k) {
            for (int i = 0; i < part.size(); i++) {
                  if (Math.abs(nums[j] - part.get(i)) == k) {
                        return false;
                  }
            }

            return true;
      }

      public int count = 0;

      public int beautifulSubsets(int[] nums, int k) {
            count = 0;
            List<Integer> part = new ArrayList<>();

            Subsets sol = new Subsets() {
                  public void subSetArr(int i) {
                        if (i >= nums.length) {
                              count++;
                              return;
                        }
                        if (isSafe(nums, part, i, k)) {
                              part.add(nums[i]);
                              subSetArr(i + 1);
                              part.remove(part.size() - 1);
                        }
                        subSetArr(i + 1);
                  }
            };

            sol.subSetArr(0);
            return count - 1;
      }
}