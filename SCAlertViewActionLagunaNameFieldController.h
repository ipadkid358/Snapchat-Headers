/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:37 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCAlertViewActionController.h>

@class SCLagunaDeviceNameEditingView, NSString;

@interface SCAlertViewActionLagunaNameFieldController : NSObject <SCAlertViewActionController> {

	SCLagunaDeviceNameEditingView* _nameView;

}

@property (nonatomic,readonly) SCLagunaDeviceNameEditingView * nameView;              //@synthesize nameView=_nameView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)actionViewSize;
-(unsigned long long)alertViewActionType;
-(BOOL)adjustsSizeToMatchStandard;
-(BOOL)requiresAdditionalPaddingIfLastItem;
-(id)initWithEmoji:(id)arg1 displayNameWithoutEmoji:(id)arg2 ;
-(SCLagunaDeviceNameEditingView *)nameView;
-(void)becomeFirstResponder;
-(UIEdgeInsets)edgeInsets;
-(id)actionView;
@end

