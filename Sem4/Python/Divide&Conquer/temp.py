# A = [[1, 1, 1, 1],
#     [2, 2, 2, 2],
#     [3, 3, 3, 3],
#     [4, 4, 4, 4]]
#
# mid = int(len(A)/2)
# b = [[]]
# b = A[:mid,:mid]
# print(b)

def countsort(arr) :
    freq = [0 for i in range(256)]
    for i in arr :
        freq[ord(i)] += 1
    sorted_string = ''
    for i in freq :
        for j in range(freq[i]) :
            sorted_string += char(i)
    return sorted_string

# def countsort(arr) :
#     freq = [0 for i in range(256)]
#     for j in arr :
#         freq[ord(j)] += 1 # incrementing count for char
#         sorted_string = ''
#         for i in range(256) :
#             for j in range(freq[i]) :
#                 sorted_string += chr(i)
#     return sorted_string

arr = "problemsolvingusingpython"
sorted_string = countsort(arr)
print(sorted_string)
