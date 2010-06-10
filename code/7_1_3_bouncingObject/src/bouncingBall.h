/*
 *  bouncingBall.h
 *  7_1_3_bouncingObject
 *
 *  Created by Zach Lieberman on 6/8/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */



#ifndef BOUNCING_BALL_H			//if BOUNCING_BALL_H is not defined, define BOUNCING_BALL_H
#define BOUNCING_BALL_H

#include "ofMain.h"

class bouncingBall {
	
	public: 
	
		void setup();
		void update();
		void draw();
		
		float posX;				//create variable posX
		float posY;				//create variable posY
		float velX;				//create variable velX
		float velY;				//create variable velY
		
	
	
};




#endif
