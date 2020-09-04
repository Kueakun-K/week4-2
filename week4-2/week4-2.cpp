#include<stdio.h>

int max(int x, int y) {
	if (x > y) 
		return x;
	else 
		return y;
}

int main() {
	int x[4],n;
	printf("Number entered (2,4) : ");
	scanf_s("%d", &n);
	if (n == 2 or n == 4) {
		if (n == 2) {
			for (int i = 0; i < 2; i++)
			{
				printf("Number %d :", i+1);
				scanf_s("%d", &x[i]);
			}
			printf("Max : %d", max(x[0], x[1]));

		}
		else if(n==4){
			for (int i = 0; i < 4; i++)
			{
				printf("Number %d :", i + 1);
				scanf_s("%d", &x[i]);

			}
			printf("Max : %d", max(max(x[0], x[1]), max(x[2], x[3])));
		}
	}
	else
		printf("ERROR");
	return 0;
}