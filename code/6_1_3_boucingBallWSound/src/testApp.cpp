#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	
	ofBackground(0, 0, 0);
	ofEnableAlphaBlending();
	ofSetFrameRate(60);
	ofSetVerticalSync(true);		
	
	
	xPos = 20;
	yPos = 20;
	xSpeed = 4;
	ySpeed = 5;
	radius = 30;
	
	chirpSound.loadSound("chirp.wav");
	
}

//--------------------------------------------------------------
void testApp::update(){
	
	
	xPos = xPos + xSpeed;
	yPos = yPos + ySpeed;
	
	
	bool bDidWeHitWall = false;		
	
	if(xPos > ofGetWidth() || xPos < 0){
		xSpeed = xSpeed * -1;
		bDidWeHitWall = true;
	}
	
	if(yPos > ofGetHeight() || yPos < 0){
		ySpeed = ySpeed *-1;
		bDidWeHitWall = true;
	}
	
	if (bDidWeHitWall){
		float pan = xPos / (float)ofGetWidth();
		float height = yPos / (float)ofGetHeight();
		
		chirpSound.setSpeed(0.5 + 2 * (1-height));
		chirpSound.setPan(pan);
		chirpSound.play();	
	}
	
	//printf("position is %f \n", position);
}

//--------------------------------------------------------------
void testApp::draw(){
	
	ofSetColor(255, 0, 128);
	ofCircle(xPos, yPos, radius);
	
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

