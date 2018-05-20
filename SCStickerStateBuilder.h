/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:18 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Snapchat/Snapchat-Structs.h>
@class NSString, SOJUSticker, NSArray, SOJUGalleryInfoStickerStyle;

@interface SCStickerStateBuilder : NSObject {

	unsigned long long _type;
	unsigned long long _infoStickerType;
	NSString* _emoji;
	SOJUSticker* _chatSticker;
	CGSize _relativeSize;
	CGPoint _center;
	double _rotation;
	double _scale;
	BOOL _isTracking;
	NSArray* _trackingTrajectory;
	SOJUGalleryInfoStickerStyle* _infoStickerStyle;
	BOOL _isAnimated;
	long long _uniqueId;

}
+(id)withStickerState:(id)arg1 ;
-(id)setTrackingTrajectory:(id)arg1 ;
-(id)setInfoStickerType:(unsigned long long)arg1 ;
-(id)setInfoStickerStyle:(id)arg1 ;
-(id)setIsAnimated:(BOOL)arg1 ;
-(id)setChatSticker:(id)arg1 ;
-(id)setRelativeSize:(CGSize)arg1 ;
-(id)setEmoji:(id)arg1 ;
-(id)setScale:(double)arg1 ;
-(id)setType:(unsigned long long)arg1 ;
-(id)setCenter:(CGPoint)arg1 ;
-(id)setRotation:(double)arg1 ;
-(id)build;
-(id)setIsTracking:(BOOL)arg1 ;
-(id)setUniqueId:(long long)arg1 ;
@end
