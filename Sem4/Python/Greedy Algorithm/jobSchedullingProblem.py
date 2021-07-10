def jobschedule(arr,t) :
    n = len(arr)
    # sort in terms of descending order of Marks
    for i in range(n) :
        for j in range(n-1-i) :
            if(arr[j][2] < arr[j+1][2]) :
                arr[j],arr[j+1] = arr[j+1],arr[j]
    result = [False]*t # status array
    job = ['0']*t       # job sequence array
    for i in range(n) : # iterate through the job array
        for j in range((arr[i][1]-1),-1,-1) :   # iterate through the job array
            if(result[j] is False) :    # checking for empty sllot
                result[j] = True
                job[j] = arr[i][0]
                break
    print(job)

arr = [['a',2,100],['b',1,19],['c',2,25],['d',2,20],['e',3,15]]
jobschedule(arr,3) # homework=> to get the maximum deadline
