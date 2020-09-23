#include<stdio.h>
int main ()
{
	int x;
	
		printf("enter your choice");
		scanf("%d",&x);
	
	switch(x)
	{
		case 1: printf(" food item - pizza \n price -Rs 239");
		break;
		case 2: printf(" food item - burger \n price -Rs 129");
		break;
		case 3: printf(" food item - pasta \n price -Rs 179");
		break;
		case 4: printf(" food item - french fries \n price -Rs 99");
		break;
		case 5: printf(" food item - sandwich \n price -Rs 149");
		break;
	}
	return 0;
}
