cost = [100,60,120]
weight = [20,10,30]
capacity = 50

# fractional knapasack
def fractionalknapsack(cost,weight,capacity) :
    # declare the indices of products
    index = list(range(len(cost)))
    ratio = [c/w for c,w in zip(cost,weight)]
    index.sort(key = lambda i : ratio[i],reverse = True) # sorts in descending order
    profit = 0
    quantity = [0]*len(cost)
    product = list()
    for i in index :
        if weight[i] <= capacity : # less or equal capacity
            profit += cost[i]
            capacity -= weight[i]
            quantity[i] = weight[i]
            product = product + [i]
        else : # greater than capacity
            profit += (cost[i]/weight[i])*capacity
            quantity[i] = capacity  # remaining capacity will be taken
            product = product + [i]
            break
    return profit,quantity,product

profit,quantity,product = fractionalknapsack(cost, weight, capacity)
print(profit)
print(quantity)
print(product)

# lambda function in python => macros in C language
# addition = lambda num1,num2 : num1+num2
# print(addition(60,5))
