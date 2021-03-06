#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(0);
    
    pos.set(ofGetWindowSize()/2);
    vel.x = ofRandom(-10, 10);
    vel.y = ofRandom(-2, -5);
    
    gravity.set(0, 0.5);

}

//--------------------------------------------------------------
void ofApp::update(){
    
    pos += vel;
    vel += gravity;
    
    if (pos.x > ofGetWidth() || pos.x < 0) {
        vel.x *= -1;
    }
    
    if (pos.y > ofGetHeight() || pos.y < 0) {
        vel.y *= -1;
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(255);
    ofCircle(pos, 10);
    
    ofSetColor(255, 0, 0);
    drawVectorAt(vel, pos.x, pos.y);

}

//--------------------------------------------------------------
void ofApp::drawVectorAt (ofVec2f vec, float x, float y) {
    
    ofPushMatrix();
        ofTranslate(x, y);
        ofLine(0, 0, vec.x, vec.y);
    ofPopMatrix();
    
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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
