#knapsack using DP

def knapsack(val,wt,W,n) :
    if n==0 or W == 0 :
        return 0
    if (wt[n-1] > W) : # overweight of the product
        return knapsack(val,wt,W,n-1)
    else :
        return max(val[n-1]+knapsack(val,wt,W-wt[n-1],n-1),knapsack(val,wt,W,n-1))

val = [60,100,120] # profit value for each product
wt = [10,20,40]   #  weight for each product
w = 50 # maximum allowable weight
n = len(val)
print('maximum profit = ',knapsack(val,wt,w,n))
