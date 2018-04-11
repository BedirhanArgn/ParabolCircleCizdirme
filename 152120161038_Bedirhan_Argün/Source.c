#include<stdio.h>
#include<stdlib.h> 
int main() {

	while (1) {
		int choice;
		printf("Which shape would you like to draw ?\n1.Line\n2.Parabola\n3.Circle\n4.Exit\n");
		scanf_s("%d", &choice);


		switch (choice) {
		case 1:
		{
			int a;
			int b;
			printf("ax+b=y icin a ve b degerlerini giriniz:\n");
			scanf_s("%d%d", &a, &b);
			for (int y = 10; y >= -10; y--) {
				for (int x = -10; x <= 10; x++)
				{
					if (y == a*x + b) {
						printf("*");

					}
					else if (x != 0 && y != 0) {
						printf(" ");
					}
					else
					{
						if (x == 0 && y == 0) //kesisim yeri icin sadece düz basmasýný istedik.
						{
							printf("|");
						}


						else {
							if (x == 0) {
								printf("|");
							}
							if (y == 0) {
								printf("-");
							}
						}
					}


				}
				printf("\n");
			}
			break;
		}
		case 2: {
			int a, b, c;
			printf("ax^2+bx+c formulu icin sirasiyla a,b,c degerlerini giriniz:");
			scanf_s("%d%d%d", &a, &b, &c);
			for (int y = 10; y >= -10; y--) {
				for (int x = -10; x <= 10; x++)
				{

					if (y == a*x*x + b*x + c)

					{
						printf("*");
					}
					else if (x != 0 && y != 0)
					{
						printf(" ");
					}
					else
					{
						if (x == 0 && y == 0) //kesisim yeri icin sadece düz basmasýný istedik.
						{
							printf("|");
						}

						else
						{
							if (x == 0 && y == 0)
							{
								printf("|");
							}
							else {
								if (x == 0) {
									printf("|");
								}
								if (y == 0)
								{
									printf("-");
								}
							}
						}
					}
				}
				printf("\n");
			}
			break;
		}
		case 3: {

			int a, b, r;
			printf("(x-a)^2+(y-b)^2=r^2 icin sirasiyla a b ve r degerlerini giriniz:\n");
			scanf_s("%d%d%d", &a, &b, &r);
			for (int y = 10; y >= -10; y--) {
				for (int x = -10; x <= 10; x++)
				{
					if (r*r == (x - a)*(x - a) + (y - b)*(y - b))
					{
						printf("*");

					}
					else if (x != 0 && y != 0)
					{
						printf(" ");
					}



					else
					{
						if (x == 0 && y == 0)
						{
							printf("|");
						}
						else {
							if (x == 0) {
								printf("|");
							}
							if (y == 0)
							{
								printf("-");
							}
						}
					}
				}
				printf("\n");
			}
			break;
		}
		case 4: {
			exit(1);
		}
		default: printf("yanlis bir tusa bastiniz\n");
		}

	}
	system("pause");
}