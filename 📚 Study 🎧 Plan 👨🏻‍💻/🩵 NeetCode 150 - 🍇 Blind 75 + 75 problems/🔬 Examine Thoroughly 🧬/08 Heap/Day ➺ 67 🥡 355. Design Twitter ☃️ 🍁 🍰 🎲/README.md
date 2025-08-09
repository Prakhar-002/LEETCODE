# 355. Design Twitter

</br>

<h2 align="center"> 

<a href="https://leetcode.com/problems/design-twitter/description/"><strong>➥ ☢️ 355 Leetcode Medium ☢️ </strong></a>
</h2>

</br>

# Description 📜 ˋ°•*⁀➷

### You are tasked with designing a simplified version of Twitter.

### You must implement the `Twitter` class that supports the following actions:

- `Twitter()`: Initializes the Twitter object, creating an empty Twitter feed.
- `void postTweet(int userId, int tweetId)`: Allows the user with ID `userId` to compose a new tweet with ID `tweetId`. All tweet IDs are unique.
- `List<Integer> getNewsFeed(int userId)`: Retrieves the 10 most recent tweet IDs in the news feed of the user with ID `userId`. The news feed should only include tweets posted by users that `userId` follows, as well as tweets posted by `userId` himself. The tweet IDs in the news feed should be ordered from the most recent to the least recent.
- `void follow(int followerId, int followeeId)`: Permits the user with ID `followerId` to start following the user with ID `followeeId`.
- `void unfollow(int followerId, int followeeId)`: Allows the user with ID `followerId` to start unfollowing the user with ID `followeeId`.

</br>

# Example 💡 1️⃣ ˋ°•*⁀➷

  ### 📥 `Input`  ➤ 

["Twitter", "postTweet", "getNewsFeed", "follow", "postTweet", "getNewsFeed", "unfollow", "getNewsFeed"]
[[], [1, 5], [1], [1, 2], [2, 6], [1], [1, 2], [1]]

  ### 📤 `Output`  ➤ [null, null, [5], null, null, [6, 5], null, [5]]

  ### 🔦 `Explanation`  ➤ 

Twitter twitter = new Twitter();
twitter.postTweet(1, 5); // User 1 posts a new tweet (id = 5).
twitter.getNewsFeed(1);  // User 1's news feed should return a list with 1 tweet id -> [5]. return [5]
twitter.follow(1, 2);    // User 1 follows user 2.
twitter.postTweet(2, 6); // User 2 posts a new tweet (id = 6).
twitter.getNewsFeed(1);  // User 1's news feed should return a list with 2 tweet ids -> [6, 5]. Tweet id 6 should precede tweet id 5 because it is posted after tweet id 5.
twitter.unfollow(1, 2);  // User 1 unfollows user 2.
twitter.getNewsFeed(1);  // User 1's news feed should return a list with 1 tweet id -> [5], since user 1 is no longer following user 2.

</br>

# Constraints 🔒 ˋ°•*⁀➷

🔹 1 <= userId, followerId, followeeId <= 500 </br>

🔹 0 <= tweetId <= 10<sup>4</sup> </br>

🔹 All the tweets have unique IDs. </br>

🔹 At most 3 * 10<sup>4</sup> calls will be made to postTweet, getNewsFeed, follow, and unfollow. </br>

🔹 A user cannot follow himself. </br>

</br>

# Topics 📋 ˋ°•*⁀➷

🔸 **Hash Table**  </br>

🔸 **Linked List**  </br>

🔸 **Design**  </br>

🔸 **Heap (Priority Queue)** 

</br>

# Solution ✏️ ˋ°•*⁀➷

| 📒 Language 📒  | 🪶 Solution 🪶 |
| ------------- | ------------- |
|  ![Java](https://img.shields.io/badge/java-%23ED8B00.svg?style=for-the-badge&logo=openjdk&logoColor=white)  | [JAVA🍁]() |
|  ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)  | [C++🎲]()  |
|  ![Python](https://img.shields.io/badge/python-3670A0?style=for-the-badge&logo=python&logoColor=ffdd54)    | [PYTHON🍰]() |
| ![JavaScript](https://img.shields.io/badge/javascript-%23323330.svg?style=for-the-badge&logo=javascript&logoColor=%23F7DF1E)   | [JAVASCRIPT☃️]() |

</br>

# Benchmark ⏱️ ˋ°•*⁀➷

<h1  align="center" >

<img src ="https://github.com/user-attachments/assets/7ce1f285-e84f-49c3-bbb2-e932164d0101" width = "700px" height="462px" />

</h1>
