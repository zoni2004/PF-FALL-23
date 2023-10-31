int main (){
	int n,i;
	printf ("Enter number of arrays");
	scanf ("%d", &n);
	char my_string[n];
	printf ("Enter a string");
	for (i=0; i<n; i++){
		scanf ("%s",&my_string);
	}
	printf ("Enter an int");
	int my_int_arr[n];
	for (i=0; i<n; i++){
		scanf ("%d",&my_int_arr);
	}
	printf ("Enter a long long int");
	long long int my_longlongint_arr[n];
		for (i=0; i<n; i++){
		scanf ("%lli", &my_longlongint_arr);
	}
	int *ptr;
	ptr = my_string[0];
	
	for (i=0; i<n; i++){
		printf ("my_string[%d] = %d\n",i,my_string [i]);
		printf ("ptr + %d = %d\n",i,*(ptr+i));
	}
	
	
return 0;	
}
