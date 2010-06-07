#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	
	ofBackground(0, 0, 0);
	ofEnableAlphaBlending();
	ofSetFrameRate(60);
	ofSetVerticalSync(true);		
	
	myBase.loadImage("base.jpg");
	myFont.loadFont("frabk.ttf", 22);			// load the font in at this size (32 pixels) 		
	Base.loadSound("base.aif");					// load a sound in as well
	
}

//--------------------------------------------------------------
void testApp::update(){
	
	
}

//--------------------------------------------------------------
void testApp::draw(){
	
	ofSetColor(255, 255, 255);
	
	myBase.draw(250,150);
	
	myFont.drawString("click to hear the sound", 245,100);
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
	Base.play();
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
	
}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){
	
}

