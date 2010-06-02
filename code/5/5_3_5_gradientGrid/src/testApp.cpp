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

	x = 0; // Set variable x to 0
    y = 0; // Set variable y to 0
    w = ofGetWidth()/50.0 + 1; // Width of rectangle
    h = ofGetHeight()/30.0 + 1; // Height of rectangle
    
    for(int j=0; j<30; j++){
        for(int i=0; i<50; i++){
            ofSetColor(255/20 * j, 127, 255/50 * i, 200); // Color of rectangles change as values of "i" and "j" change
            x = ofGetWidth() / 50.0 * i; // Equally spaced out by 20.48 pixels alonng the x coordinate
            y = ofGetHeight() / 30.0 * j; // Equally spaced out by 25.6 pixels alonng the y coordinate
            ofRect(x, y, w, h); // Draw rectangle 
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

