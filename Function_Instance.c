#include <stdio.h>
#define PI 3.14159
float all_Volume (float radius, float height)
{
	float volume;
	volume = PI * radius * radius * height;
	return volume;
}
int main (void)
{
	float r;
	float h;
	float v;
	printf ("Enter the Value of the Cylinder Radius: ");
	scanf ("%f", &r);
	printf ("\n");
	printf ("Enter the Value of the Cylinder Height: ");
	scanf ("%f", &h);
	printf ("\n");
	v = all_Volume (r, h);
	printf ("%f", v);
	printf ("\n");
	printf ("==========VOLUME==========");
	printf ("\n");
	printf ("The Volume of the Cylindrical Tank is %f Litres", v);
	return 0;
}
