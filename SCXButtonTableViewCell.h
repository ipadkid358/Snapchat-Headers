/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:51 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol SCXButtonTableViewCellDelegate;
@class UIButton, UIActivityIndicatorView;

@interface SCXButtonTableViewCell : UITableViewCell {

	id<SCXButtonTableViewCellDelegate> _delegate;
	UIButton* _xButton;
	UIActivityIndicatorView* _indicator;

}

@property (nonatomic,retain) UIButton * xButton;                                              //@synthesize xButton=_xButton - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * indicator;                             //@synthesize indicator=_indicator - In the implementation block
@property (assign,nonatomic,__weak) id<SCXButtonTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setXButton:(UIButton *)arg1 ;
-(UIButton *)xButton;
-(void)xButtonPressed;
-(void)setIsWorking:(BOOL)arg1 ;
-(void)setDelegate:(id<SCXButtonTableViewCellDelegate>)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id<SCXButtonTableViewCellDelegate>)delegate;
-(void)setText:(id)arg1 ;
-(void)setSubText:(id)arg1 ;
-(void)setIndicator:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)indicator;
@end

