/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCInfoStickerView.h>

@class SCSpeed, NSNumberFormatter, UILabel, UIView, UIImageView, NSArray, NSTimer;

@interface SCSpeedStickerView : SCInfoStickerView {

	BOOL _previouslyShowing;
	SCSpeed* _speed;
	unsigned long long _speedUnit;
	NSNumberFormatter* _numberFormatter;
	unsigned short _zeroCharacter;
	UILabel* _snapAndDriveWarning;
	UIView* _speedView;
	UIImageView* _decimal;
	UIImageView* _unit;
	NSArray* _digits;
	UILabel* _warningSlugView;
	NSTimer* _warningSlugFadeoutTimer;

}
-(void)drawScreenshotImageInCurrentContextWithRect:(CGRect)arg1 ;
-(void)updateConfig:(id)arg1 ;
-(BOOL)shouldRespondToTap:(id)arg1 ;
-(void)setSpeedToDisplay;
-(void)resetDigitImageViews;
-(id)imageForNumber:(unsigned long long)arg1 ;
-(void)fadeOutSnapAndDriveWarning;
-(id)initWithFrame:(CGRect)arg1 speed:(id)arg2 ;
-(void)dealloc;
-(void)tap:(id)arg1 ;
@end

