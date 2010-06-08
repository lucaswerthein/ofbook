#include "testApp.h"
//--------------------------------------------------------------
void testApp::setup(){
    ofBackground(0, 0, 0); 
    ofSetFrameRate(60); 
    ofSetCircleResolution(64); 
    ofEnableAlphaBlending();    
   
}

//--------------------------------------------------------------
void testApp::update(){
    
	for(int i = 0; i < bouncers.size(); i++){
		bouncers[i].update();  
	}
}

//--------------------------------------------------------------
void testApp::draw(){
	
	for(int i = 0; i < bouncers.size(); i++){
		bouncers[i].draw();  
	}
	
	
	ofSetColor(0, 0, 0);
	ofRect(5,5,200,30);
	ofSetColor(255, 255, 255);
	ofDrawBitmapString("number of objects: " + ofToString((int)bouncers.size()), 20, 20);
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
    
	// we make a temporary bouncingBall
	bouncingBall myBall;
	myBall.setup();
	myBall.posX = x;
	myBall.posY = y;
		
	// then we add it to the growable array
	bouncers.push_back(myBall);
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

