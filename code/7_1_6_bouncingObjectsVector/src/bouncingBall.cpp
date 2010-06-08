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
	velX = ofRandom(-1, 1); 
	velY = ofRandom(-1, 1); 	
	
	radius = ofRandom(5,25);
	
	red = ofRandom(100,255);
	green = ofRandom(0,100);
	blue = ofRandom(100,200);

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

	ofSetColor(red, green, blue, 100);     
    ofCircle(posX, posY, radius);
}
	