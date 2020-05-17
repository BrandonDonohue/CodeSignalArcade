int shapeArea(int n) {
    //center row is always odd and increases by 2 for each n (n + (n-1))
    //top and bottom decrease by 2 for n - 1
    if(n == 1)
        return 1;

    int topAndBottom = 0;
    int centerRow = n + (n - 1); 
    for(int column = n - 1; column > 0; column--){ 
        topAndBottom += (column + (column - 1));
    } 

    return centerRow + (2 * topAndBottom);
}
