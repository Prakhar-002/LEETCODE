#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER 432

# ? ⌚ Time complexity ➺ O(1)

# ? 🧺 Space complexity ➺ O(n) 👉🏻 n : Number of keys

class AllOne:
      # Bucket class to represent a node in the doubly linked list
      class Bucket:
            def __init__(self, count):
                  # Stores the frequency of the keys in this bucket
                  self.count = count           
                  # A set of keys that have this count
                  self.keys = set()            
                  # Pointer to the previous bucket in the doubly linked list
                  self.prev = None             
                  # Pointer to the next bucket in the doubly linked list
                  self.next = None             

      def __init__(self):
            # Initialize the AllOne data structure
            # A dictionary mapping keys to their respective counts
            self.key_count = {}  
            # A dictionary mapping counts to their corresponding Bucket nodes
            self.count_buckets = {}  
            # Create dummy head and tail nodes for the doubly linked list
            # Dummy head with a very low count (negative infinity)
            self.head = self.Bucket(float('-inf'))  
            # Dummy tail with a very high count (positive infinity)
            self.tail = self.Bucket(float('inf'))   
            # Connect head to tail initially
            self.head.next = self.tail              
            # Connect tail back to head
            self.tail.prev = self.head              

      # Helper function to remove a bucket from the doubly linked list
      def _remove_bucket(self, bucket):
            # Get the previous bucket
            prev_bucket = bucket.prev               
            # Get the next bucket
            next_bucket = bucket.next               
            # Bypass the current bucket by connecting the previous to the next
            prev_bucket.next = next_bucket          
            # Set the next bucket's previous pointer to the previous bucket
            next_bucket.prev = prev_bucket          
            # Remove the bucket from the count-to-bucket map
            del self.count_buckets[bucket.count]    

      # Helper function to add a new bucket after a given previous bucket
      def _add_bucket_after(self, new_bucket, prev_bucket):
            # Get the next bucket after the previous one
            next_bucket = prev_bucket.next          
            # Link the new bucket's previous pointer to the given bucket
            new_bucket.prev = prev_bucket           
            # Link the new bucket's next pointer to the next bucket
            new_bucket.next = next_bucket           
            # Update the previous bucket's next pointer to the new bucket
            prev_bucket.next = new_bucket           
            # Update the next bucket's previous pointer to the new bucket
            next_bucket.prev = new_bucket           
            # Add the new bucket to the count-to-bucket map
            self.count_buckets[new_bucket.count] = new_bucket  

      # Increment the count of a key
      def inc(self, key: str) -> None:
            # If the key is already in the data structure
            if key in self.key_count:               
                  # Get the current count of the key
                  count = self.key_count[key]         
                  # Increment the count
                  self.key_count[key] += 1            
            else:
                  # If key is not in the data structure, start with count 0
                  count = 0                           
                  # Set the key's count to 1
                  self.key_count[key] = 1             

            # Get the current bucket for the current count
            current_bucket = self.count_buckets.get(count)  
            # Get the next bucket for count + 1
            next_bucket = self.count_buckets.get(count + 1) 

            # If there is no bucket for count + 1
            if not next_bucket:                     
                  # Create a new bucket for count + 1
                  next_bucket = self.Bucket(count + 1) 
                  # Add the new bucket after the current bucket or after the head if it's a new key
                  self._add_bucket_after(next_bucket, current_bucket if current_bucket else self.head)

            # Add the key to the new bucket
            next_bucket.keys.add(key)               

            # If the current bucket exists (i.e., the key had a previous count)
            if current_bucket:                      
                  # Remove the key from the current bucket
                  current_bucket.keys.remove(key)     
                  # If the current bucket becomes empty
                  if not current_bucket.keys:         
                        # Remove the empty bucket
                        self._remove_bucket(current_bucket)  

      # Decrement the count of a key
      def dec(self, key: str) -> None:
            # Get the current count of the key
            count = self.key_count[key]             
            # Get the current bucket for this count
            current_bucket = self.count_buckets[count]  
            # Decrement the count of the key
            self.key_count[key] -= 1                

            # If the count becomes 0 after decrementing
            if self.key_count[key] == 0:            
                  # Remove the key from the key_count dictionary
                  del self.key_count[key]             

            # If the count is greater than 1 (the key should remain in the structure)
            if count > 1:                           
                  # Get the previous bucket for count - 1
                  prev_bucket = self.count_buckets.get(count - 1)  
                  # If there is no bucket for count - 1
                  if not prev_bucket:                 
                        # Create a new bucket for count - 1
                        prev_bucket = self.Bucket(count - 1)  
                        # Add the new bucket in the list
                        self._add_bucket_after(prev_bucket, current_bucket.prev)  
                        # Add the key to the previous bucket
                  prev_bucket.keys.add(key)           

            # Remove the key from the current bucket
            current_bucket.keys.remove(key)         
            # If the current bucket becomes empty
            if not current_bucket.keys:             
                  # Remove the empty bucket
                  self._remove_bucket(current_bucket) 

      # Get one of the keys with the maximum count
      def getMaxKey(self) -> str:
            # If there are no keys in the structure (i.e., only dummy head and tail)
            if self.tail.prev == self.head:         
                  # Return an empty string
                  return ""                           
                  # Return any key from the bucket just before the tail (max count)
            return next(iter(self.tail.prev.keys))  

      # Get one of the keys with the minimum count
      def getMinKey(self) -> str:
            # If there are no keys in the structure (i.e., only dummy head and tail)
            if self.head.next == self.tail:         
                  # Return an empty string
                  return ""                         
                  # Return any key from the bucket just after the head (min count)  
            return next(iter(self.head.next.keys))  
