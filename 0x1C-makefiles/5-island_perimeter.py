#!/usr/bin/python3
"""Island Parameter Module
"""
perimeter = 0


def island_perimeter(grid):
    global perimeter
    perimeter = 0
    v_size = len(grid)
    h_size = len(grid[0])
    for y in range(0, v_size):
        for x in range(0, h_size):
            check_block(grid, y, x, v_size, h_size)
    return perimeter


def is_land(grid, y, x):
    return True if (grid[y][x] == 1) else False


def check_block(grid, y, x, v_size, h_size):
    if is_land(grid, y, x):
        check_top(grid, y, x)
        check_right(grid, y, x, h_size)
        check_bottom(grid, y, x, v_size)
        check_left(grid, y, x)


def check_top(grid, y, x):
    global perimeter
    if y-1 < 0:
        perimeter += 0
        return
    if is_land(grid, y-1, x):
        return
    perimeter += 1


def check_right(grid, y, x, h_size):
    global perimeter
    if x+1 == h_size:
        perimeter += 1
        return
    if is_land(grid, y, x+1):
        return
    perimeter += 1


def check_bottom(grid, y, x, v_size):
    global perimeter
    if y+1 == v_size:
        perimeter += 1
        return
    if is_land(grid, y+1, x):
        return
    perimeter += 1


def check_left(grid, y, x):
    global perimeter
    if x-1 < 0:
        perimeter += 1
        return
    if is_land(grid, y, x-1):
        return
    perimeter += 1


if __name__ == '__main__':
    pass
