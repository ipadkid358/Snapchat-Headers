/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:33 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActionSheetDelegate.h>

@protocol SCActionSheetDelegate;
@class SCAlertController, NSArray, NSString;

@interface SCActionSheetCoordinator : NSObject <UIActionSheetDelegate> {

	SCAlertController* _alertController;
	NSArray* _actions;
	/*^block*/id _dismissBlock;
	id<SCActionSheetDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithActions:(id)arg1 orientationMask:(unsigned long long)arg2 ;
-(id)initWithActions:(id)arg1 orientationMask:(unsigned long long)arg2 delegate:(id)arg3 ;
-(id)initWithActions:(id)arg1 orientationMask:(unsigned long long)arg2 delegate:(id)arg3 onDismiss:(/*^block*/id)arg4 ;
-(void)dismissWithAnimation:(BOOL)arg1 ;
-(void)present;
@end

