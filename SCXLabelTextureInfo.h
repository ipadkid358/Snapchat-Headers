/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:16 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Snapchat/Snapchat-Structs.h>
@class SCXGLTextureInfo;

@interface SCXLabelTextureInfo : NSObject {

	float _againstPOISize;
	SCXGLTextureInfo* _texture;
	CGSize _labelSize;

}

@property (retain) SCXGLTextureInfo * texture;              //@synthesize texture=_texture - In the implementation block
@property (assign) CGSize labelSize;                        //@synthesize labelSize=_labelSize - In the implementation block
@property (assign) float againstPOISize;                    //@synthesize againstPOISize=_againstPOISize - In the implementation block
-(float)againstPOISize;
-(void)setAgainstPOISize:(float)arg1 ;
-(id)description;
-(CGSize)labelSize;
-(void)setLabelSize:(CGSize)arg1 ;
-(SCXGLTextureInfo *)texture;
-(void)setTexture:(SCXGLTextureInfo *)arg1 ;
@end

