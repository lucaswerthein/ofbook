#include "testApp.h"
//--------------------------------------------------------------
void testApp::setup(){
    ofBackground(0, 0, 0); 
    ofSetFrameRate(60); 
    ofSetCircleResolution(64); 
    ofEnableAlphaBlending();    
   
    for(int i = 0; i < NUM_BALLS; i++){
        posX[i] = ofRandom(0, ofGetWidth()); 
		posY[i] = ofRandom(0, ofGetHeight()); 
        velX[i] = ofRandom(-6, 6); 
        velY[i] = ofRandom(-6, 6);     
	}
}

//--------------------------------------------------------------
void testApp::update(){
    
    for(int i = 0; i < NUM_BALLS; i++){
        posX[i] = posX[i] + velX[i]; 
        posY[i] = posY[i] + velY[i];
        
        
        if(posX[i] < 0 || posX[i] > ofGetWidth()){
            velX[i] = velX[i] * -1;
        }
        if(posY[i] < 0 || posY[i] > ofGetHeight()){
            velY[i] = velY[i] * -1;
        }
    }
}

//--------------------------------------------------------------
void testApp::draw(){
	
    ofSetColor(200, 40, 150, 100);     
    
	for(int i = 0; i < NUM_BALLS; i++){
        ofCircle(posX[i], posY[i], 20); 
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

