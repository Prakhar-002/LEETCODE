//! https://github.com/Prakhar-002/LEETCODE

// Todo 💎 QUESTION NUMBER 146

//? ⌚ Time complexity ➺ O(1) 👉🏻  n = capacity

//? 🧺 Space complexity ➺ O(n)

class Node {
public:
      int key, val;
      Node* prev;
      Node* next;

      Node(int k, int v) {
            key = k;
            val = v;
            prev = next = nullptr;
      }
};

class LRUCache {
private:
      int cap;
      unordered_map<int, Node*> cache;
      Node* left;
      Node* right;

      void remove(Node* node) {
            Node* prev = node->prev;
            Node* next = node->next;
            prev->next = next;
            next->prev = prev;
      }

      void insert(Node* node) {
            Node* prev = right->prev;
            Node* next = right;
            prev->next = node;
            next->prev = node;
            node->prev = prev;
            node->next = next;
      }

public:
      LRUCache(int capacity) {
            cap = capacity;
            left = new Node(0, 0);
            right = new Node(0, 0);
            left->next = right;
            right->prev = left;
      }

      int get(int key) {
            if (cache.count(key)) {
                  remove(cache[key]);
                  insert(cache[key]);
                  return cache[key]->val;
            }
            return -1;
      }

      void put(int key, int value) {
            if (cache.count(key)) {
                  remove(cache[key]);
            }
            cache[key] = new Node(key, value);
            insert(cache[key]);

            if (cache.size() > cap) {
                  Node* lru = left->next;
                  remove(lru);
                  cache.erase(lru->key);
            }
      }
};