import numpy as np

def split(A,n):
    """
    Splits a given matrix into quarters.
    Input: nxn matrix
    Output: tuple containing 4 n/2 x n/2 matrices corresponding to a, b, c, d
    """

    mid = int(n/2)

    A11 = A[:mid,:mid]
    A12 = A[:mid,mid:]
    A21 = A[mid:,:mid]
    A22 = A[mid:, mid:]
    return A11,A12,A21,A22

def strassen(x, y):
    """
    Computes matrix product by divide and conquer approach, recursively.
    Input: nxn matrices x and y
    Output: nxn matrix, product of x and y
    """

    # Base case when size of matrices is 1x1
    if len(x) == 1:
        return x * y

    # Splitting the matrices into quadrants. This will be done recursively
    # untill the base case is reached.
    a, b, c, d = split(x,len(x))
    e, f, g, h = split(y,len(y))

    # Computing the 7 products, recursively (p1, p2...p7)
    p1 = strassen(a, f - h)
    p2 = strassen(a + b, h)
    p3 = strassen(c + d, e)
    p4 = strassen(d, g - e)
    p5 = strassen(a + d, e + h)
    p6 = strassen(b - d, g + h)
    p7 = strassen(a - c, e + f)

    # Computing the values of the 4 quadrants of the final matrix c
    c11 = np.array(p5) + np.array(p4) - np.array(p2) + np.array(p6)
    c12 = np.array(p1) + np.array(p2)
    c21 = np.array(p3) + np.array(p4)
    c22 = np.array(p1) + np.array(p5) - np.array(p3) - np.array(p7)

    # Combining the 4 quadrants into a single matrix by stacking horizontally and vertically.
    #c = np.vstack((np.hstack((c11, c12)), np.hstack((c21, c22))))
    #c = [[c11,c12],[c21,c22]]
    c = np.array([[c11],[c12],[c21],[c22]])
    return c

    # First matrix. M is a list
M = np.array([[1, 1, 1, 1],
    [2, 2, 2, 2],
    [3, 3, 3, 3],
    [4, 4, 4, 4]])

# Second matrix. N is a list
N = np.array([[1, 1, 1, 1],
    [2, 2, 2, 2],
    [3, 3, 3, 3],
    [4, 4, 4, 4]])

# Call matrix_multiplication function
ans = strassen(M, N)
#printing the numpy 2D-Array
print("\nThe Numpy 2D-Array is:")
for i in ans:
    for j in i:
        print(j, end=" ")
    print()
