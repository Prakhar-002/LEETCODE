# 237. Delete Node in a Linked List

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/delete-node-in-a-linked-list/?envType=daily-question&envId=2024-05-03"><strong>➥ ☢️ 237 Leetcode Que Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### There is a singly-linked list `head` and we want to delete a `node` node in it.

### You are given the `node` to be deleted node. You will `not be given access` to the first node of `head`.

### All the values of the linked list are `unique`, and it is guaranteed that the given node `node` is not the last node in the linked list.

### Delete the given node. Note that by deleting the node, we do not mean removing it from memory. We mean:

- The value of the given node should not exist in the linked list.

- The number of nodes in the linked list should decrease by one.

- All the values before `node` should be in the same order.

- All the values after `node` should be in the same order.

## Custom testing ˋ°•*⁀➷

- For the input, you should provide the entire linked list `head` and the node to be given `node`. `node` should not be the last node of the list and should be an actual node in the list.

- We will build the linked list and pass the node to your function.

- The output will be the entire list after calling your function.



</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

![237 que 1](https://github.com/Prakhar-002/Prakhar-002/assets/136890202/a8a1f2d0-3428-4102-ae25-84e425542321)

  ### Input  ➤ head = [4,5,1,9], node = 5

  ### Output  ➤ [4,1,9]

  ### Explanation  ➤ You are given the second node with value 5, the linked list should become 4 -> 1 -> 9 after calling your 

</br>

# Example 💡 2️⃣ ˋ°•*⁀➷

![237 que 2](https://github.com/Prakhar-002/Prakhar-002/assets/136890202/cc4273de-0af5-4c02-8ea5-c8395d91cb62)

  ### Input ➤  head = [4,5,1,9], node = 1

  ### Output  ➤ [4,5,9]

  ### Explanation ➤  You are given the third node with value 1, the linked list should become 4 -> 5 -> 9 after calling your function.

</br>

# Constraints 🔒 ˋ°•*⁀➷

- **The number of the nodes in the given list is in the range `[2, 1000]`.**
- **-1000 <= Node.val <= 1000**
- **The value of each node in the list is `unique`.**
- **The `node` to be deleted is `in the list` and is `not a tail` node.**

</br>

# Topics 📋 ˋ°•*⁀➷

1. **Linked List**


</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁](https://github.com/Prakhar-002/LEETCODE/blob/main/%F0%9F%93%9C%20Daily%20Challange%20%F0%9F%92%A1/05%20May%20%F0%9F%8C%88%202024/05%20-%2005%20-%202024%20---%20237.%20Delete%20Node%20in%20a%20Linked%20List%20%F0%9F%8D%81/%F0%9F%8D%81JAVA_237_DeleteNodeInALinkedList.java) |
