/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:48 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSearchEventListener.h>

@protocol SCPerforming;
@class SCPreferences, NSString;

@interface SCSearchInteractionsTracker : NSObject <SCSearchEventListener> {

	id<SCPerforming> _performer;
	SCPreferences* _userPreferences;
	NSString* _lastSessionId;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3 ;
-(id)initWithUserPreferences:(id)arg1 ;
-(id)interactionDates;
-(void)_trackInteraction;
@end

