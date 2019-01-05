#include "ofApp.h"

float line = 500.0;
//--------------------------------------------------------------
void ofApp::setup(){
	ofSetBackgroundColor(0, 0, 0, 255);
	_pct = 0.0;
	_circle.setup(10.0);
	_posa.x = 0; _posa.y = line;
	_posb.x = 0; _posb.y = line;
}

//--------------------------------------------------------------
void ofApp::update(){

	if (_pct > 1.0) {
		 line += 5;
		_posa.x = 0;
		_posb.x = 1000;
		_posa.y = line;
		_posb.y = line;
		_pct = 0;
	}
	//_pos = _animate.moveLinear(_pct,_posa,_posb);
	_pos = _animate.movesquared(_pct,_posa,_posb);
	_pct = _pct + 0.001;
}

//--------------------------------------------------------------
void ofApp::draw(){

	_circle.draw(_pos);
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
