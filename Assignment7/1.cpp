#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>
typedef struct
{
	double x;
	double y;
}Rect;

typedef struct
{
	double r;
	double theta;
}Pola;
typedef enum { R, P } ftype;
struct position
{
	ftype type;
	union {
		Rect rec;
		Pola pol;
	}p;
}Pos[10];
void main()
{
	double X, Y, R, Theta;
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
	{
		Pos[i].type = (ftype)(rand() % 2);
		if (Pos[i].type == 0)
		{
			Pos[i].p.rec.x = rand() % 1001 - 500;
			Pos[i].p.rec.y = rand() % 1001 - 500;
		}
		else
		{
			Pos[i].p.pol.r = rand() % 750;
			Pos[i].p.pol.theta = rand() % 360;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		if (Pos[i].type == 0)
		{
			printf("������ǥ(x, y)\n");
			printf("x : %lf\n", Pos[i].p.rec.x);
			printf("y : %lf\n", Pos[i].p.rec.y);
			printf("����\n");
			R = sqrt(Pos[i].p.rec.x*Pos[i].p.rec.x + Pos[i].p.rec.y*Pos[i].p.rec.y);
			Theta = atan2(Pos[i].p.rec.y, Pos[i].p.rec.x)*180/3.14;
			printf("r : %lf\n", R);
			if (Theta < 0)
				printf("�� : %lf\n", Theta + 360);
			else
				printf("�� : %lf\n", Theta);
		}
		else
		{
			printf("����ǥ(r, ��)\n");
			printf("r : %lf\n", Pos[i].p.pol.r);
			printf("�� : %lf\n", Pos[i].p.pol.theta);
			printf("����\n");
			X = Pos[i].p.pol.r * cos(Pos[i].p.pol.theta * 3.14 / 180);
			Y = Pos[i].p.pol.r * sin(Pos[i].p.pol.theta * 3.14 / 180);
			printf("x : %lf\n", X);
			printf("y : %lf\n", Y);
		}
		printf("\n");
	}
	
}