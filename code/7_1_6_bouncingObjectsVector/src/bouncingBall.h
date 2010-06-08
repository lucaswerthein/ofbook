/*
 *  bouncingBall.h
 *  7_1_3_bouncingObject
 *
 *  Created by Zach Lieberman on 6/8/10.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */



#ifndef BOUNCING_BALL_H
#define BOUNCING_BALL_H

#include "ofMain.h"

class bouncingBall {
	
	public: 
	
		void setup();
		void update();
		void draw();
		
		float posX;
		float posY;
		float velX;
		float velY;
		
		float radius;
		float red;
		float green;
		float blue;
		
			
	
};




#endif
