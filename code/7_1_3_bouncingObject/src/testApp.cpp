#include "testApp.h"
//--------------------------------------------------------------
void testApp::setup(){
    ofBackground(0, 0, 0); 
    ofSetFrameRate(60); 
    ofSetCircleResolution(64); 
    ofEnableAlphaBlending();    
   
    for(int i = 0; i < NUM_BALLS; i++){
		bouncers[i].setup();  
	}
}

//--------------------------------------------------------------
void testApp::update(){
    
	for(int i = 0; i < NUM_BALLS; i++){
		bouncers[i].update();  
	}
}

//--------------------------------------------------------------
void testApp::draw(){
	
	for(int i = 0; i < NUM_BALLS; i++){
		bouncers[i].draw();  
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

