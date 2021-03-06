/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:37 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>

@class SCFriendActionButton;

@interface SCFriendActionButtonContainer : UIView {

	SCFriendActionButton* _button;

}

@property (nonatomic,readonly) SCFriendActionButton * button;              //@synthesize button=_button - In the implementation block
-(id)_createLabelWithButtonType:(unsigned long long)arg1 ;
-(double)_hintLabelTopPaddingForButtonType:(unsigned long long)arg1 ;
-(id)_hintColorForButtonType:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 button:(id)arg2 buttonType:(unsigned long long)arg3 showHintLabel:(BOOL)arg4 ;
-(SCFriendActionButton *)button;
@end

