/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:18 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIImage;

@interface YYImageFrame : NSObject <NSCopying> {

	unsigned long long _index;
	unsigned long long _width;
	unsigned long long _height;
	unsigned long long _offsetX;
	unsigned long long _offsetY;
	double _duration;
	unsigned long long _dispose;
	unsigned long long _blend;
	UIImage* _image;

}

@property (assign,nonatomic) unsigned long long index;                //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) unsigned long long width;                //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) unsigned long long height;               //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) unsigned long long offsetX;              //@synthesize offsetX=_offsetX - In the implementation block
@property (assign,nonatomic) unsigned long long offsetY;              //@synthesize offsetY=_offsetY - In the implementation block
@property (assign,nonatomic) double duration;                         //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) unsigned long long dispose;              //@synthesize dispose=_dispose - In the implementation block
@property (assign,nonatomic) unsigned long long blend;                //@synthesize blend=_blend - In the implementation block
@property (nonatomic,retain) UIImage * image;                         //@synthesize image=_image - In the implementation block
+(id)frameWithImage:(id)arg1 ;
-(void)setDispose:(unsigned long long)arg1 ;
-(unsigned long long)blend;
-(void)setImage:(UIImage *)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(UIImage *)image;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)width;
-(unsigned long long)height;
-(unsigned long long)index;
-(void)setWidth:(unsigned long long)arg1 ;
-(void)setHeight:(unsigned long long)arg1 ;
-(void)setIndex:(unsigned long long)arg1 ;
-(unsigned long long)dispose;
-(void)setOffsetX:(unsigned long long)arg1 ;
-(void)setOffsetY:(unsigned long long)arg1 ;
-(unsigned long long)offsetX;
-(unsigned long long)offsetY;
-(void)setBlend:(unsigned long long)arg1 ;
@end
