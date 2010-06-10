#include "testApp.h"
//--------------------------------------------------------------
void testApp::setup(){
    ofBackground(0, 0, 0); 
    ofSetFrameRate(60); 
    ofSetCircleResolution(64); 
    ofEnableAlphaBlending();    
   
    for(int i = 0; i < 10; i++){				//go through the loop ten times
        posX[i] = ofRandom(0, ofGetWidth());	//floating point in the array will have a random position between 0 and screen width
		posY[i] = ofRandom(0, ofGetHeight());	//floating point in the array will have a random position between 0 and screen height
		
	}
	
	counter = 0; 
}

//--------------------------------------------------------------
void testApp::update(){
   
}

//--------------------------------------------------------------
void testApp::draw(){
	
	ofSetColor(50, 200, 100);
	
    for(int i = 0; i < 10; i++){			//go through loop ten times
        ofCircle(posX[i],posY[i], 20);		//draw 10 circles
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
    
	
	posX[counter] = x;
	posY[counter] = y;
	
	counter++;
	//counter %= 10;
	
	 if (counter == 10) {
		 counter = 1;		//Increase counter by one until it reaches 10. If counter reaches 10, return to first value.
	}
	 
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){
    
}

