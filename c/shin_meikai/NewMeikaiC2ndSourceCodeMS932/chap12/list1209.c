#include <math.h>
#include <stdio.h>

#define sqr(n)  ((n) * (n))


typedef struct  {
	double x;	
	double y;	
} Point;


typedef struct  {
	Point  pt;		
	double fuel;	
} Car;


double distance_of(Point p1, Point p2)
{
	return sqrt(sqr(p1.x - p2.x) + sqr(p1.y - p2.y));
}


void put_info(Car c)
{
	printf("current point(%.2f, %.2f)\n", c.pt.x, c.pt.y);
	printf("remaining fuel %.2fl\n", c.fuel);
}


int move(Car *c, Point dest)
{
	
	double d = distance_of(c->pt, dest);	
	if (d > c->fuel)						
		return 0;							
	c->pt = dest;
	c->fuel -= d;
	
	return 1;								
}

int main(void)
{
	Car mycar = {{0.0, 0.0}, 90.0};

	while (1) {
		int select;
		int select2;
		Point dest;

		put_info(mycar);	

		printf("Do you want to move to the next place?[Yes...1/No...0]\n");
		scanf("%d", &select);
		if (select != 1) break;
		printf("[Type the destination...1/Type the distance...2]\n");
		scanf("%d", &select2);
		if(select2==1){
			printf("x axis of the destination: ");  scanf("%lf", &dest.x);
			printf("y axis of the destination: ");  scanf("%lf", &dest.y);

		}
		else{
			printf("the distance you want to move for x axis: ");  scanf("%lf", &dest.x);
			dest.x=dest.x+mycar.pt.x;
			printf("the distance you want to move for y axis: ");  scanf("%lf", &dest.y);
			dest.y=dest.y+mycar.pt.y;

		}
		

		if (!move(&mycar, dest))
			puts("\athere's too fuel to drive.");
	}

	return 0;
}
