#include "Animate.h"



Animate::Animate()
{
}

ofPoint Animate::moveLinear(float pct,ofPoint& const posa, ofPoint& const posb) {
	ofPoint pos;
	pos.x = (1 - pct) * posa.x + (pct) * posb.x;
	pos.y = (1 - pct) * posa.y + (pct) * posb.y;
	return pos;
}

ofPoint Animate::movesquared(float pct, ofPoint& const posa, ofPoint& const posb) {
	ofPoint pos;
	pos.x = (pct * posb.x) + posa.x ;
	pos.y = (pct * pct * posb.y) + posa.y;
	return pos;
}
ofPoint Animate::moveCircle(float angle_deg, ofPoint& const orig, float radius) {
	ofPoint pos;
	pos.x = orig.x + radius * std::cos(ofDegToRad(angle_deg));
	pos.y = orig.y + radius * std::sin(ofDegToRad(angle_deg));
	return pos;
}
ofPoint Animate::moveNoisily(float pct, ofPoint& const posa, ofPoint& const posb) {
	ofPoint pos;
	pos.x = ofMap(ofNoise(pct), 0, 1, posa.x, posb.x);
	pos.y = ofMap(ofNoise(pct), 0, 1, posa.y, posb.y);
	return pos;
}

Animate::~Animate()
{
}
