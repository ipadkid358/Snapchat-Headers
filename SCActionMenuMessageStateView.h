/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:27 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>

@protocol SCChatGroup;
@class UIView, UILabel, UIImageView, SCPieView, SCMessageChatViewModel;

@interface SCActionMenuMessageStateView : UIView {

	UIView* _messageStateHolder;
	UILabel* _messageStateLabel;
	UIImageView* _checkIcon;
	SCPieView* _pieView;
	id<SCChatGroup> _group;
	SCMessageChatViewModel* _messageViewModel;

}
-(id)payloadViewModel;
-(void)setupSeenByView;
-(BOOL)_shouldDisplayMessageState;
-(id)_messageStateString;
-(void)_updateViewPadding;
-(id)_seenByUsernamesToDisplayForGroup;
-(id)_seenByUsernamesToDisplayForOneOnOne;
-(id)_openedByUsernamesToDisplay;
-(id)_openedByDisplayNameForOneOnOne;
-(id)_seenByUsernamesToDisplay;
-(id)_openedByStringForGroups;
-(id)_openedByStringForOneOnOne;
-(id)_seenByString;
-(void)setMessageViewModel:(id)arg1 group:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end
