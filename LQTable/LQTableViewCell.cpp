//
//  LQTableViewCell.cpp
//  archervszombie
//
//  Created by LitQoo on 12. 12. 18..
//  Copyright (c) 2012년 LitQoo Inc. All rights reserved.
//
#include "LQTableViewCell.h"
bool LQTableViewCell::init(float x, float y, float width, float height,ccColor4B color){
    
#if COCOS2D_VERSION < 0x00020000
    if(!CCLayerColor::initWithColorWidthHeight(color, width, height)){
#else
    if(!CCLayerColor::initWithColor(color, width, height)){
#endif
         return false;
    }
    isEnd=false;
    this->setPosition(ccp(x,y));
    return true;
}
LQTableViewCell* LQTableViewCell::create(float x, float y, float width, float height,ccColor4B color){
    LQTableViewCell *_new = new LQTableViewCell;
    _new->init(x, y, width, height,color);
    _new->autorelease();
    return _new;
}
LQTableViewCell::~LQTableViewCell(){
    
}