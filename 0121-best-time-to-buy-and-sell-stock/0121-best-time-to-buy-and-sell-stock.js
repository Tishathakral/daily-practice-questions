/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function(prices) {
   let minPrice = Infinity;
   let maxProfit = 0;

  for (let i = 0; i < prices.length; i++) {
    // keep track of minimum buying price so far
    if (prices[i] < minPrice) {
      minPrice = prices[i];
    } else {
      // compute profit if sold today
      maxProfit = Math.max(maxProfit, prices[i] - minPrice);
    }
  }

  return maxProfit;

};