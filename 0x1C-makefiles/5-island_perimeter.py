#!/usr/bin/python3
"""
module for island perimeter function
"""
def island_perimeter(grid):
    """
    return perimeter of an island of 1's in a grid
    """
    perim = 0
    for lis in range(len(grid)):
        for i in range(len(grid[0])):
            if grid[lis][i] == 1:
                if i is 0:
                    perim += 1
                elif grid[lis][i - 1] == 0:
                    perim += 1
                if i == len(grid[0]) - 1:
                    perim += 1
                elif grid[lis][i + 1] == 0:
                    perim += 1
                if lis is 0:
                    perim += 1
                elif grid[lis - 1][i] == 0:
                    perim += 1
                if lis == len(grid) - 1:
                    perim += 1
                elif grid[lis + 1][i] == 0:
                    perim += 1
    return perim
