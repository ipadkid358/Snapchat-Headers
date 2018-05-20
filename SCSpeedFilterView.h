/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:45 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCOverlayFilterView.h>

@class UILabel, NSTimer, SCSpeed, NSNumberFormatter, UIView, UIImageView, NSArray;

@interface SCSpeedFilterView : SCOverlayFilterView {

	UILabel* _warningSlugView;
	NSTimer* _warningSlugFadeoutTimer;
	BOOL _previouslyShowing;
	unsigned short _zeroCharacter;
	SCSpeed* _speed;
	unsigned long long _speedUnit;
	NSNumberFormatter* _numberFormatter;
	UILabel* _snapAndDriveWarning;
	UIView* _speedView;
	UIImageView* _decimal;
	UIImageView* _unit;
	NSArray* _digits;

}

@property (assign,nonatomic) BOOL previouslyShowing;                           //@synthesize previouslyShowing=_previouslyShowing - In the implementation block
@property (nonatomic,retain) SCSpeed * speed;                                  //@synthesize speed=_speed - In the implementation block
@property (assign,nonatomic) unsigned long long speedUnit;                     //@synthesize speedUnit=_speedUnit - In the implementation block
@property (nonatomic,retain) NSNumberFormatter * numberFormatter;              //@synthesize numberFormatter=_numberFormatter - In the implementation block
@property (assign,nonatomic) unsigned short zeroCharacter;                     //@synthesize zeroCharacter=_zeroCharacter - In the implementation block
@property (nonatomic,retain) UILabel * snapAndDriveWarning;                    //@synthesize snapAndDriveWarning=_snapAndDriveWarning - In the implementation block
@property (nonatomic,retain) UIView * speedView;                               //@synthesize speedView=_speedView - In the implementation block
@property (nonatomic,retain) UIImageView * decimal;                            //@synthesize decimal=_decimal - In the implementation block
@property (nonatomic,retain) UIImageView * unit;                               //@synthesize unit=_unit - In the implementation block
@property (nonatomic,retain) NSArray * digits;                                 //@synthesize digits=_digits - In the implementation block
-(void)drawScreenshotImageInCurrentContextWithRect:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 config:(id)arg2 userSession:(id)arg3 ;
-(unsigned long long)speedUnit;
-(void)updateConfig:(id)arg1 ;
-(BOOL)shouldRespondToTap:(id)arg1 ;
-(void)setSpeedView:(UIView *)arg1 ;
-(UIView *)speedView;
-(void)setDecimal:(UIImageView *)arg1 ;
-(UIImageView *)decimal;
-(void)setSnapAndDriveWarning:(UILabel *)arg1 ;
-(UILabel *)snapAndDriveWarning;
-(void)setSpeedUnit:(unsigned long long)arg1 ;
-(void)setSpeedToDisplay;
-(void)resetDigitImageViews;
-(id)imageForNumber:(unsigned long long)arg1 ;
-(CGRect)_snapAndDriveframeForOrientation:(long long)arg1 ;
-(CGRect)_warningViewFrameForOrientation:(long long)arg1 ;
-(void)fadeOutSnapAndDriveWarning;
-(void)_fadeoutWarningSlug:(id)arg1 ;
-(BOOL)previouslyShowing;
-(void)setPreviouslyShowing:(BOOL)arg1 ;
-(unsigned short)zeroCharacter;
-(void)setZeroCharacter:(unsigned short)arg1 ;
-(void)setNumberFormatter:(NSNumberFormatter *)arg1 ;
-(void)dealloc;
-(void)setSpeed:(SCSpeed *)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(SCSpeed *)speed;
-(void)setDisplayed:(BOOL)arg1 ;
-(void)tap:(id)arg1 ;
-(id)displayName;
-(void)setDigits:(NSArray *)arg1 ;
-(NSNumberFormatter *)numberFormatter;
-(UIImageView *)unit;
-(void)setUnit:(UIImageView *)arg1 ;
-(NSArray *)digits;
@end

