int main()
{
    cout << "Welcome to the Battleship Sir. Here, you must select between rows and columns from 0 to 7 to eliminate enemy ships\n\n";
    bool grid[8][8] = {
    {1, 1, 1, 1, 0, 0, 0, 1},
    {0, 0, 0, 0, 0, 0, 0, 1},
    {0, 0, 1, 1, 0, 1, 0, 1},
    {0, 0, 0, 0, 0, 1, 0, 0},
    {0, 0, 0, 0, 0, 1, 0, 0},
    {0, 0, 1, 0, 0, 1, 0, 0},
    {0, 0, 1, 0, 0, 1, 0, 0},
    {0, 0, 1, 0, 0, 0, 0, 0}
};
    int hits = 0;
    int tries = 0;
    while (hits < 17) {
        cout << "Enter coordinates for the next strike Sir\n";
        int rows, columns;
        cout << "Row: ";
        cin >> rows;
        cout << "Column: ";
        cin >> columns;
        if (grid[rows][columns]) {
            grid[rows][columns] = 0;
            hits++;
            cout << "Its a hit Sir! " << (17 - hits) << " hits left\n\n";
        } else {
            cout << "We missed it Sir! Reloading missiles, " << (17 - hits) << " hits left\n\n";
        }
        tries++;
    }
    cout << "We sank them all Sir! We won!";
    return 0;
}
