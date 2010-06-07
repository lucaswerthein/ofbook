#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	
	ofBackground(0, 0, 0);
	ofEnableAlphaBlending();
	ofSetFrameRate(60);
	ofSetVerticalSync(true);		
	
	
	myPicture.loadImage("jump.png");			// loadImage should happen in setup (only once!)
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
	
	unsigned char * pixels = myPicture.getPixels();
	
	for (int i = 0; i < myPicture.width; i += 15){
		for (int j = 0; j < myPicture.height; j+= 15){
			
			int pixel = pixels[j * myPicture.width + i];
			float brightness = pixel / 255.0;
			ofSetColor(255, 255, 255);
			ofCircle(i, 300 + j, 1 + brightness*3);
		}
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

