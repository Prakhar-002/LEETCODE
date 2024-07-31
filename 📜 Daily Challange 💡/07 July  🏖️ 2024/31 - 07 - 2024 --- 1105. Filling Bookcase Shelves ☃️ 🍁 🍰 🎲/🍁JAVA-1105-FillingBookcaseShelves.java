//! https://github.com/Prakhar-002/LEETCODE

// Todo 📌 QUESTION NUMBER 1105

//? ⌚ Time complexity ➺ O(n * m) 👉🏻 n = len(books) m = shelfWidth

//? 🧺 Space complexity ➺ O(n) 👉🏻 making DP array

class Solution {
      public int minHeightShelves(int[][] books, int shelfWidth) {
            // making a book shelves array as like dp array
            // element `i` will hold the min total height of shelves
            // required to arrange books `i` through `len(books) - 1`.
            int[] booksShelves = new int[books.length + 1];

            // backward iteration is crucial for the DP approach
            for (int i = books.length - 1; i >= 0; i--) {
                  // `curWidth` is reset to the maximum shelf width
                  // current width available on the shelf
                  int curWidth = shelfWidth;

                  // `maxHeight` is set to 0
                  // maximum height of the books included
                  int maxHeight = 0;

                  // current DP state `booksShelves[i]` is set to infinity
                  // minimum height needed from the current book to the end
                  booksShelves[i] = Integer.MAX_VALUE;

                  // `i` to the end of the books list.
                  // It attempts to place as many books as possible on the current shelf
                  for (int j = i; j < books.length; j++) {
                        // Extracts the width and height of the current book.
                        int bookWidth = books[j][0];
                        int bookHeight = books[j][1];

                        // If adding this book exceeds the remaining shelf width
                        if (curWidth < bookWidth) {
                              // it breaks out of the loop.
                              break;
                        }

                        // subtract the current remaining width by J-th book's width
                        curWidth -= bookWidth;
                        // get the max book height
                        maxHeight = Math.max(maxHeight, bookHeight);

                        // update bookshelves[i] by it's current value
                        // and sum of placing books from position 'i' to 'j' on the same shelf
                        // along with minimum height required for the rest 'booksShelves[j + 1]'
                        booksShelves[i] = Math.min(
                                    booksShelves[i],
                                    booksShelves[j + 1] + maxHeight);
                  }
            }

            return booksShelves[0];
      }
}