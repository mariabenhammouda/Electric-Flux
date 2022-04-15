#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofEnableDepthTest();
    ofBackground(0);
    
    cam.setPosition(560, 560, 5000);
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    int time=ofGetElapsedTimeMillis()/10;
    cam.begin();
    ofPushMatrix();
    ofSetColor(20, 75, 190,ofGetFrameNum() % 280);
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    for ( int i=0;i<500;i+=25){
        for(int n=1; n<350; n+=5){
            ofDrawSphere(i, 0, (n*10), 10);
        ofRotateDeg(time % (10+n));
            ofPushStyle();
            ofSetColor(255, 0, 0);
            ofSetLineWidth(3);
            ofDrawLine(0, 0, (350*10), 0, 0, 0);
            ofSetColor(255, 255, 255);
            ofDrawBox(0, 0, (n*10), 30, 30, 30);
            ofPopStyle();
        }
    }
    ofPopMatrix();
    ofDrawBitmapString(" ", 0, 0);
    
    
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
