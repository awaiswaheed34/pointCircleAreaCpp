#include <iostream>
#include <vector>
#include "circle.h"
#include "Sqaure.h"
using namespace std;

int main()
{
	circle c(10, 101, 1);
	c.output();
	/*vector <Point> vec;
	vec.push_back(Point(1, 1));
	vec.push_back(circle(2, 2, 2));
	vec.push_back(Sqaure(5, 5, 2, 2));
	for (int i = 0; i < vec.size(); i++)
	{
		vec[i].output();
	}*/
	return 0;
}