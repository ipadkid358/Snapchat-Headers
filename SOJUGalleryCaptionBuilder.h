/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:52 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSNumber, SOJUGalleryPoint, SOJUCaptionStyle;

@interface SOJUGalleryCaptionBuilder : NSObject {

	NSString* _type;
	NSString* _text;
	NSArray* _textAttributes;
	NSArray* _styleAttributes;
	NSNumber* _fontSize;
	NSNumber* _editingFontSize;
	SOJUGalleryPoint* _position;
	NSNumber* _rotation;
	NSNumber* _isTracking;
	NSArray* _trackingTrajectory;
	NSString* _typeface;
	SOJUCaptionStyle* _captionStyle;
	NSNumber* _pickedColor;
	NSArray* _userTags;

}
+(id)withJUGalleryCaption:(id)arg1 ;
-(id)setRotationValue:(double)arg1 ;
-(id)setTypeEnum:(long long)arg1 ;
-(id)setFontSizeValue:(double)arg1 ;
-(id)setEditingFontSizeValue:(double)arg1 ;
-(id)setIsTrackingValue:(BOOL)arg1 ;
-(id)setPickedColorValue:(int)arg1 ;
-(id)setEditingFontSize:(id)arg1 ;
-(id)setTrackingTrajectory:(id)arg1 ;
-(id)setTypeface:(id)arg1 ;
-(id)setCaptionStyle:(id)arg1 ;
-(id)setPickedColor:(id)arg1 ;
-(id)setType:(id)arg1 ;
-(id)setText:(id)arg1 ;
-(id)setPosition:(id)arg1 ;
-(id)setTextAttributes:(id)arg1 ;
-(id)setFontSize:(id)arg1 ;
-(id)setRotation:(id)arg1 ;
-(id)setStyleAttributes:(id)arg1 ;
-(id)build;
-(id)setUserTags:(id)arg1 ;
-(id)setIsTracking:(id)arg1 ;
@end
