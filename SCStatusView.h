/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:28 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIImageView, UIActivityIndicatorView, TTTAttributedLabel;

@interface SCStatusView : UIView {

	UIImageView* _statusIconImageView;
	UIActivityIndicatorView* _activity;
	TTTAttributedLabel* _statusLabel;

}

@property (nonatomic,readonly) UIImageView * statusIconImageView;              //@synthesize statusIconImageView=_statusIconImageView - In the implementation block
@property (nonatomic,readonly) TTTAttributedLabel * statusLabel;               //@synthesize statusLabel=_statusLabel - In the implementation block
-(UIImageView *)statusIconImageView;
-(void)setStatusTextVerticalAlignment:(long long)arg1 ;
-(void)_setStatusIconImage:(id)arg1 ;
-(void)showStatusIconImage:(id)arg1 grayscale:(BOOL)arg2 ;
-(void)setStatusBackgroundColor:(id)arg1 ;
-(void)setStatusTextFont:(id)arg1 ;
-(void)showStatusIconImage:(id)arg1 ;
-(id)init;
-(void)prepareForReuse;
-(id)activity;
-(void)setStatusText:(id)arg1 ;
-(TTTAttributedLabel *)statusLabel;
-(void)showActivity;
@end

