char input;
//-----CONFIRMING A DELETE OPERATION---//
    char Y;
    char y;
    char N;
    char n;
    printf ("If you want to delete press Y/y and if not press N/n \n");
    scanf ("%c" ,&input);
    switch (input) {
    case 'Y':
    printf ("Deleted Successfully");
    break;
    case 'y':
    printf ("Deleted Successfully");
    break;
    case 'N':
    printf ("Delete Cancelled");
    break;
    case 'n':
    printf ("Delete Cancelled");
    break;
    }
    return 0;
}
