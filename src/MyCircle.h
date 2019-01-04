#pragma once
#include<ofMain.h>
#include"Animate.h"

class MyCircle
{
public:

	MyCircle();
	void setup(float radius);
	void draw(ofPoint pos);
	void update();
	~MyCircle();
private:
	float _radius;
	
};

