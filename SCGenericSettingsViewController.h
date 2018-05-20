/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:21 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCLeftSwipableViewController.h>
#import <Snapchat/SCHeaderDataSource.h>
#import <Snapchat/SCHeaderDelegate.h>

@class SCHeader, UIView, NSString;

@interface SCGenericSettingsViewController : SCLeftSwipableViewController <SCHeaderDataSource, SCHeaderDelegate> {

	unsigned long long _headerStyle;
	unsigned long long _headerCardViewStyle;
	SCHeader* _header;
	UIView* _containerView;

}

@property (nonatomic,retain) SCHeader * header;                     //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) UIView * containerView;                //@synthesize containerView=_containerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)addLabelToHeaderInSection:(id)arg1 labelText:(id)arg2 ;
+(id)addLabelToHeader:(id)arg1 labelText:(id)arg2 verticalPadding:(double)arg3 labelColor:(id)arg4 ;
+(id)addLabelToHeader:(id)arg1 labelText:(id)arg2 verticalPadding:(double)arg3 ;
+(id)createHeaderLabel:(id)arg1 labelColor:(id)arg2 ;
+(double)heightForHeaderInSection:(id)arg1 labelText:(id)arg2 ;
+(id)viewForHeaderInSection:(id)arg1 ;
+(id)viewForHeaderInSection:(id)arg1 labelColor:(id)arg2 ;
+(id)addLabelToHeader:(id)arg1 labelText:(id)arg2 ;
+(id)createHeaderLabel:(id)arg1 ;
-(void)leftButtonPressed;
-(id)imageForLeftButtonInState:(unsigned long long)arg1 ;
-(id)imageForRightButtonInState:(unsigned long long)arg1 ;
-(id)backgroundColorForHeader;
-(id)titleForHeader:(id)arg1 ;
-(id)textColorForHeader:(id)arg1 ;
-(BOOL)inValidView:(id)arg1 ;
-(void)leftSwipeSucceed;
-(BOOL)shouldPopToRootViewController;
-(BOOL)shouldPopToRootViewControllerLater;
-(id)initWithHeaderStyle:(unsigned long long)arg1 ;
-(id)getTitle;
-(id)initWithHeaderStyle:(unsigned long long)arg1 headerCardStyle:(unsigned long long)arg2 ;
-(void)initHeader;
-(void)saveSetting;
-(id)init;
-(UIView *)containerView;
-(long long)preferredStatusBarStyle;
-(BOOL)prefersStatusBarHidden;
-(void)loadView;
-(void)setContainerView:(UIView *)arg1 ;
-(id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(SCHeader *)header;
-(void)setHeader:(SCHeader *)arg1 ;
@end
