  int row;
    int col;
    for ( row = 4; row >= 1; row--)
    {
    
      for ( col = 1; col <= row; col ++)
      {
        cout << "* ";
      }
       for ( col = 1; col <= 8-2*row; col ++)
      {
        cout << "  ";
      }
          for ( col = 1; col <= row; col ++)
      {
        cout << "* ";
      }
    
      cout << endl;
    }
    for ( row = 1; row <= 4; row++)
    {
    
      for ( col = 1; col <= row; col ++)
      {
        cout << "* ";
      }
       for ( col = 1; col <= 8-2*row; col ++)
      {
        cout << "  ";
      }
          for ( col = 1; col <= row; col ++)
      {
        cout << "* ";
      }
    
      cout << endl;
    }