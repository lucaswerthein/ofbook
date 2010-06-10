#include "testApp.h"
//--------------------------------------------------------------
void testApp::setup(){
    ofBackground(0, 0, 0);								//Set color background
    ofSetFrameRate(60);									//Set frame rate
    ofSetCircleResolution(64);							//Set circle resolution
    ofEnableAlphaBlending();							//Enable alpha channel	    
   
    for(int i = 0; i < NUM_BALLS; i++){					//For loop will go through NUM_BALLS array in setup
		bouncers[i].setup();							//bouncers will look for the point of the array we are in and call the setup
														//function we defined in our bouncingBall.h
	}
}

//--------------------------------------------------------------
void testApp::update(){
    
	for(int i = 0; i < NUM_BALLS; i++){					//For loop will go through NUM_BALLS array and update 250 balls frame by frame
		bouncers[i].update();							//bouncers will look for the point of the array we are in and call the update
														//function we defined in our bouncingBall.h
	}
}

//--------------------------------------------------------------
void testApp::draw(){
	
	for(int i = 0; i < NUM_BALLS; i++){					//For loop will go through NUM_BALLS array and draw 250 balls
		bouncers[i].draw();								//bouncers will look for the point of the array we are in and call the draw
														//function we defined in our bouncingBall.h
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

