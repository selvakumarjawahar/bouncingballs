#pragma once

#include "ofMain.h"
#include "Animate.h"
#include "MyCircle.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

private:
	Animate _animate;
	MyCircle _circle1,_circle2,_circle3,_circle4;
	float _pct;
	ofPoint _pos1,_pos2,_pos3,_pos4;
	ofPoint _posa1,_posa2,_posb1,_posb2;
	float line;
	ofPoint orig;
};
