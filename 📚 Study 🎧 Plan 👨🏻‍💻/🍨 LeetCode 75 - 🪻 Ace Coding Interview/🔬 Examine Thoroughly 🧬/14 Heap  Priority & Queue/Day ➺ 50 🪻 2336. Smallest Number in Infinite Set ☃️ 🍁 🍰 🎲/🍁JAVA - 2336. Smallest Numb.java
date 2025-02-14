
import java.util.*;

class SmallestInfiniteSet {
      TreeSet<Integer> minHeap;

      public SmallestInfiniteSet() {
            minHeap = new TreeSet<>();
      }

      public int popSmallest() { //? O(1)
            return minHeap.pollFirst();
      }

      public void addBack(int num) {
            minHeap.add(num);
      }
}
