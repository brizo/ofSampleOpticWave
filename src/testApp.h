#pragma once

#include "ofMain.h"
#include "ofxCv.h"

class testApp : public ofBaseApp{
public:
	void setup();
	void update();
	void draw();
	
	ofVideoGrabber camera;	
	ofxCv::FlowFarneback farneback;
	ofxCv::FlowPyrLK pyrLk;	
	ofxCv::Flow* curFlow;
	vector <ofVec2f> flowStats;
};

