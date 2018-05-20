/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIView, UITextView, CADisplayLink, NSDate;

@interface SCPagePageViewInspector : NSObject {

	UIView* _containerView;
	UITextView* _currentPageTextView;
	UITextView* _currentPageTimerTextView;
	UITextView* _previousPagesTextView;
	CADisplayLink* _displayLink;
	NSDate* _latestStartPageTime;

}
+(id)shared;
-(void)appendEvent:(id)arg1 ;
-(void)setCurrentPageWithPageName:(id)arg1 sourcePageName:(id)arg2 ;
-(void)hide;
-(void)show;
-(void)_displayLinkCallback:(id)arg1 ;
@end
