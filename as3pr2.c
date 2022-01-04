#include<stdio.h>

int main(){
	int x,y,z,q,r,n,temp;
	printf("Enter values of x,y : ");
	scanf("%d %d", &x,&y);


	
	printf("Menu : \n");

	printf("Enter 1 to check Equality of x and y : \n");
	printf("Enter 2 to check x is Less than y : \n");
	printf("Enter 3 to check quotient and remainder of x and y : \n");
	printf("Enter 4 to check given number lies between x and y : \n");
	printf("Enter 5 to swap values of x and y : \n");
	scanf("%d",&z);

	switch(z){
		case 1:	if(x==y) printf("x and y are equal\n"); else printf("x and y are not equal\n");
				break;
		case 2: if(x<y) printf("x is less than y\n"); else printf("x is not less than y \n");
				break;

		case 3: q = x/y;
			r = x%y;
			printf("Quotient is : %d\n", q);	
			printf("Remainder is : %d\n", r);	

		case 4: printf("Enter the number to check : ");
			scanf("%d",&n);
			if((n >= x) && (n <= y)) printf("n lies between x and y\n");
			else printf("n does not lies between x and y\n");
		
		case 5:
			printf("Values of x and y before interchanging x = %d, y = %d\n",x,y);
		       	temp = x;
			x = y;
			y = temp;
			printf("Values of x and y after interchanging x = %d, y = %d\n",x,y);
	}

	return 0;
}
