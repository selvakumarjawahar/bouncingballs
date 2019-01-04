#include "Animate.h"



Animate::Animate()
{
}

void Animate::setup(ofPoint posa, ofPoint posb) {
	_posa = posa;
	_posb = posb;
}

ofPoint Animate::moveLinear(float pct) {
	ofPoint pos;
	pos.x = (1 - pct) * _posa.x + (pct) * _posb.x;
	pos.y = (1 - pct) * _posa.y + (pct) * _posb.y;
	return pos;
}

Animate::~Animate()
{
}
