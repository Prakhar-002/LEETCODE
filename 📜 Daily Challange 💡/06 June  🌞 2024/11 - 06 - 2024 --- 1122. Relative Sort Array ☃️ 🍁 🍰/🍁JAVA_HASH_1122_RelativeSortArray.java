import java.util.*;

class Solution {
      public int[] relativeSortArray(int[] arr1, int[] arr2) {

            HashMap<Integer, Integer> arr1HashMap = new HashMap<>();

            Set<Integer> arr2Set = new HashSet<>();

            for (int element : arr2) {
                  arr2Set.add(element);
            }

            ArrayList<Integer> al = new ArrayList<>();

            for (int n : arr1) {

                  if (!arr2Set.contains(n)) {
                        al.add(n);
                  } 

                  arr1HashMap.put(n, arr1HashMap.getOrDefault(n, 0) + 1);
            }

            Collections.sort(al);

            int res[] = new int[arr1.length];

            int k = 0;

            for (int n : arr2) {
                  for (int i = 0; i < arr1HashMap.get(n); i++) {
                        res[k++] = n;
                  }
            }

            for(int i = 0; i < al.size(); i++){
                  res[k++] = al.get(i);
            }
            
            return res;
      }
}