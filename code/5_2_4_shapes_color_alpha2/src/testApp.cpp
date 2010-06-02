#include "testApp.h"


//--------------------------------------------------------------
void testApp::setup(){
	ofEnableAlphaBlending();					// enable transparency and Blending
	ofBackground(255,255,255);					// set the background to white
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
	
	// shapes color and transparency example 2
	ofNoFill();									// set the draw mode to be outline -- noFill()
	ofSetColor(0,0,0);							// set the color of the shape you'll draw next
	ofCircle(380, 201, 90);						// draw the shape - circle
	
	ofFill();
	ofSetColor(255, 0, 0, 180);					// choose the color and transparency values for the triangle you'll be drawing (Red, Green, Blue, Alpha)
	ofTriangle(225, 215, 475, 215, 350, 365);	// drawing a Triangle - values are for X,Y for each of the 3 points that define the shape
	

	ofSetColor(150, 255, 255,150);				// choose the color and transparency values for the rectangle shape you'll be drawing (Red, Green, Blue, Alpha)
	ofRect(180, 145, 150, 150);					// drawing a Rectangle - values are for: X position, Y position, Width, Height	
	
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

