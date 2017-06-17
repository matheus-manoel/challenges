# Rotates 2d list in place.


def rotate_in_place(matrix):
    x = len(matrix)

    for layer in range(0, x//2):
        for j in range(layer, x - 1 - layer):

            # First substitition
            n_l = j
            n_c = x - 1 - layer
            aux = matrix[n_l][n_c]
            matrix[n_l][n_c] = matrix[layer][j]

            # Second substitution
            n_l_old = n_l
            n_l = n_c
            n_c = x - 1 - n_l_old
            aux2 = matrix[n_l][n_c]
            matrix[n_l][n_c] = aux

            # Third substitution
            n_l_old = n_l
            n_l = n_c
            n_c = x - 1 - n_l_old
            aux = matrix[n_l][n_c]
            matrix[n_l][n_c] = aux2

            # Fourth substitution
            n_l_old = n_l
            n_l = n_c
            n_c = x - 1 - n_l_old
            matrix[n_l][n_c] = aux


def print_matrix(matrix):
    for i in range(0, len(matrix)):
        for j in range(0, len(matrix[i])):
            print matrix[i][j],
        print("\n")

a_list = [[1, 2, 3, 10], [4, 5, 6, 11], [7, 8, 9, 12], [13, 14, 15, 16]]
print_matrix(a_list)
rotate_in_place(a_list)
print_matrix(a_list)
