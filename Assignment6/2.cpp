#include <stdio.h>
#include <time.h>
#include <stdlib.h>
char *face[] = { "Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King" };
char *suit[] = { "Spades", "Diamonds", "Hearts", "Clubs" };
struct card {
	char * face;
	char * suit;
}deck[52];
void main()
{
	struct card temp;
	int i, j, a, b;
	int cnt = 0;
	for (j = 0; j < 4; j++)
	{
		for (i = 0; i < 13; i++)
		{
			deck[cnt].face = face[i];
			deck[cnt].suit = suit[j];
			cnt++;
		}
	}
	srand(time(NULL));

	for (a = 0; a < 52; a++)
	{
		b = rand() % 52;
		temp = deck[a];
		deck[a] = deck[b];
		deck[b] = temp;
	}
	for (cnt = 0; cnt < 52; cnt++)
	{
		printf("%s of %s\t\t", deck[cnt].face, deck[cnt].suit);
		if (cnt % 2 == 1)
			printf("\n");
	}
}