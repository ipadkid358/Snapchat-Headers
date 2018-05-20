/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:49 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>

@protocol SCSearchChatViewDelegate;
@class UIView, UIImageView, UILabel, NSString;

@interface SCSearchChatView : UIView {

	UIView* _backgroundView;
	UIImageView* _dismissButtonImageView;
	UILabel* _userDisplayNameLabel;
	id<SCSearchChatViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SCSearchChatViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * userDisplayName; 
-(void)_dismissChatView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<SCSearchChatViewDelegate>)arg1 ;
-(id<SCSearchChatViewDelegate>)delegate;
-(NSString *)userDisplayName;
-(void)setUserDisplayName:(NSString *)arg1 ;
@end

