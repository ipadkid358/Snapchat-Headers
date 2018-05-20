/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:27 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCEditGroupNameAlertDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@class SCEditGroupNameAlertView, NSString;

@interface SCEditGroupNameAlertViewController : NSObject <SCEditGroupNameAlertDelegate, UITextFieldDelegate> {

	SCEditGroupNameAlertView* _editGroupNameAlert;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)presentEditGroupNameAlertViewForGroup:(id)arg1 inAlertFlow:(id)arg2 ;
-(void)handleEditGroupName:(id)arg1 group:(id)arg2 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
@end

