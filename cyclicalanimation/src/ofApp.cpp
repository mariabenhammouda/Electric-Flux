#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofEnableDepthTest();
    ofBackground(0);
    
    cam.setPosition(560, 560, 5000);
    sliderGroup.setName("sliders"); //create slider group
        sliderGroup.add(spaceRange.set("Strength of Magnetic field", 1, 0.5, 5)); //slider to adjust the space range
      
        mainGroup.add(sliderGroup);
        gui.setup(mainGroup); //setup gui
        
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    int time=ofGetElapsedTimeMillis()/10;
    cam.begin();
    ofPushMatrix();
    
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2,-1100);
    for ( int i=0;i<500;i+=25){
        for(int n=1; n<350; n+=5){
            ofSetColor(20, 75, 190,ofGetFrameNum() % (300));
            ofDrawSphere(i*spaceRange, 0, (n*10), 10+(1.5*spaceRange));
            ofRotateDeg(time % (10+n));
            ofSetColor(255, 0, 0);
            ofSetLineWidth(2*spaceRange);
            ofDrawLine(0, 0, 0, 0, 0, 350*10);
          //  ofSetColor(255, 255, 255);
           // ofDrawBox(0, 0, (n*10), 30*spaceRange, 30*spaceRange, 30*spaceRange);
           
        }
    }
    ofPopMatrix();
    ofDrawBitmapString(" ", 0, 0);
    cam.end(); //end camera view
        ofDisableDepthTest();
        gui.draw();
    
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
