#pragma once

class Base
{
private:
	int a;
public:
	Base(int x = 0):a(x){}
	int getA() const;
};