#include <stdio.h>
#include <string.h>

struct parts {
	char serial_no[3];
	int manfyear;
	char material;
	int quantity;
};

int main (){
	int n;
    printf ("Enter the number of parts: \n");
    scanf ("%d",&n);
    struct parts p[n];
    int i=0;
    for (i=0; i<n; i++){
        puts ("Enter serial number of the car");
		scanf ("%s", p[i].serial_no);
        puts ("Enter manufacture year of the car");
        scanf ("%d", &p[i].manfyear);
        puts ("Enter matreial of the car");
        scanf ("%s", p[i].material);
        puts ("Enter quantity of the cars manufactured");
        scanf ("%d", &p[i].quantity);
    }
   
	}
return 0;	
}
