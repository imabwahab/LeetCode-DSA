#include <vector>
#include <iostream>
using namespace std;
void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
  int p1 = m - 1;    // Last element in nums1's initialized part
  int p2 = n - 1;    // Last element in nums2
  int p = m + n - 1; // Last position in nums1

  // Merge in reverse order
  while (p1 >= 0 && p2 >= 0)
  {
    if (nums1[p1] > nums2[p2])
    {
      nums1[p] = nums1[p1];
      p1--;
    }
    else
    {
      nums1[p] = nums2[p2];
      p2--;
    }
    p--;
  }

  // Only need to copy remaining elements from nums2 (if any)
  while (p2 >= 0)
  {
    nums1[p] = nums2[p2];
    p2--;
    p--;
  }
}

int main()
{
  vector<int> nums1 = {1, 2, 3, 0, 0, 0};
  vector<int> nums2 = {2, 5, 6};
  int m = 3;
  int n = 3;

  merge(nums1, m, nums2, n);

  for (int num : nums1)
  {
    cout << num << " ";
  }
  // Output: 1 2 2 3 5 6

  return 0;
}
