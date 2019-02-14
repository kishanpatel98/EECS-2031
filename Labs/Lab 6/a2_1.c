#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{    
	    int n;
	    int count = 0;
	    int sum = 0;
	    int sumvals[n];
	    int shift;
	    int t = INT_MAX;

	    scanf("%d", &n);
	    int arr1[n];
	    int arr2[n];
	    int i;
	    for(i = 0; i < sizeof(arr1)/sizeof(arr1[0]); i++){
		    scanf("%d", &arr1[i]);
	    }	

	    for(i = 0; i < sizeof(arr2)/sizeof(arr2[0]); i++){
		    scanf("%d", &arr2[i]);
	    }

	    while (count <= n - 1){
		    for (i = 0; i <= n-1; i++){
			    sum += abs(arr1[i] - arr2[i]);
		    }	

		    if (sum < t) {
			    t = sum;
			    shift = count;
		    }
		    
		    sum = 0;
		    int x = arr2[n-1];
		    for (i = n-1; i > 0; i--){
			    arr2[i] = arr2[i-1]; 
		    }
		    arr2[0] = x;
		    count++;
	    }
	    printf("%d\n", shift);
	    return 0;
}
