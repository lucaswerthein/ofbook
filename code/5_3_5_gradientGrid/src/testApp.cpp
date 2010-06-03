#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofBackground(0, 0, 0); // Set background color
    ofEnableAlphaBlending(); // Enable alpha blending
	
	
}

//--------------------------------------------------------------
void testApp::update(){
    
}

//--------------------------------------------------------------
void testApp::draw(){

	float x = 0;
    float y = 0;
    float   w = ofGetWidth()/50.0 + 1;
    float h = ofGetHeight()/30.0 + 1;
	
    for(int j=0; j<30; j++){
        for(int i=0; i<50; i++){
            ofSetColor(255/30 * j, 127, 255/50 * i, 200);
            x = ofGetWidth() / 50.0 * i;
            y = ofGetHeight() / 30.0 * j;
            ofRect(x, y, w, h);
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

