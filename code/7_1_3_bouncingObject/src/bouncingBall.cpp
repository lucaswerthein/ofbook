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
void bouncingBall::setup(){						//Assign values to variables created in our .H fle
	posX = ofRandom(0,ofGetWidth());
	posY = ofRandom(0,ofGetHeight());
	velX = ofRandom(-6, 6); 
	velY = ofRandom(-6, 6); 	
}


//--------------------------------------------------
void bouncingBall::update(){
	posX += velX;								//This will create movement on the X axis 
	posY += velY;								//This will create movement on the Y axis
	if(posX < 0 || posX > ofGetWidth()){		//If the X position of the ball is greater than the screen width or less than 0, invert direction
		velX = velX * -1;
	}
	if(posY < 0 || posY > ofGetHeight()){		//If the Y position of the ball is greater than the screen height or less than 0, invert direction
		velY = velY * -1;
	}
}


//--------------------------------------------------
void bouncingBall::draw(){
	ofSetColor(100, 40, 150, 100);				//Set color to circle
    ofCircle(posX, posY, 20);					//Draw circle
}
	