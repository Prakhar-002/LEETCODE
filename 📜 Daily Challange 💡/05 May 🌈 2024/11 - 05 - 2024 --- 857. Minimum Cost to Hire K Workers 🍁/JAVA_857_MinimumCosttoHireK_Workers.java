class Worker implements Comparable<Worker> {
      final int qualities, wage;

      public Worker(int qualities, int wage) {
            this.qualities = qualities;
            this.wage = wage;
      }

      @Override
      public int compareTo(Worker other) {
            return Integer.compare(wage * other.qualities, qualities * other.wage);
      }
}

class Solution {
      public double mincostToHireWorkers(int[] quality, int[] wage, int k) {
            int n = quality.length;
            Worker[] arr = new Worker[n];
            for (int i = 0; i < n; ++i) {
                  arr[i] = new Worker(quality[i], wage[i]);
            }
            Arrays.sort(arr);
            int qualitySum = 0;
            double res = Double.MAX_VALUE;
            PriorityQueue<Integer> q = new PriorityQueue<>();
            for (Worker worker : arr) {
                  q.add(-worker.qualities);
                  qualitySum += worker.qualities;
                  if (q.size() > k)
                        qualitySum += q.poll();
                  if (q.size() == k)
                        res = Math.min(res, (double) qualitySum * worker.wage / worker.qualities);
            }
            return res;
      }
}