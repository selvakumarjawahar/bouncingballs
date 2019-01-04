#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	_pct = 0.0;
	_animate.setup({ 0.0,0.0 }, { 100.0,100.0 });
	_circle.setup(10.0);
}

//--------------------------------------------------------------
void ofApp::update(){
	_pos = _animate.moveLinear(_pct);
	_pct = _pct + 0.1;
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
