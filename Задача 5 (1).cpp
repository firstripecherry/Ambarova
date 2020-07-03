#include "stdafx.h"
#include <iostream>
using namespace std;

class Radius
{
private:
	double radius; 

	friend double GetLength(Radius&);
	friend double GetArea(Radius&);

	friend class Volume;

public:
	
	double Get(void) { return radius; }
	void Set(double nradius) { radius = nradius; }
};

double GetLength(Radius& r)
{
	
	return (double)(2 * r.radius * 3.1415);
}

class Volume
{
public:
	
	double GetVolume(Radius* r)
	{
	
		return (double)(4.0 / 3.0 * 3.1415 * r->radius * r->radius * r->radius);
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	Radius r;
	Volume v;
	double len, area, vol;

	r.Set(3);

	len = GetLength(r);
	area = ::GetArea(r); 
	vol = v.GetVolume(&r);

	cout << "Length = " << len << endl; 
	cout << "Area = " << area << endl;
	cout << "Volume = " << vol << endl;

	return 0;
}