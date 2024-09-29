//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 432

// ? ⌚ Time complexity ➺ O(1)

// ? 🧺 Space complexity ➺ O(n) 👉🏻 n : Number of keys

import java.util.*;

class AllOne {
      // Bucket class to represent a node in the doubly linked list
      private class Bucket {
            // Stores the frequency of the keys in this bucket
            int count; 
            // A set of keys that have this count
            Set<String> keys; 
            // Pointer to the previous bucket in the doubly linked list
            Bucket prev; 
            // Pointer to the next bucket in the doubly linked list
            Bucket next; 

            Bucket(int count) {
                  this.count = count;
                  this.keys = new HashSet<>();
                  this.prev = null;
                  this.next = null;
            }
      }

      // A map mapping keys to their respective counts
      private Map<String, Integer> keyCount; 
      // A map mapping counts to their corresponding Bucket nodes
      private Map<Integer, Bucket> countBuckets; 
      // Dummy head with a very low count
      private Bucket head; 
      // Dummy tail with a very high count
      private Bucket tail; 

      public AllOne() {
            // Initialize the AllOne data structure
            keyCount = new HashMap<>();
            countBuckets = new HashMap<>();
            // Dummy head with a very low count (negative infinity)
            head = new Bucket(Integer.MIN_VALUE); 
            // Dummy tail with a very high count (positive infinity)
            tail = new Bucket(Integer.MAX_VALUE); 
            // Connect head to tail initially
            head.next = tail; 
            // Connect tail back to head
            tail.prev = head; 
      }

      // Helper function to remove a bucket from the doubly linked list
      private void removeBucket(Bucket bucket) {
            // Get the previous bucket
            Bucket prevBucket = bucket.prev; 
            // Get the next bucket
            Bucket nextBucket = bucket.next; 
            // Bypass the current bucket by connecting the previous to the next
            prevBucket.next = nextBucket; 
            // Set the next bucket's previous pointer to the previous bucket
            nextBucket.prev = prevBucket; 
            // Remove the bucket from the count-to-bucket map
            countBuckets.remove(bucket.count); 
      }

      // Helper function to add a new bucket after a given previous bucket
      private void addBucketAfter(Bucket newBucket, Bucket prevBucket) {
            // Get the next bucket after the previous one
            Bucket nextBucket = prevBucket.next; 
            // Link the new bucket's previous pointer to the given bucket
            newBucket.prev = prevBucket; 
            // Link the new bucket's next pointer to the next bucket
            newBucket.next = nextBucket; 
            // Update the previous bucket's next pointer to the new bucket
            prevBucket.next = newBucket; 
            // Update the next bucket's previous pointer to the new bucket
            nextBucket.prev = newBucket; 
            // Add the new bucket to the count-to-bucket map
            countBuckets.put(newBucket.count, newBucket); 
      }

      // Increment the count of a key
      public void inc(String key) {
            // Get the current count of the key
            int count = keyCount.getOrDefault(key, 0); 
            // Increment the count
            keyCount.put(key, count + 1); 

            // Get the current bucket for the current count
            Bucket currentBucket = countBuckets.get(count); 
            // Get the next bucket for count + 1
            Bucket nextBucket = countBuckets.get(count + 1); 

            // If there is no bucket for count + 1
            if (nextBucket == null) { 
                  // Create a new bucket for count + 1
                  nextBucket = new Bucket(count + 1); 
                  // Add the new bucket after the current bucket or after the head if it's a new key
                  addBucketAfter(nextBucket, currentBucket != null ? currentBucket : head);
            }

            // Add the key to the new bucket
            nextBucket.keys.add(key); 

            // If the current bucket exists (i.e., the key had a previous count)
            if (currentBucket != null) { 
                  // Remove the key from the current bucket
                  currentBucket.keys.remove(key); 
                  // If the current bucket becomes empty
                  if (currentBucket.keys.isEmpty()) { 
                        // Remove the empty bucket
                        removeBucket(currentBucket); 
                  }
            }
      }

      // Decrement the count of a key
      public void dec(String key) {
            // Get the current count of the key
            int count = keyCount.get(key); 
            // Get the current bucket for this count
            Bucket currentBucket = countBuckets.get(count); 
            // Decrement the count of the key
            keyCount.put(key, count - 1); 

            // If the count becomes 0 after decrementing
            if (keyCount.get(key) == 0) { 
                  // Remove the key from the keyCount map
                  keyCount.remove(key); 
            }

            // If the count is greater than 1 (the key should remain in the structure)
            if (count > 1) { 
                  // Get the previous bucket for count - 1
                  Bucket prevBucket = countBuckets.get(count - 1); 
                  // If there is no bucket for count - 1
                  if (prevBucket == null) { 
                        // Create a new bucket for count - 1
                        prevBucket = new Bucket(count - 1); 
                        // Add the new bucket in the list
                        addBucketAfter(prevBucket, currentBucket.prev); 
                  }
                  // Add the key to the previous bucket
                  prevBucket.keys.add(key); 
            }

            // Remove the key from the current bucket
            currentBucket.keys.remove(key); 
            // If the current bucket becomes empty
            if (currentBucket.keys.isEmpty()) { 
                  // Remove the empty bucket
                  removeBucket(currentBucket); 
            }
      }

      // Get one of the keys with the maximum count
      public String getMaxKey() {
            // If there are no keys in the structure (i.e., only dummy head and tail)
            if (tail.prev == head) { 
                  // Return an empty string
                  return ""; 
            }
            // Return any key from the bucket just before the tail (max count)
            return tail.prev.keys.iterator().next(); 
      }

      // Get one of the keys with the minimum count
      public String getMinKey() {
            // If there are no keys in the structure (i.e., only dummy head and tail)
            if (head.next == tail) { 
                  // Return an empty string
                  return ""; 
            }
            // Return any key from the bucket just after the head (min count)
            return head.next.keys.iterator().next(); 
      }
}
