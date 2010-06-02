#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

	ofBackground(255,255,255);					// set the background to white

}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
	
	//shapes_color_alpha example

	ofFill();									// draw filled shapes
	ofSetCircleResolution(6);					// set the circle resolution
	ofSetColor(255, 0, 0,150);					// set the color
	ofCircle(280, 240, 50);						// draw the circle
	
	ofSetCircleResolution(10);
	ofSetColor(0, 255, 0,150);
	ofCircle(310, 240, 50);
	
	ofSetCircleResolution(50);
	ofSetColor(0, 0, 255,150);
	ofCircle(340, 240, 50);
	
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

