/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:44 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCLeftSwipableViewController.h>
#import <Snapchat/SCHeaderDataSource.h>
#import <Snapchat/SCHeaderDelegate.h>
#import <Snapchat/SCCardStyling.h>

@class SCCardContainerView, SCHeader, NSString, SCCardGradientView;

@interface SCSnapAdsPortalViewController : SCLeftSwipableViewController <SCHeaderDataSource, SCHeaderDelegate, SCCardStyling> {

	SCCardContainerView* _cardContainerView;
	SCHeader* _header;

}

@property (nonatomic,retain) SCHeader * header;                                      //@synthesize header=_header - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCCardContainerView * cardContainerView; 
@property (nonatomic,retain) SCCardGradientView * cardGradientView; 
-(void)leftButtonPressed;
-(id)imageForLeftButtonInState:(unsigned long long)arg1 ;
-(id)imageForRightButtonInState:(unsigned long long)arg1 ;
-(id)backgroundColorForHeader;
-(id)titleForHeader:(id)arg1 ;
-(id)textColorForHeader:(id)arg1 ;
-(SCCardContainerView *)cardContainerView;
-(void)updateCardBackground:(double)arg1 ;
-(void)initHeader;
-(void)updateStatusBarAndHeaderPosition:(double)arg1 ;
-(id)snapAdsPortalCardGradientColors;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(SCHeader *)header;
-(void)setHeader:(SCHeader *)arg1 ;
@end
