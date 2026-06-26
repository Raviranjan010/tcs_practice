# Problem: Print pyramid of height N.
# Test Case: N=3:
#   *
#  ***
# *****

def print_pyramid(n):
    for i in range(n):
        # Print leading spaces
        print(' ' * (n - i - 1) + '*' * (2 * i + 1))
