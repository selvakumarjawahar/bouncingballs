#pragma once
#include<ofMain.h>
class Animate
{
public:
	Animate();
	ofPoint moveLinear(float pct,ofPoint& const posa , ofPoint& const posb);
	ofPoint movesquared(float pct , ofPoint& const posa, ofPoint& const posb);

	~Animate();
};

