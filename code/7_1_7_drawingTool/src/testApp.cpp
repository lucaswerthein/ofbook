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
   
	
	for(int i = 0; i < drawnPoints.size(); i++){
		drawnPoints[i].x += ofRandom(-0.5, 0.5);
		drawnPoints[i].y += ofRandom(-0.5, 0.5);
		
	}
	
}

//--------------------------------------------------------------
void testApp::draw(){
	
	ofSetColor(255, 255, 255, 255);
	
    
	ofNoFill();
	ofBeginShape();
	for(int i = 0; i < drawnPoints.size(); i++){
		ofVertex(drawnPoints[i].x, drawnPoints[i].y);
	}
	ofEndShape();

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
  
	ofPoint tempPoint;
	tempPoint.x = x;
	tempPoint.y = y;
	
	drawnPoints.push_back(tempPoint);
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    
	drawnPoints.clear();
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){
    
}

