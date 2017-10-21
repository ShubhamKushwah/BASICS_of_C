 /* default conditions are already given in editor of javascript(node.js) language */
 
  let tip = mealCost * tipPercent/100;                //let is used to declare variables and is latest syntax 
  let tax = mealCost * taxPercent/100;
  let cost = Math.round(mealCost + tax + tip);
  console.log("The total meal cost is "+cost+" dollars.");   //to print the output
