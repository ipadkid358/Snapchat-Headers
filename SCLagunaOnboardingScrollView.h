/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:18 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIScrollView.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol SCLagunaOnboardingScrollViewDelegate;
@class NSArray, NSString;

@interface SCLagunaOnboardingScrollView : UIScrollView <UIScrollViewDelegate> {

	long long _numberPages;
	NSArray* _primaryTextIds;
	NSArray* _secondaryTextIds;
	NSArray* _accessibilityIds;
	BOOL _initialized;
	id<SCLagunaOnboardingScrollViewDelegate> _lagunaDelegate;
	double _videoOffset;

}

@property (assign,nonatomic,__weak) id<SCLagunaOnboardingScrollViewDelegate> lagunaDelegate;              //@synthesize lagunaDelegate=_lagunaDelegate - In the implementation block
@property (assign,nonatomic) double videoOffset;                                                          //@synthesize videoOffset=_videoOffset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SCLagunaOnboardingScrollViewDelegate>)lagunaDelegate;
-(double)videoOffset;
-(id)initWithFrame:(CGRect)arg1 primaryTextIds:(id)arg2 secondaryTextIds:(id)arg3 accessibilityIds:(id)arg4 ;
-(double)percentBetweenPage;
-(void)advancePage;
-(void)setLagunaDelegate:(id<SCLagunaOnboardingScrollViewDelegate>)arg1 ;
-(void)setVideoOffset:(double)arg1 ;
-(void)layoutSubviews;
-(long long)page;
@end

