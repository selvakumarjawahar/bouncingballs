#include "MyCircle.h"



MyCircle::MyCircle()
{
	
}

void MyCircle::setup(float radius) {
	_radius = radius;
	_clr.r = 255; _clr.g = 0; _clr.b = 0; _clr.a = 255;
}



void MyCircle::draw(ofPoint pos) {
	ofSetColor(_clr);
	ofDrawCircle(pos.x, pos.y, _radius);
}

void MyCircle::draw(ofPoint pos, ofColor clr) {
	ofSetColor(clr);
	ofDrawCircle(pos.x, pos.y, _radius);
}


void MyCircle::update() {

}

MyCircle::~MyCircle()
{
}
