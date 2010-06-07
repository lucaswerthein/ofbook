#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

	ofBackground(0,0,0);		//set the background color to white

}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){

	// fill_noFill example
	
	ofFill();					// draw using fill
 	ofCircle(300, 240, 50);		// draw filled circle
 	ofNoFill();					// draw using noFill
 	ofCircle(340, 240, 50);		// draw outlined circle
	
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

