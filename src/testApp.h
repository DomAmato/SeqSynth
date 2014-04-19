#pragma once

#include "ofMain.h"
#include "oscillator.h"

class testApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();
		
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    float linePos;
    int bpm;
    vector<pair<int,ofPoint> > circles;
    vector<bool>    growCircles;
    
    void audioOut(float * input, int bufferSize, int nChannels);
    
    ofSoundStream stream;
    
    float * soundBuffer;
        
    vector<oscillator> waves;
    
    vector<float *> soundBuffers;
    
    int type;
    
    bool show;
    
    bool instructions;
};
