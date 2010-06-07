#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

	ofBackground(0,0,0);
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
	
	ofSetColor(0, 135, 225);
	
	ofRect(280, 190, 100, 100);			// draw a rect
	
	ofPushMatrix();						// start transforming the matrix
	
	ofTranslate(280, 190,0);			// translate it to the original rectangle coordinates
	ofRotate(30);						// rotate the matrix 30 degrees
	ofSetColor(255, 135, 155);			// set a different color so we can better notice the changes
	ofRect(0, 0, 100, 100);				// draw a rect (notice how it was affected by the matrix transformations)

	ofPopMatrix();						// finish the matrix transformations
	
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

