#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>
struct point
{
	int x;
	int y;
	char dummy[100];
}A[10000000];
double cbr_distance(struct point *pnt, struct point *pt);
void main()
{
	struct point p;
	int i;
	double distance;
	clock_t start, stop;
	double rduration, vduration;

	printf("입력 : ");
	scanf("%d %d", &p.x, &p.y);

	srand(time(NULL));
	for (i = 0; i < 10000000; i++)
	{
		A[i].x = rand() % 10000;
		A[i].y = rand() % 10000;
	}

	printf("call by value\n");
	start = clock();
	for (i = 0; i < 10000000; i++)
	{
		distance = sqrt((A[i].x - p.x)*(A[i].x - p.x) + (A[i].y - p.y)*(A[i].y - p.y));
		if (distance < 100)
			printf("%lf\t", distance);
	}
	stop = clock();
	vduration = (double)(stop - start) / CLOCKS_PER_SEC;

	printf("\n");

	printf("call by reference\n");
	start = clock();
	for (i = 0; i < 10000000; i++)
	{
		if (cbr_distance(&p, &A[i]) < 100)
			printf("%lf\t", cbr_distance(&p, &A[i]));
	}
	stop = clock();
	rduration = (double)(stop - start) / CLOCKS_PER_SEC;

	printf("reference 걸린시간 : %f\n", rduration);
	printf("value 걸린시간 : %f\n", vduration);
}

double cbr_distance(struct point *pnt, struct point *a)
{
	double distance;
	distance = sqrt((a->x - pnt->x)*(a->x - pnt->x) + (a->y - pnt->y)*(a->y - pnt->y));
	return distance;
}