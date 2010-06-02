#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

	ofBackground(0, 0, 0);
	ofSetBackgroundAuto(false);
	ofEnableAlphaBlending();
	
	
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
	
	r = ofRandom(0, 255);
	g = ofRandom(0, 255);
	b = ofRandom(0, 255);
	a = ofRandom(0, 200);
	ofSetColor(r, g, b, a);
	
	y = ofRandom(0,ofGetHeight());
	x = ofRandom(0,ofGetWidth());
	radius = ofRandom(0, 50);
	ofCircle(x, y, radius);

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

