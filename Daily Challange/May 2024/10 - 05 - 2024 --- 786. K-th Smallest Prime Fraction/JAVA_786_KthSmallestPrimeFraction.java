class Solution {

      public int[] helperFun(int arr[], int n, double mid) {
            int j = 1, total = 0, num = 0, den = 0;
            double maxFrac = 0;
            for (int i = 0; i < n; ++i) {
                  while (j < n && arr[i] >= arr[j] * mid) {
                        ++j;
                  }

                  total += n - j;

                  if (j < n && maxFrac < arr[i] * 1.0 / arr[j]) {
                        maxFrac = arr[i] * 1.0 / arr[j];
                        num = i;
                        den = j;
                  }
            }

            return new int[] { total, arr[num], arr[den] };
      }

      public int[] kthSmallestPrimeFraction(int[] arr, int k) {
            int n = arr.length;
            double left = 0, right = 1.0, mid;

            while (left <= right) {
                  mid = left + (right - left) / 2;

                  int ans[] = helperFun(arr, n, mid);

                  if (ans[0] == k) {
                        return new int[] { ans[1], ans[2] };
                  }

                  if (ans[0] > k) {
                        right = mid;
                  } else {
                        left = mid;
                  }
            }

            return null;
      }
}