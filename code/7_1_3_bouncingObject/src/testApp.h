#ifndef _TEST_APP
#define _TEST_APP

#include "ofMain.h"
#include "bouncingBall.h"									//Include bouncingBall.h in our program

#define NUM_BALLS 250										//NUM_BALLS wil have a value of 250. Since this is going to be the value of our array, 
															//we are saying that our array will have 250 points

class testApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed  (int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
	
		bouncingBall bouncers[NUM_BALLS];					//bouncing ball is our data type, which reffers to our bouncingBall class
															//bouncers is the name of our array
															//NUM_BALLS is the value of our array
};

#endif
