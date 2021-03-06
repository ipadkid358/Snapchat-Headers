/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:35 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSString;

@interface SCGalleryLockedRateLimitView : UIView {

	UILabel* _lockedMemoriesDisabled;
	UILabel* _countdownClock;
	NSString* _description;
	NSString* _expirationTime;
	unsigned long long _expirationMinutes;

}

@property (assign,nonatomic) unsigned long long expirationMinutes;              //@synthesize expirationMinutes=_expirationMinutes - In the implementation block
-(void)resetTitleAndDescription:(id)arg1 description:(id)arg2 ;
-(void)setExpirationMinutes:(unsigned long long)arg1 ;
-(void)_generateDescriptionString;
-(unsigned long long)expirationMinutes;
-(id)initWithFrame:(CGRect)arg1 ;
@end

