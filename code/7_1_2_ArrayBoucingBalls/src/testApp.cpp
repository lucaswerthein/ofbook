#include "testApp.h"
//--------------------------------------------------------------
void testApp::setup(){	
    ofBackground(0, 0, 0);								//Set color background
    ofSetFrameRate(60);									//Set frame rate
    ofSetCircleResolution(64);							//Set circle resolution
    ofEnableAlphaBlending();							//Enable alpha channel	
   
    for(int i = 0; i < NUM_BALLS; i++){					//For loop will go through NUM_BALLS array in setup
        posX[i] = ofRandom(0, ofGetWidth());			//Each of the 250 balls will have a random position between 0 and the screen width
		posY[i] = ofRandom(0, ofGetHeight());			//Each of the 250 balls will have a random position between 0 and the screen height
        velX[i] = ofRandom(-6, 6);						//Each of the 250 balls will have a random velocity between -6 and 6
        velY[i] = ofRandom(-6, 6);						//Each of the 250 balls will have a random velocity between -6 and 6
	}
}

//--------------------------------------------------------------
void testApp::update(){
    
    for(int i = 0; i < NUM_BALLS; i++){					//For loop will go through NUM_BALLS array and update 250 balls frame by frame
        posX[i] = posX[i] + velX[i];					//This will create movement on the X axis
        posY[i] = posY[i] + velY[i];					//This will create movement on the Y axis
        
        
        if(posX[i] < 0 || posX[i] > ofGetWidth()){		//If the X position of the ball is greater than the screen width or less than 0, invert direction
            velX[i] = velX[i] * -1;
        }
        if(posY[i] < 0 || posY[i] > ofGetHeight()){		//If the Y position of the ball is greater than the screen height or less than 0, invert direction
            velY[i] = velY[i] * -1;
        }
    }
}

//--------------------------------------------------------------
void testApp::draw(){
	
    ofSetColor(200, 40, 150, 100);						//set color to balls
    
	for(int i = 0; i < NUM_BALLS; i++){					//For loop will go through NUM_BALLS array and draw 250 balls
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

