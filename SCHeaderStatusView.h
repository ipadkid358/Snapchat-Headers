/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:28 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIImageView, UIActivityIndicatorView, TTTAttributedLabel;

@interface SCHeaderStatusView : UIView {

	UIImageView* _retryIcon;
	UIActivityIndicatorView* _activity;
	TTTAttributedLabel* _statusLabel;

}
-(id)retryIcon;
-(void)hideActivity;
-(void)hideTapToRetry;
-(void)showTapToRetry;
-(id)init;
-(id)activity;
-(id)initWithBackgroundColor:(id)arg1 ;
-(void)setStatusText:(id)arg1 ;
-(void)showActivity;
@end
