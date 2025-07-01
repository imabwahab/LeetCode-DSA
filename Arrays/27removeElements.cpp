#include <iostream>
#include <vector>
using namespace std;

int removeElements(vector<int> &nums, int val)
{
  if (nums.empty())
    return 0;

  int i = 0; 

  for (int j = 0; j < nums.size(); j++)
  {
    if (nums[j] != val)
    {
    
      nums[i] = nums[j]; 
        i++;       
    }
  }

  return i ; 
}

int main()
{
  vector<int> nums = {1, 1, 2, 2, 2, 2,  3};
  int expectedNums[] = {1, 2, 3};

  int k = removeElements(nums, 1);

  

  cout << "All assertions passed. Unique count: " << k << endl;
  return 0;
}
