#include <iostream>
#include <vector>
using namespace std;
int maxProfit(vector<int> &prices)
{
  int profit = 0;
  int currProfit = 0;
  int currPrice = prices[0];
  for (int i = 1; i < prices.size(); i++)
  {
    currProfit = prices[i] - currPrice;

    profit = max(profit, currProfit);
    currPrice = min(currPrice, prices[i]);
  }
  return profit;
}
int main()
{
  vector<int> vec = {2, 7, 1, 2, 9, 0};
  cout << maxProfit(vec);

  return 0;
}