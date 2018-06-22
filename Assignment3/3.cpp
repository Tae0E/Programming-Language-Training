#include <stdio.h>
#include <string.h>

void main()
{
   char Str[20];
   char Arr1[16];
   int a;
   int b;
   char c='0';
   int i;
   int count=0;

   printf("ют╥б : ");
   gets_s(Str);



   for(i=0;i<10;i++)
   {
		Arr1[i] = c;
		c++;
   }
   c='a';
   for(i=10;i<16;i++)
   {
		Arr1[i] = c;
		c++;
   }
   c='a';

   for (b = 0; b < 16; b++)
   {
      for(a = 0; a < strlen(Str); a++)
      {
         if(Str[a] == Arr1[b])
			count++;
      }    
      if (count != 0)
		  printf("%c : %d, ", Arr1[b], count);
      count = 0;
   }
}