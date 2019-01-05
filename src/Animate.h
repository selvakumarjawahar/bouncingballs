#pragma once
#include<ofMain.h>
#include<cmath>

class Animate
{
public:
	Animate();
	ofPoint moveLinear(float pct,ofPoint& const posa , ofPoint& const posb);
	ofPoint movesquared(float pct , ofPoint& const posa, ofPoint& const posb);
	ofPoint moveCircle(float angle_deg, ofPoint& const orig, float radius);
	ofPoint moveNoisily(float pct, ofPoint& const posa, ofPoint& const posb);

	~Animate();
};

