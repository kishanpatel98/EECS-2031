#include <stdio.h>

int main(){
	int i, j;
	int size = 4;
	char command;
	int repeat = 1;
	
	scanf("%d %d", &i, &j);
	
	int mat[size][size];
	int temp[size][size];
	
	for (int row = 0; row < size; row++) {
		for (int col = 0; col < size; col++) {
			if (row == i && col == j) {
				mat[row][col] = 0;
			}
			
			else {
				scanf("%d", &mat[row][col]);
			}
		}
	}
	
	for (int row = 0; row < size; row++) {
		for (int col = 0; col < size; col++) {
			if (row == i && col == j) {
				printf("    ");
			}
			
			else {
				printf("%-4d", mat[row][col]);
			}
		}
		printf("\n");
	}
	
	
	while (repeat) {
		scanf(" %c", &command);
		
		if (command == 'u') {
			for (int row = 0; row < size; row++) {
				for (int col = 0; col < size; col++) {
					temp[row][col] = mat[row][col];
				}
			}
			if (i >= 1 && i <= 3) {
				temp[i][j] = mat[i-1][j];
				temp[i-1][j] = mat[i][j];
				
				
				for (int row = 0; row < size; row++) {
					for (int col = 0; col < size; col++) {
						if (row == (i-1) && col == j) {
							printf("    ");
						}
						
						else {
							printf("%-4d", temp[row][col]);
						}
					}
					printf("\n");
				}
				i--;
				
				for (int row = 0; row < size; row++) {
					for (int col = 0; col < size; col++) {
						mat[row][col] = temp[row][col];
					}
				}
			}
			
			else {
				printf("Not a valid move\n");
			}
		}
		
		else if (command == 'd') {
			for (int row = 0; row < size; row++) {
				for (int col = 0; col < size; col++) {
					temp[row][col] = mat[row][col];
				}
			}
			if (i >= 0 && i <= 2) {
				temp[i][j] = mat[i+1][j];
				temp[i+1][j] = mat[i][j];
				
				
				for (int row = 0; row < size; row++) {
					for (int col = 0; col < size; col++) {
						if (row == (i+1) && col == j) {
							printf("    ");
						}
						
						else {
							printf("%-4d", temp[row][col]);
						}
					}
					printf("\n");
				}
				i++;
				
				for (int row = 0; row < size; row++) {
					for (int col = 0; col < size; col++) {
						mat[row][col] = temp[row][col];
					}
				}
			}
			
			else {
				printf("Not a valid move\n");
			}
		}
		
		else if (command == 'l') {
			for (int row = 0; row < size; row++) {
				for (int col = 0; col < size; col++) {
					temp[row][col] = mat[row][col];
				}
			}
			if (j >= 1 && j <= 3) {
				temp[i][j] = mat[i][j-1];
				temp[i][j-1] = mat[i][j];
				
				
				for (int row = 0; row < size; row++) {
					for (int col = 0; col < size; col++) {
						if (row == i && col == (j-1)) {
							printf("    ");
						}
						
						else {
							printf("%-4d", temp[row][col]);
						}
					}
					printf("\n");
				}
				j--;
				
				for (int row = 0; row < size; row++) {
					for (int col = 0; col < size; col++) {
						mat[row][col] = temp[row][col];
					}
				}
			}
			
			else {
				printf("Not a valid move\n");
			}
		}
		
		else if (command == 'r') {
			for (int row = 0; row < size; row++) {
				for (int col = 0; col < size; col++) {
					temp[row][col] = mat[row][col];
				}
			}
			if (j >= 0 && j <= 2) {
				temp[i][j] = mat[i][j+1];
				temp[i][j+1] = mat[i][j];
				
				for (int row = 0; row < size; row++) {
					for (int col = 0; col < size; col++) {
						if (row == i && col == (j+1)) {
							printf("    ");
						}
						
						else {
							printf("%-4d", temp[row][col]);
						}
					}
					printf("\n");
				}
				j++;
				
				for (int row = 0; row < size; row++) {
					for (int col = 0; col < size; col++) {
						mat[row][col] = temp[row][col];
					}
				}
			}
			
			else {
				printf("Not a valid move\n");
			}
		}
		
		else if (command == 'q') {
			break;
		}
		
		else {
			printf("No such command\n");
		}
	}
	
	
	
	
	return 0;
}
