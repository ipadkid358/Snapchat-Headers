/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:18 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIImage;

@interface SCLagunaOnboardingFlowPage : NSObject {

	NSString* _primaryText;
	NSString* _secondaryText;
	NSString* _accessibilityIdentifier;
	UIImage* _fallbackImage;
	NSString* _fallbackImageName;
	double _minTime;
	double _startTime;
	double _endTime;

}

@property (nonatomic,copy) NSString * primaryText;                          //@synthesize primaryText=_primaryText - In the implementation block
@property (nonatomic,copy) NSString * secondaryText;                        //@synthesize secondaryText=_secondaryText - In the implementation block
@property (nonatomic,copy) NSString * accessibilityIdentifier;              //@synthesize accessibilityIdentifier=_accessibilityIdentifier - In the implementation block
@property (nonatomic,retain) UIImage * fallbackImage;                       //@synthesize fallbackImage=_fallbackImage - In the implementation block
@property (nonatomic,copy) NSString * fallbackImageName;                    //@synthesize fallbackImageName=_fallbackImageName - In the implementation block
@property (assign,nonatomic) double minTime;                                //@synthesize minTime=_minTime - In the implementation block
@property (assign,nonatomic) double startTime;                              //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double endTime;                                //@synthesize endTime=_endTime - In the implementation block
-(void)setFallbackImage:(UIImage *)arg1 ;
-(double)minTime;
-(void)setMinTime:(double)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(NSString *)accessibilityIdentifier;
-(double)startTime;
-(void)setAccessibilityIdentifier:(NSString *)arg1 ;
-(double)endTime;
-(void)setEndTime:(double)arg1 ;
-(NSString *)secondaryText;
-(void)setPrimaryText:(NSString *)arg1 ;
-(void)setSecondaryText:(NSString *)arg1 ;
-(UIImage *)fallbackImage;
-(NSString *)fallbackImageName;
-(void)setFallbackImageName:(NSString *)arg1 ;
-(NSString *)primaryText;
@end

