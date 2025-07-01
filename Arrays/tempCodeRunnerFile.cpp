int left = 0;
    int right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid;  // target found
        } else if (nums[mid] < target) {
            left = mid + 1;  // move to the right half
        } else {
            right = mid - 1;  // move to the left half
        }
    }

    // Not found, return the insert position
    return left;