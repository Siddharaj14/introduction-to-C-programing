// 13.Convert bytes into KB, MB and GB.
#include <stdio.h>

int main() {
	float b,g,k,m;

	printf("Please enter bytes:");
	scanf("%f", &b);

	 k = b /1000;
	 m = k /1000;
	 g = m /1000;
	 
      
	printf("%f KB \n", k);
	printf("%f MB\n", m);
	printf("%f GB \n", g);
	
	return 0;
}
/*
output

Please enter bytes:5000
5.000000 KB 
0.005000 MB
0.000005 GB 
	*/