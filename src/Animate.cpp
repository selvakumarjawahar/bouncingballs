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

Animate::~Animate()
{
}
