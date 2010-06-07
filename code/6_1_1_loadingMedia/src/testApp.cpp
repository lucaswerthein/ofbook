#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	
	ofBackground(0, 0, 0);
	ofEnableAlphaBlending();
	ofSetFrameRate(60);
	ofSetVerticalSync(true);		
	
	
	myPicture.loadImage("racoon.jpg");			// loadImage should happen in setup (only once!)
												// and OF knows how to find the data folder as long
												// as it's next to the binary file (inside of bin/)
	
}

//--------------------------------------------------------------
void testApp::update(){
	
	
}

//--------------------------------------------------------------
void testApp::draw(){
	
	ofSetColor(255, 255, 255);
	myPicture.draw(50,50);
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

