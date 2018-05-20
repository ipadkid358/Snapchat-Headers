/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:53 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Snapchat/SCHeaderDataSource.h>
#import <Snapchat/SCHeaderDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <Snapchat/TrophyViewControllerDelegate.h>

@class SCUserSession, NSArray, UIPageControl, SCHeader, UIScrollView, NSString;

@interface TrophyPageViewController : UIViewController <SCHeaderDataSource, SCHeaderDelegate, UIScrollViewDelegate, TrophyViewControllerDelegate> {

	SCUserSession* _userSession;
	unsigned long long _pageIndex;
	NSArray* _viewControllers;
	UIPageControl* _pageControl;
	long long _exitType;
	SCHeader* _header;
	UIScrollView* _scrollView;

}

@property (nonatomic,retain) SCHeader * header;                      //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;              //@synthesize scrollView=_scrollView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)leftButtonPressed;
-(id)imageForLeftButtonInState:(unsigned long long)arg1 ;
-(id)imageForRightButtonInState:(unsigned long long)arg1 ;
-(id)backgroundColorForHeader;
-(id)titleForHeader:(id)arg1 ;
-(id)textColorForHeader:(id)arg1 ;
-(id)initWithUserSession:(id)arg1 ;
-(BOOL)shouldPopToRootViewController;
-(BOOL)shouldPopToRootViewControllerLater;
-(void)initHeader;
-(void)initPageViewController;
-(id)_getPageName;
-(void)_pageChange;
-(void)_finishScrolling;
-(void)presentTrophyDescriptionController:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrollView;
-(SCHeader *)header;
-(void)setHeader:(SCHeader *)arg1 ;
@end
