#include "testApp.h"
//--------------------------------------------------------------
void testApp::setup(){
    ofBackground(0, 0, 0); 
    ofSetFrameRate(60); 
    ofSetCircleResolution(64); 
    ofEnableAlphaBlending();    
   
    for(int i = 0; i < NUM; i++){
        xPos[i] = ofRandom(0, ofGetWidth()); 
		yPos[i] = ofRandom(0, ofGetHeight()); 
        xSpeed[i] = ofRandom(-6, 6); 
        ySpeed[i] = ofRandom(-6, 6);     }
}

//--------------------------------------------------------------
void testApp::update(){
    
    for(int i = 0; i < NUM; i++){
        xPos[i] = xPos[i] + xSpeed[i]; 
        yPos[i] = yPos[i] + ySpeed[i];
        
        
        if(xPos[i] < 0 || xPos[i] > ofGetWidth()){
            xSpeed[i] = xSpeed[i] * -1;
        }
        if(yPos[i] < 0 || yPos[i] > ofGetHeight()){
            ySpeed[i] = ySpeed[i] * -1;
        }
    }
}

//--------------------------------------------------------------
void testApp::draw(){
    ofSetColor(200, 40, 150, 100);     
    for(int i = 0; i < NUM; i++){
        ofCircle(xPos[i], yPos[i], 20); 
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

