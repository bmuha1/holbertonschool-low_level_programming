#!/usr/bin/python3
"""
Return the perimeter of the island described in grid.
"""


def island_perimeter(grid):
    """Return the perimeter of the island described in grid."""
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                try:
                    if grid[i - 1][j] == 0 or i == 0:
                        perimeter += 1
                except IndexError:
                    perimeter += 1

                try:
                    if grid[i + 1][j] == 0:
                        perimeter += 1
                except IndexError:
                    perimeter += 1

                try:
                    if grid[i][j - 1] == 0 or j == 0:
                        perimeter += 1
                except IndexError:
                    perimeter += 1

                try:
                    if grid[i][j + 1] == 0:
                        perimeter += 1
                except IndexError:
                    perimeter += 1
    return perimeter
