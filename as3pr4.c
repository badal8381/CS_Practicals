#include<stdio.h>

int main(){
	int day, month, year;
	printf("Enter day, month and year :");
	scanf("%d %d %d",&day,&month,&year);

	switch(month){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12: if((day<=31)&&(day>0)){
				 printf("Valid Date\n");
			 }else{
				 printf("Invalid Date\n");
			 }
				 break;	 
		case 4:
		case 6:
		case 9:
		case 11: if((day<=30)&&(day>0)){
				 printf("Valid Date\n");
			 }else{
				 printf("Invalid Date\n");
			 }
				 break;
			
		case 2: if(year%4==0){
				if((day<=29) && (day>0)){
					printf("Valid date\n");
				}else{
					printf("Invalid date\n");
				}
			}
				 break;
		default:printf("Invalid Date\n");
	}
	return 0;
}
