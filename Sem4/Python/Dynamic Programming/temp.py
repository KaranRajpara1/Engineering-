def knapsack(val,wt,w,n) :
    if n==0 or w==0 :
        return 0
    if wt[n-1] > w :
        return knapsack(val,wt,w,n-1)
    else :
        return max(val[n-1]+knapsack(val,wt,w-wt[n-1],n-1), knapsack(val,wt,w,n-1))


val = [60,100,120] # profit value for each product
wt = [10,20,40]   #  weight for each product
w = 50 # maximum allowable weight
n = len(val)
print('maximum profit = ',knapsack(val,wt,w,n))
