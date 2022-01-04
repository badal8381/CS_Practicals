#include<stdio.h>

int main(){
	int r,c,a;
	printf("Enter radius of circle : ");
	scanf("%d",&r);
	
	printf("Menu \n");
	printf("Enter 1 to calculate area of cicle : \n");
	printf("Enter 2 to calculate circumference of circle : \n");
	printf("Enter 3 to calculate volume of Sphere : \n");
	scanf("%d",&c);

	switch(c){
		case 1: a = 3.14 * r * r;
			printf("Area of circle is : %d\n",a);
			break;

		case 2: a = 2 * 3.14 * r;
			printf("Circumference of circle is : %d",a);
			break;

		case 3: a = (4/3) * 3.14 * r * r * r;
			printf("Volume of Sphere is : %d\n",a);
			break;


	}

	return 0;
}
