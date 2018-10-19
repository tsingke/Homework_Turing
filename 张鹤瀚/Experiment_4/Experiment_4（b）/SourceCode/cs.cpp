#include <iostream>
#include"xx.h"
float checkAgeScore(int age, float score)
{
	if (age < 16 || age>25) 
		throw age;
	if (score < 0 || score>5)
		throw score;
	return score*20;
}