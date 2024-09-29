//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 432

// ? ⌚ Time complexity ➺ O(1)

// ? 🧺 Space complexity ➺ O(n) 👉🏻 n : Number of keys

#include <unordered_map>
#include <unordered_set>
#include <string>
#include <limits>
using namespace std;

class AllOne {
private:

      // Bucket class to represent a node in the doubly linked list
      class Bucket {
      public:
      // Stores the frequency of the keys in this bucket
            int count;                        
            // A set of keys that have this count
            unordered_set<string> keys;  
            // Pointer to the previous bucket in the doubly linked list
            Bucket* prev;                     
            // Pointer to the next bucket in the doubly linked list
            Bucket* next;                     

            Bucket(int c) : count(c), prev(nullptr), next(nullptr) {}
      };

      // A map mapping keys to their respective counts
      unordered_map<string, int> key_count;  
      // A map mapping counts to their corresponding Bucket nodes
      unordered_map<int, Bucket*> count_buckets;  
      // Dummy head with a very low count (negative infinity)
      Bucket* head;  
      // Dummy tail with a very high count (positive infinity)
      Bucket* tail;  

      // Helper function to remove a bucket from the doubly linked list
      void _remove_bucket(Bucket* bucket) {
            // Get the previous bucket
            Bucket* prev_bucket = bucket->prev;               
            // Get the next bucket
            Bucket* next_bucket = bucket->next;               
            // Bypass the current bucket by connecting the previous to the next
            prev_bucket->next = next_bucket;                  
            // Set the next bucket's previous pointer to the previous bucket
            next_bucket->prev = prev_bucket;                  
            // Remove the bucket from the count-to-bucket map
            count_buckets.erase(bucket->count);               
            delete bucket;
      }

      // Helper function to add a new bucket after a given previous bucket
      void _add_bucket_after(Bucket* new_bucket, Bucket* prev_bucket) {
            // Get the next bucket after the previous one
            Bucket* next_bucket = prev_bucket->next;          
            // Link the new bucket's previous pointer to the given bucket
            new_bucket->prev = prev_bucket;                   
            // Link the new bucket's next pointer to the next bucket
            new_bucket->next = next_bucket;                   
            // Update the previous bucket's next pointer to the new bucket
            prev_bucket->next = new_bucket;                   
            // Update the next bucket's previous pointer to the new bucket
            next_bucket->prev = new_bucket;                   
            // Add the new bucket to the count-to-bucket map
            count_buckets[new_bucket->count] = new_bucket;    
      }

public:
      AllOne() {
            // Initialize the AllOne data structure
            
            // Create dummy head with a very low count
            head = new Bucket(numeric_limits<int>::min());  
            // Create dummy tail with a very high count
            tail = new Bucket(numeric_limits<int>::max());  
            // Connect head to tail initially
            head->next = tail;                                   
            // Connect tail back to head
            tail->prev = head;                                   
      }

      ~AllOne() {
            Bucket* current = head;
            while (current != nullptr) {
                  Bucket* next = current->next;
                  delete current;
                  current = next;
            }
      }

      // Increment the count of a key
      void inc(string key) {
            // If the key is already in the data structure
            if (key_count.find(key) != key_count.end()) {    
                  // Get the current count of the key
                  int count = key_count[key];                  
                  // Increment the count
                  key_count[key]++;                            
                  // Get the current bucket for the current count
                  Bucket* current_bucket = count_buckets[count];  
                  // Get the next bucket for count + 1
                  Bucket* next_bucket = count_buckets[count + 1]; 

                  // If there is no bucket for count + 1
                  if (next_bucket == nullptr) {               
                        // Create a new bucket for count + 1
                        next_bucket = new Bucket(count + 1);    
                        // Add the new bucket after the current bucket or after the head if it's a new key
                        _add_bucket_after(next_bucket, current_bucket ? current_bucket : head);  
                  }

                  // Add the key to the new bucket
                  next_bucket->keys.insert(key);              

                  // If the current bucket exists (i.e., the key had a previous count)
                  if (current_bucket) {                       
                        // Remove the key from the current bucket
                        current_bucket->keys.erase(key);        
                        // If the current bucket becomes empty
                        if (current_bucket->keys.empty()) {     
                              // Remove the empty bucket
                              _remove_bucket(current_bucket);     
                        }
                  }
            } else {
                  // If key is not in the data structure, set the key's count to 1
                  key_count[key] = 1;                         
                  // Get the bucket for count 1
                  Bucket* next_bucket = count_buckets[1];     

                  // If there is no bucket for count 1
                  if (next_bucket == nullptr) {               
                        // Create a new bucket for count 1
                        next_bucket = new Bucket(1);            
                        // Add the new bucket after the head
                        _add_bucket_after(next_bucket, head);   
                  }

                  // Add the key to the new bucket
                  next_bucket->keys.insert(key);              
            }
      }

      // Decrement the count of a key
      void dec(string key) {
            // Get the current count of the key
            int count = key_count[key];                       
            // Get the current bucket for this count
            Bucket* current_bucket = count_buckets[count];    
            // Decrement the count of the key
            key_count[key]--;                                 

            // If the count becomes 0 after decrementing
            if (key_count[key] == 0) {                        
                  // Remove the key from the key_count map
                  key_count.erase(key);                         
            }

            // If the count is greater than 1 (the key should remain in the structure)
            if (count > 1) {                                  
                  // Get the previous bucket for count - 1
                  Bucket* prev_bucket = count_buckets[count - 1];  
                  // If there is no bucket for count - 1
                  if (prev_bucket == nullptr) {                 
                        // Create a new bucket for count - 1
                        prev_bucket = new Bucket(count - 1);      
                        // Add the new bucket in the list
                        _add_bucket_after(prev_bucket, current_bucket->prev);  
                  }
                  // Add the key to the previous bucket
                  prev_bucket->keys.insert(key);                
            }

            // Remove the key from the current bucket
            current_bucket->keys.erase(key);                  
            // If the current bucket becomes empty
            if (current_bucket->keys.empty()) {               
                  // Remove the empty bucket
                  _remove_bucket(current_bucket);               
            }
      }

      // Get one of the keys with the maximum count
      string getMaxKey() {
            // If there are no keys in the structure (i.e., only dummy head and tail)
            if (tail->prev == head) {                         
                  // Return an empty string
                  return "";                                    
            }
            // Return any key from the bucket just before the tail (max count)
            return *tail->prev->keys.begin();                 
      }

      // Get one of the keys with the minimum count
      string getMinKey() {
            // If there are no keys in the structure (i.e., only dummy head and tail)
            if (head->next == tail) {                         
                  // Return an empty string
                  return "";                                    
            }
            // Return any key from the bucket just after the head (min count)
            return *head->next->keys.begin();                 
      }
};

