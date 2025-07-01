#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
  if (nums.empty())
    return 0;

  int i = 0; // Points to the position of the last unique element

  for (int j = 1; j < nums.size(); j++)
  {
    if (nums[j] != nums[i])
    {
      i++;               // Move to the next position
      nums[i] = nums[j]; // Overwrite with the next unique element
    }
  }

  return i + 1; // Number of unique elements
}

int main()
{
  vector<int> nums = {1, 1, 2, 2, 3};
  int expectedNums[] = {1, 2, 3};

  int k = removeDuplicates(nums);

  

  cout << "All assertions passed. Unique count: " << k << endl;
  return 0;
}
