#include <iostream>
#include <vector>
using namespace std;

vector<int> plusOne(vector<int> &digits)
{
  int n = digits.size();

  for (int i = n - 1; i >= 0; --i)
  {
    if (digits[i] < 9)
    {
      digits[i] += 1;
      return digits;
    }
    digits[i] = 0;
  }

  // If all digits were 9
  digits.insert(digits.begin(), 1);
  return digits;
}

int main()
{
  vector<int> arr = {8, 9, 9, 9, 9}; // Very large number
  vector<int> result = plusOne(arr);

  for (int digit : result)
  {
    cout << digit << "->";
  }
  cout << endl;

  return 0;
}
