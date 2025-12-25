#! https://github.com/Prakhar-002/LEETCODE

# Todo 💎 QUESTION NUMBER Quest Software Design L3 Q3

#? ⌚ Time complexity ➺ O(1) 👉🏻  n = len(nums)

#? 🧺 Space complexity ➺ O(n)

class Node:
      def __init__(self, freq):
            # Frequency (count) of keys in this node
            self.freq = freq
            # Pointers to previous and next nodes in the doubly-linked list
            self.prev = None
            self.next = None
            # Set of keys that have this frequency
            self.keys = set()

class AllOne:
      def __init__(self):
            # Dummy head node (frequency 0)
            self.head = Node(0)
            # Dummy tail node (frequency 0)
            self.tail = Node(0)
            # Link dummy head to dummy tail
            self.head.next = self.tail
            # Link dummy tail to dummy head
            self.tail.prev = self.head
            # Map: key → node that contains this key
            self.map = {}

      def inc(self, key: str) -> None:
            if key in self.map:
                  # Key already exists: move it to the next frequency bucket
                  node = self.map[key]
                  freq = node.freq
                  # Remove key from current node
                  node.keys.remove(key)

                  nextNode = node.next
                  if nextNode == self.tail or nextNode.freq != freq + 1:
                        # Create a new node if next node does not exist or freq is not freq + 1
                        newNode = Node(freq + 1)
                        newNode.keys.add(key)
                        newNode.prev = node
                        newNode.next = nextNode
                        node.next = newNode
                        nextNode.prev = newNode
                        self.map[key] = newNode
                  else:
                        # Increment the existing next node
                        nextNode.keys.add(key)
                        self.map[key] = nextNode

                  # Remove the current node if it has no keys left
                  if not node.keys:
                        self.removeNode(node)
            else:  # Key does not exist
                  firstNode = self.head.next
                  if firstNode == self.tail or firstNode.freq > 1:
                        # Create a new node
                        newNode = Node(1)
                        newNode.keys.add(key)
                        newNode.prev = self.head
                        newNode.next = firstNode
                        self.head.next = newNode
                        firstNode.prev = newNode
                        self.map[key] = newNode
                  else:
                        firstNode.keys.add(key)
                        self.map[key] = firstNode

      def dec(self, key: str) -> None:
            if key not in self.map:
                  return  # Key does not exist

            node = self.map[key]
            node.keys.remove(key)
            freq = node.freq

            if freq == 1:
                  # Remove the key from the map if freq is 1
                  del self.map[key]
            else:
                  prevNode = node.prev
                  if prevNode == self.head or prevNode.freq != freq - 1:
                        # Create a new node if the previous node does not exist or freq is not freq - 1
                        newNode = Node(freq - 1)
                        newNode.keys.add(key)
                        newNode.prev = prevNode
                        newNode.next = node
                        prevNode.next = newNode
                        node.prev = newNode
                        self.map[key] = newNode
                  else:
                        # Decrement the existing previous node
                        prevNode.keys.add(key)
                        self.map[key] = prevNode

            # Remove the node if it has no keys left
            if not node.keys:
                  self.removeNode(node)

      def getMaxKey(self) -> str:
            if self.tail.prev == self.head:
                  return ""  # No keys exist
            return next(
                  iter(self.tail.prev.keys)
            )  # Return one of the keys from the tail's previous node

      def getMinKey(self) -> str:
            if self.head.next == self.tail:
                  return ""  # No keys exist
            return next(
                  iter(self.head.next.keys)
            )  # Return one of the keys from the head's next node

      def removeNode(self, node):
            prevNode = node.prev
            nextNode = node.next

            prevNode.next = nextNode  # Link previous node to next node
            nextNode.prev = prevNode  # Link next node to previous node
