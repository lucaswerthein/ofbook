#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	
	ofBackground(0, 0, 0);
	ofEnableAlphaBlending();
	ofSetFrameRate(60);
	ofSetVerticalSync(true);		
	
	
	width = 640;
	height = 480;
	pixels = new unsigned char[width*height];
	myTexture.allocate(width, height, GL_LUMINANCE);
	for (int i = 0; i < width * height; i++){
		pixels[i] = 0;
	}
	myTexture.loadData(pixels, width, height, GL_LUMINANCE);
	
}

//--------------------------------------------------------------
void testApp::update(){
	
	
	for (int i = 0; i < width * height; i++){
		pixels[i] = MAX(0, pixels[i]-1);
	}


	if ((mouseX >= 0 && mouseX < width) && (mouseY >= 0 && mouseY < height)){
		for (int i = 0; i < width; i++){
			for (int j = 0; j < height; j++){
				
				float distance = ofDist(mouseX, mouseY, i, j);
				if (distance < 100){
					pixels[ j * width + i] = MIN(255, pixels[j * width + i] + 3);
				}
			}
		}
	}
												 
	myTexture.loadData(pixels, width, height, GL_LUMINANCE);
	
}

//--------------------------------------------------------------
void testApp::draw(){
	
	ofSetColor(255, 255, 255);
	myTexture.draw(0,0);

	
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

