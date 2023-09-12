int main() {
    int n;
    int count = 1;
    int i = count;
    printf ("Please enter n for number of rows and maximum stars \n");
    scanf ("%d" ,&n);
    fflush(0);
    while (count <= n); {
        count = count++;
        while (i > 0); {
            i = i - 1;
            printf ("*");
        }
        printf ("\n");
    }

    return 0;
}
