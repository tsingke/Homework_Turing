#pragma once
#include <iostream>
#include <string>
using namespace std;

class Vectors
{
	double x;
	double y;

public:
	Vectors(int a=0,int b=0);
	~Vectors();
	int Getx();
	int Gety();
	void print();
	Vectors operator+(Vectors vec);
	friend Vectors operator-(Vectors v1, Vectors v2);
};
