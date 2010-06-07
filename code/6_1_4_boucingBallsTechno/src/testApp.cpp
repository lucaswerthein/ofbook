#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	
	ofBackground(0, 0, 0);
	ofEnableAlphaBlending();
	ofSetFrameRate(60);
	ofSetVerticalSync(true);	
	ofNoFill();
	
	for(int i = 0; i<NUM;i++){
	xPos[i] = ofRandom(0,ofGetWidth());
	yPos[i] = ofRandom(0,ofGetHeight());
	xSpeed[i] = ofRandom(-5,5);
	ySpeed[i] = ofRandom(-5,5);
	}
	
	chirpSound.loadSound("chirp.wav");
	radius = 30;
}

//--------------------------------------------------------------
void testApp::update(){
	
	for(int i = 0; i<NUM;i++){
	xPos[i] = xPos[i] + xSpeed[i];
	yPos[i] = yPos[i] + ySpeed[i];
	
	
	bool bDidWeHitWall = false;		
	
	if(xPos[i] > ofGetWidth() || xPos[i] < 0){
		xSpeed[i] = xSpeed[i] * -1;
		bDidWeHitWall = true;
	}
	
	if(yPos[i] > ofGetHeight() || yPos[i] < 0){
		ySpeed[i] = ySpeed[i] *-1;
		bDidWeHitWall = true;
	}
	
	if (bDidWeHitWall){
		float pan = xPos[i] / (float)ofGetWidth();
		float height = yPos[i] / (float)ofGetHeight();
		
		chirpSound.setSpeed(0.1 + 1 * (1-height));
		chirpSound.setPan(pan);
		chirpSound.play();	
	}
	
	//printf("position is %f \n", position);
}
}

//--------------------------------------------------------------
void testApp::draw(){
	
	ofSetColor(255, 0, 128);
	for(int i = 0; i < NUM; i++){
	ofCircle(xPos[i], yPos[i], radius);
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

