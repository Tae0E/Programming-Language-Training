#include <stdio.h>

void main()
{
   int A[5];
   int B[5];
   int Sum[5];
   int Ints[5];
   int Sub[5];
   int a, b;
   int c = 0;
   int count = 0;

   printf("�Է�(A) : ");
   for (a = 0; a < 5; a++)
      scanf("%d", &A[a]);
   printf("�Է�(B) : ");
   for (a = 0; a < 5; a++)
      scanf("%d", &B[a]);
   printf("������ : ");
   for (a = 0; a < 5; a++)
      printf("%d ", A[a]);
   for (a = 0; a < 5; a++)
   {
      for (b = 0; b < 5; b++)
      {
         if (A[b] == B[a])
         {
            count++;
            break;
         }
      }
      if (count == 0)
      {
         Sum[c] = B[a];
         printf("%d ", Sum[c]);
         c++;
      }
      count = 0;
   }
   c = 0;
   printf("\n");
   printf("������ : ");
   for (a = 0; a < 5; a++)
   {
      for (b = 0; b < 5; b++)
      {
         if (A[b] == B[a])
         {
            count++;
            break;
         }
      }
      if (count > 0)
      {
         Ints[c] = B[a];
         printf("%d ", Ints[c]);
         c++;
      }
      count = 0;
   }
   c = 0;
   printf("\n");
   printf("������ : ");
   for (b = 0; b < 5; b++)
   {
      for (a = 0; a < 5; a++)
      {
         if (A[b] == B[a])
         {
            count++;
            break;
         }
      }
      if (count == 0)
      {
         Sub[c] = A[b];
         printf("%d ", Sub[c]);
         c++;
      }
      count = 0;
   }
}