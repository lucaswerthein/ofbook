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
		posX = ofRandom(0, ofGetWidth());			//Each of the 250 balls will have a random position between 0 and the screen width
		posY = ofRandom(0, ofGetHeight());			//Each of the 250 balls will have a random position between 0 and the screen height
		velX = ofRandom(-1, 1);						//Each of the 250 balls will have a random velocity between -6 and 6
		velY = ofRandom(-1, 1);						//Each of the 250 balls will have a random velocity between -6 and 6 
		
		radius = ofRandom(5,25);					//Each of the 250 balls will have a random radius between 5 and 25
		
		red = ofRandom(100,255);					//Each of the 250 balls will have a random red value between 100 and 255
		green = ofRandom(0,100);					//Each of the 250 balls will have a random green value between 0 and 100
		blue = ofRandom(100,200);					//Each of the 250 balls will have a random blue value between 100 and 200
	
		bAlive = false;								//bAlive boolean will start as false
	}
//--------------------------------------------------
void bouncingBall::update(){
	
	if (bAlive == false){							//if bAlive is false do not execute the code below
		return;
	}
	
	posX += velX;									//This will create movement on the X axis
	posY += velY;									//This will create movement on the Y axis
	if(posX < 0 || posX > ofGetWidth()){			//If the X position of the ball is greater than the screen width or less than 0, invert direction
		velX = velX * -1;
	}
	if(posY < 0 || posY > ofGetHeight()){			//If the Y position of the ball is greater than the screen height or less than 0, invert direction
		velY = velY * -1;
	}
}


//--------------------------------------------------
void bouncingBall::draw(){
	
	if (bAlive == false){							//if bAlive is false do not execute the code below
		return;
	}
	
	ofSetColor(red, green, blue, 100);				//Set color to circle
    ofCircle(posX, posY, radius);					//Draw circle
}
	