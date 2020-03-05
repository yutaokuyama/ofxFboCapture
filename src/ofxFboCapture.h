//
//  ofxFboCapture.hpp
//
//  Created by okuyama on 2020/03/05.
//

#pragma once
#include "ofMain.h"


namespace ofxFboCapture{

static void imageCapture(ofFbo& fbo){
    ofPixels buffer;
    ofImage targetTex;

    fbo.readToPixels(buffer);
    targetTex.setFromPixels(buffer);
    char fileNameStr[255];
    string date = ofGetTimestampString();//タイムスタンプをファイル名にする
    sprintf(fileNameStr, "%s.png", date.c_str());
    targetTex.save(fileNameStr,OF_IMAGE_QUALITY_BEST);
    ofLog()<<"image saved!"+ofToString(ofGetTimestampString())<<endl;
    
}
}
