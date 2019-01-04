#pragma once
#include<ofMain.h>
class Animate
{
public:
	Animate();
	void setup(ofPoint posa, ofPoint posb);
	ofPoint moveLinear(float pct);
	~Animate();
private:
	ofPoint _posa;
	ofPoint _posb;
};

