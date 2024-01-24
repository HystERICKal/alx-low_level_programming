def island_perimeter(grid):
    """Returns island perimeter"""
    kando_kando = 0
    ukubwa = 0
    grid_width = len(grid[0])
    grid_height = len(grid)
    x = 0

    while x < grid_height:
        for y in range(grid_width):
            if grid[x][y] == 1:
                ukubwa = ukubwa + 1
                if (y > 0 and grid[x][y - 1] == 1):
                    kando_kando = kando_kando + 1
                if (x > 0 and grid[x - 1][y] == 1):
                    kando_kando = kando_kando + 1
        x = x + 1
    return ukubwa * 4 - kando_kando * 2
