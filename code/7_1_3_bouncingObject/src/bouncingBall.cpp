/*
 *  bouncingBall.cpp
 *  7_1_3_bouncingObject
 *
 *  Created by Zach Lieberman on 6/8/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#include "bouncingBall.h"


//--------------------------------------------------
void bouncingBall::setup(){
	posX = ofRandom(0,ofGetWidth());
	posY = ofRandom(0,ofGetHeight());
	velX = ofRandom(-6, 6); 
	velY = ofRandom(-6, 6); 	
}


//--------------------------------------------------
void bouncingBall::update(){
	posX += velX;
	posY += velY;
	if(posX < 0 || posX > ofGetWidth()){
		velX = velX * -1;
	}
	if(posY < 0 || posY > ofGetHeight()){
		velY = velY * -1;
	}
}


//--------------------------------------------------
void bouncingBall::draw(){
	ofSetColor(200, 40, 150, 100);     
    ofCircle(posX, posY, 20);
}
	