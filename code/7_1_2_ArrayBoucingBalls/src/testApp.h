#ifndef _TEST_APP
#define _TEST_APP

#include "ofMain.h"


#define NUM_BALLS 250 //NUM_BALLS will have value of 250. Since this is going to be the value of our array, we are saying that our array will have 250 points

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
	
		int posX[NUM_BALLS]; //Variable posX as an array of integers NUM_BALLS, which essentially equals 250
		int posY[NUM_BALLS]; //Variable posY as an array of integers NUM_BALLS, which essentially equals 250
		int velX[NUM_BALLS]; //Variable velX as an array of integers NUM_BALLS, which essentially equals 250
		int velY[NUM_BALLS]; //Variable velY as an array of integers NUM_BALLS, which essentially equals 250

};

#endif
