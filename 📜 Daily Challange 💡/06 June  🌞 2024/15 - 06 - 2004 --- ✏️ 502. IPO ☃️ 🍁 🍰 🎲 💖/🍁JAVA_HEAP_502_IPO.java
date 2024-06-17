import java.util.PriorityQueue;

class Solution {
      public int findMaximizedCapital(int k, int w, int[] profits, int[] capital) {
            // making array of value that would give profit
            PriorityQueue<int[]> minCapital = new PriorityQueue<>((a, b) -> a[0] - b[0]); // min heap based on capital
            // only project we can afford
            PriorityQueue<Integer> maxProfit = new PriorityQueue<>((a, b) -> b - a); // max heap based on profit

            // Create the minCapital heap
            for (int i = 0; i < profits.length; i++) {  
                  minCapital.offer(new int[] { capital[i], profits[i] });
            } 

            // we can only iterate k times
            for (int i = 0; i < k; i++) {
                  // while our min_capital is not empty and min capital is less then w
                  while (!minCapital.isEmpty() && minCapital.peek()[0] <= w) {
                        // we take the min value from our heap by "minCapital.pole()[1]"
                        // Now we take the profit and add to our max_profit heap 
                        // cause it's capital is less than our wealth (w) se we can add the profit
                        maxProfit.offer(minCapital.poll()[1]);
                  }

                  // If we can't afford any more projects, break
                  // max_profit is empty means we don't have k iteration
                  if (maxProfit.isEmpty()) {
                        break;
                  }

                  // we'll add profit to our wealth(w)
                  w += maxProfit.poll();
            }

            return w;
      }
}
