#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	ofBackground(0, 0, 0);
	ofEnableAlphaBlending();
	ofSetCircleResolution(64);
	ofGetElapsedTimef();

}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
	ofSetColor(255, 0, 0, 50);
	int x = 512;
	int y = 384;
	for(int i = 0; i < 10; i++){
		ofCircle(x, y, i*30);	
	}

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

