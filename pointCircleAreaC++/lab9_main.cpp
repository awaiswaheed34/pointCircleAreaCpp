#include <iostream>
#include <vector>
#include "circle.h"
#include "Square.h"
using namespace std;

int main()
{
	vector <Point*> vec;
	vec.push_back(new Point(1, 1));
	vec.push_back(new circle(2, 2, 2));
	vec.push_back(new Square(5, 5, 2, 2));
	for (int i = 0; i < vec.size(); i++)
	{
		vec[i]->output();
	}
	return 0;
}