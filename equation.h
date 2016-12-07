#pragma once

class equation

{
private:
	double x;
	double y;
	double z;
	double al;
public:
	equation();
	equation(double, double, double);
	void solve();
	double getResult();
	~equation();
};


