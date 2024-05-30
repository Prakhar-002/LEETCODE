bool canJump(int* nums, int numsSize) {
      int jump = 0;

      for (int i = 0; i < numsSize; i++) {
            if (i > jump) {
                  return false;
            }

            jump = fmax(jump, i + nums[i]);
      }

      return true;
}