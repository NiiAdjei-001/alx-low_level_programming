#!/usr/bin/python3
"""Island Parameter Module
"""
perimeter = 0  # global perimeter variable


def island_perimeter(grid):
    """island_perimeter

        def: Function finds the perimeter of the grid

        arg:
            grid - X x Y matrix. 1 represent land 0 represents sea
            [0, 0, 0, 0, 0]
            [0, 1, 0, 0, 0]
            [0, 1, 0, 0, 0]
            [0, 1, 1, 1, 0]
            [0, 0, 0, 0, 0]

        return: Returns the perimeter of the grid
    """
    global perimeter
    perimeter = 0
    v_size = len(grid)
    h_size = len(grid[0])
    for y in range(0, v_size):
        for x in range(0, h_size):
            check_block(grid, y, x, v_size, h_size)
    return perimeter


def is_land(grid, y, x):
    """is_land

        def: checks if a block is land

        arg:
            grid - the grid
            y - the vertical or y coordinate.
            x - the horizontal of x coordinate.

        return: returns True if block is land else False
    """
    return True if (grid[y][x] == 1) else False


def check_block(grid, y, x, v_size, h_size):
    """check_block

        def: checks the 4 cardinal directions of a block.
            if a block is surrounded by sea in a cardinal direction,
            cause an increment in the perimeter measure

        arg:
            grid - the grid
            y - the vertical or y coordinate.
            x - the horizontal of x coordinate.
            v_size - the maximum vertical size.
            h_size - the maximum horizontal size.

    """
    if is_land(grid, y, x):
        check_top(grid, y, x)
        check_right(grid, y, x, h_size)
        check_bottom(grid, y, x, v_size)
        check_left(grid, y, x)


def check_top(grid, y, x):
    """check_top

        def: checks the north cardinal direction of a block.
            increment in perimeter measusre if north side is sea.

        arg:
            grid - the grid
            y - the vertical or y coordinate.
            x - the horizontal of x coordinate.
    """
    global perimeter
    if y-1 < 0:
        perimeter += 1
        return
    if is_land(grid, y-1, x):
        return
    perimeter += 1


def check_right(grid, y, x, h_size):
    """check_top

        def: checks the east cardinal direction of a block.
            increment in perimeter measusre if east side is sea.

        arg:
            grid - the grid
            y - the vertical or y coordinate.
            x - the horizontal of x coordinate.
            h_size - the maximum horizontal size.

    """
    global perimeter
    if x+1 == h_size:
        perimeter += 1
        return
    if is_land(grid, y, x+1):
        return
    perimeter += 1


def check_bottom(grid, y, x, v_size):
    """check_bottom

        def: checks the south cardinal direction of a block.
            increment in perimeter measusre if south side is sea.

        arg:
            grid - the grid
            y - the vertical or y coordinate.
            x - the horizontal of x coordinate.
            v_size - the maximum vertical size.
    """
    global perimeter
    if y+1 == v_size:
        perimeter += 1
        return
    if is_land(grid, y+1, x):
        return
    perimeter += 1


def check_left(grid, y, x):
    """check_left

        def: checks the west cardinal direction of a block.
            increment in perimeter measusre if west side is sea.

        arg:
            grid - the grid
            y - the vertical or y coordinate.
            x - the horizontal of x coordinate.
    """
    global perimeter
    if x-1 < 0:
        perimeter += 1
        return
    if is_land(grid, y, x-1):
        return
    perimeter += 1


if __name__ == '__main__':
    pass
