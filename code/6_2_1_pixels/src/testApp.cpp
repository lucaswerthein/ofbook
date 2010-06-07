#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	
	ofBackground(0, 0, 0);
	ofEnableAlphaBlending();
	ofSetFrameRate(60);
	ofSetVerticalSync(true);		
	
	
	myPicture.loadImage("clouds.jpg");			// loadImage should happen in setup (only once!)
												// and OF knows how to find the data folder as long
												// as it's next to the binary file (inside of bin/)
	
	
	myPicture.setImageType(OF_IMAGE_GRAYSCALE);
	
}

//--------------------------------------------------------------
void testApp::update(){
	
	
}

//--------------------------------------------------------------
void testApp::draw(){
	
	ofSetColor(255, 255, 255);
	myPicture.draw(0,0);
	
	
	// if the mouse is in the picture, let's get the color under the mouse
	// set the color
	
	if ((mouseX >= 0 && mouseX < myPicture.width) && (mouseY >= 0 && mouseY < myPicture.height)){
		unsigned char * pixels = myPicture.getPixels();
		int pixUnderMouse = pixels[mouseY * myPicture.width + mouseX];
		ofSetColor(pixUnderMouse, pixUnderMouse, pixUnderMouse);
		ofRect(myPicture.width, 0, 100,100);
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

