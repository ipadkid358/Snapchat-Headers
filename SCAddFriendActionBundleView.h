/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:37 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>

@protocol SCAddFriendButtonV2Delegate;
@class SCAddFriendButtonV2, SCFriendActionButtonsGroupConfiguration, SCFriendActionButtonsGroup;

@interface SCAddFriendActionBundleView : UIView {

	SCAddFriendButtonV2* _addFriendButton;
	SCFriendActionButtonsGroupConfiguration* _friendActionButtonsGroupConfiguration;
	SCFriendActionButtonsGroup* _friendActionButtonsGroup;
	long long _state;
	id<SCAddFriendButtonV2Delegate> _delegate;

}
-(id)addFriendButton;
-(BOOL)updateWithAddButtonState:(long long)arg1 addButtonStyle:(long long)arg2 friendActionButtonsGroupConfiguration:(id)arg3 ;
-(id)getTitleTextWithConfiguration:(id)arg1 ;
-(BOOL)shouldHideImageForAddButton:(id)arg1 ;
-(void)_setContainerWidth:(double)arg1 height:(double)arg2 ;
-(id)friendActionButtonsGroup;
-(id)initWithFrame:(CGRect)arg1 delegate:(id)arg2 ;
@end
