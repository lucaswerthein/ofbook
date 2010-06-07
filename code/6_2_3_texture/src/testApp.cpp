#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	
	ofBackground(0, 0, 0);
	ofEnableAlphaBlending();
	ofSetFrameRate(60);
	ofSetVerticalSync(true);		
	
	
	width = 640;
	height = 480;
	pixels = new unsigned char[width*height];
	myTexture.allocate(width, height, GL_LUMINANCE);
	for (int i = 0; i < width * height; i++){
		pixels[i] = ofRandom(0,255);
	}
	myTexture.loadData(pixels, width, height, GL_LUMINANCE);
	
}

//--------------------------------------------------------------
void testApp::update(){
	
	
	int maxBrightness = ofClamp(mouseX, 0,255);
	for (int i = 0; i < width * height; i++){
		pixels[i] = ofRandom(0,maxBrightness);
	}
	myTexture.loadData(pixels, width, height, GL_LUMINANCE);
	
}

//--------------------------------------------------------------
void testApp::draw(){
	
	ofSetColor(255, 255, 255);
	myTexture.draw(0,0);

	
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

