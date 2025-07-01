#include <iostream>
#include <vector>
using namespace std;

void combinedSortedArrays(vector<int> &nums1, vector<int> &nums2) {
    vector<int> combinedArr;
    int i = 0, j = 0;

    // Merge both arrays while both have elements
    while (i < nums1.size() && j < nums2.size()) {
        if (nums1[i] < nums2[j]) {
            combinedArr.push_back(nums1[i]);
            i++;
        } else {
            combinedArr.push_back(nums2[j]);
            j++;
        }
    }

    // Add remaining elements from nums1
    while (i < nums1.size()) {
        combinedArr.push_back(nums1[i]);
        i++;
    }

    // Add remaining elements from nums2
    while (j < nums2.size()) {
        combinedArr.push_back(nums2[j]);
        j++;
    }

    // Print result
    for (int digit : combinedArr) {
        cout << digit << " ";
    }
    cout << endl;
}

int main()
{
  vector<int> vec1 = {1,  3, 5};
  vector<int> vec2 = {2, 4, 6};

  combinedSortedArrays(vec1, vec2);

  return 0;
}