#!/usr/bin/python3
""" Module """


def island_perimeter(grid):
    """ island_perimeter method """
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                top = i - 1
                down = i + 1
                left = j - 1
                rigth = j + 1
                if i == 0 or grid[top][j] == 0:
                    perimeter += 1
                if i + 1 == len(grid) or grid[down][j] == 0:
                    perimeter += 1
                if j == 0 or grid[i][left] == 0:
                    perimeter += 1
                if j + 1 == len(grid[i]) or grid[i][rigth] == 0:
                    perimeter += 1
    return perimeter
