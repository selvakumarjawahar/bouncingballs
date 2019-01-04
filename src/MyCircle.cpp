#include "MyCircle.h"



MyCircle::MyCircle()
{
}

void MyCircle::setup(float radius) {
	_radius = radius;
}

void MyCircle::draw(ofPoint pos) {
	ofDrawCircle(pos.x, pos.y, _radius);
}

void MyCircle::update() {

}

MyCircle::~MyCircle()
{
}
