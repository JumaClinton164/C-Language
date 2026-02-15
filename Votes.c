#include <stdio.h>
#define RESPONSE_SIZE 20
#define FREQUENCY_SIZE 5
int main (void)
{
int votes[RESPONSE_SIZE];
int ratings[FREQUENCY_SIZE] = {0};
for (int a=0; a<RESPONSE_SIZE; a++)
{
int b;
int l = a;
printf("Enter Vote (%d / %d):",  ++l, RESPONSE_SIZE);
scanf("%d", &b);
votes[a] = b;
printf("\n");
if (b<1 || b>5)
{
--a;
printf("Invalid Vote!!! Valid Votes are in the Range of: 1-5.");
printf("\n");
}
else
{
++ratings[votes[a]];
}
}
printf("%s%10s", "Ratings", "Votes");
printf("\n");
for (int c=1; c<=FREQUENCY_SIZE; c++)
{
printf("%10d%20d", c, ratings[c]);
printf("\n");
}
return 0;
}

