#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	ofBackground(0,0,0);						// set the background color to black
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
	
	//Basic Shapes examples 
	
	ofSetColor(150, 255, 255);					// define color to use when drawing
	ofLine(100, 100, 540, 380);					// draw Line
	ofSetColor(150, 0, 80);					// define color to use when drawing
	ofRect(220, 140, 200, 200);					// draw Rectangle
	ofSetColor(255, 0, 255);					// define color to use when drawing
	ofTriangle(200, 295, 450, 295, 325, 145);	// draw Triangle

	
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

