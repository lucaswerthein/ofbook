#include "testApp.h"
//--------------------------------------------------------------
void testApp::setup(){
    ofBackground(0, 0, 0); 
    ofSetFrameRate(60); 
    ofSetCircleResolution(64); 
    ofEnableAlphaBlending();    
   
    for(int i = 0; i < 10; i++){
        posX[i] = ofRandom(0, ofGetWidth());
		posY[i] = ofRandom(0, ofGetHeight());
		
	}
	
	counter = 0;
}

//--------------------------------------------------------------
void testApp::update(){
   
}

//--------------------------------------------------------------
void testApp::draw(){
	
	ofSetColor(255, 255, 255, 80);
	
    for(int i = 0; i < 10; i++){
        ofCircle(posX[i],posY[i], 20); 
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
	counter %= 10;
	
	/* if (counter == 10) {
	 counter = 0
	}
	 */
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){
    
}

