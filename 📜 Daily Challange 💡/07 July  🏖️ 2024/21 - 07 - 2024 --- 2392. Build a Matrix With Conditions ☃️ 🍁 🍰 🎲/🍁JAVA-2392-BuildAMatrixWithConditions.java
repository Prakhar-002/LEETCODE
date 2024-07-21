//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 2392

//? ⌚ Time complexity -> O(K ^ 2) 👉 Given 

//? 🧺 Space complexity -> O(K ^ 2) 👉 Making output Matrix

// https://github.com/Prakhar-002/LEETCODE

// ⌚ Time complexity ->  O(K ^ 2) -> Given 

//  Space complexity -> O(K ^ 2) -> Making output Matrix

import java.util.*;

class Solution {
    public int[][] buildMatrix(int k, int[][] rowConditions, int[][] colConditions) {
        // get the actual order of row and column for value 1 to k
        List<Integer> rowOrder = topologicalSort(rowConditions, k);
        List<Integer> colOrder = topologicalSort(colConditions, k);

        // if we got an empty order then we got a cycle
        if (rowOrder.isEmpty() || colOrder.isEmpty()) {
            // so return empty array as per que
            return new int[0][0];
        }

        // make the hashMap for row order and column order
        // for less complexity to find the exact position
        // map number to it's index
        Map<Integer, Integer> rowOrderMap = new HashMap<>();
        for (int i = 0; i < rowOrder.size(); i++) {
            rowOrderMap.put(rowOrder.get(i), i);
        }

        Map<Integer, Integer> colOrderMap = new HashMap<>();
        for (int i = 0; i < colOrder.size(); i++) {
            colOrderMap.put(colOrder.get(i), i);
        }

        int[][] matrix = new int[k][k];

        for (int num = 1; num <= k; num++) {
            // find the exact position of our number
            int row = rowOrderMap.get(num);
            int col = colOrderMap.get(num);
            // assign it in our matrix
            matrix[row][col] = num;
        }

        return matrix;
    }

    private boolean dfs(int src, Map<Integer, List<Integer>> adjacency, Set<Integer> visit, Set<Integer> path,
            List<Integer> order) {
        // if src is already in our path return false
        // cause this will make cycle on our graph
        if (path.contains(src)) {
            return false;
        }

        // if we already visited our src return false
        if (visit.contains(src)) {
            return true;
        }

        // we did not visit our src till now
        // add to visit and path
        visit.add(src);
        path.add(src);

        // call dfs for every Neighbor of our source node
        for (int neighbor : adjacency.getOrDefault(src, new ArrayList<>())) {
            // calling dfs and if we got false somewhere return false
            if (!dfs(neighbor, adjacency, visit, path, order)) {
                return false;
            }
        }

        // remove src from path cause we backward now
        path.remove(src);
        // append in our order
        order.add(src);

        return true;
    }

    private List<Integer> topologicalSort(int[][] edges, int k) {
        // first make adjacency list for edges
        Map<Integer, List<Integer>> adjacency = new HashMap<>();
        for (int[] edge : edges) {
            int src = edge[0];
            int dest = edge[1];
            // in the src append the dest
            // make a hashmap for src : every dest(all Neighbor of src)
            adjacency.computeIfAbsent(src, key -> new ArrayList<>()).add(dest);
        }

        // make two HashSet
        Set<Integer> visit = new HashSet<>();
        Set<Integer> path = new HashSet<>();

        // array that will tells us the actual position
        // where we can put our k elem in rowWise and colWise
        List<Integer> order = new ArrayList<>();

        // we will run dfs for every src(for whole graph) we have
        for (int src = 1; src <= k; src++) {
            // run dfs for every val 1 to k
            // if we got invalid condition like cycle
            // we will return empty list as per que description
            if (!dfs(src, adjacency, visit, path, order)) {
                return new ArrayList<>();
            }
        }

        // if everything is okay then return the rev of our order
        Collections.reverse(order);
        return order;
    }
}
