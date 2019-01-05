#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
	ofSetBackgroundColor(0, 0, 0, 255);
	_pct = 0.0;
	_circle1.setup(10.0);
	_circle2.setup(10.0);
	_circle3.setup(10.0);
	_circle4.setup(10.0);

	_posa1.x = 0; _posa1.y = line;
	_posb1.x = 1000; _posb1.y = line+500;

	_posa2.x = 100; _posa1.y = line + 50;
	_posb2.x = 900; _posb2.y = line + 50;

	orig.x = 500;
	orig.y = 500;
	line = 100;
}

//--------------------------------------------------------------
void ofApp::update(){

	if (_pct > 1) {
		 line += 5;
		_posa1.x = 0;
		_posb1.x = 1000;
		_posa1.y = line;
		_posb1.y = line;

		_posa2.x = 100;
		_posb2.x = 900;
		_posa2.y = line + 50;
		_posb2.y = line + 50;

		_pct = 0;
	}
	_pos1 = _animate.moveLinear(_pct,_posa1,_posb1);
	_pos2 = _animate.movesquared(_pct,_posa2,_posb2);
	_pos3 = _animate.moveCircle(_pct*360, orig,100 );
	_pos4 = _animate.moveNoisily(_pct, _posa1, _posb2);
	_pct = _pct + 0.01;
}

//--------------------------------------------------------------
void ofApp::draw(){

	_circle1.draw(_pos1, {255,0,0});
	_circle2.draw(_pos2, {0,255,0});
	_circle3.draw(_pos3, { 0,0,255 });
	_circle4.draw(_pos4, { 255,0,255 });

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
