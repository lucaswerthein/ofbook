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
	
	ofSetColor(ofRandom(0,255), ofRandom(0,255), ofRandom(0,255), ofRandom(0,255));
	
	int y = ofRandom(0,ofGetHeight());
	int x = ofRandom(0,ofGetWidth());
	int radius = ofRandom(0, 50);
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

