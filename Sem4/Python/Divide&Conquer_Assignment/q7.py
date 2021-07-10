def stockPrice(arr) :
    if len(arr) > 1 :
        mid = int(len(arr)/2)
        leftHalf = arr[:mid]
        rightHalf = arr[mid:]

        buy = min(leftHalf)
        sell = max(rightHalf)

        stockPrice(leftHalf)
        stockPrice(rightHalf)



        return buy,sell

price = [100, 180, 260, 310, 40, 535, 695]
print(stockPrice(price))
