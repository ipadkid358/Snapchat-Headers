/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:52 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCMyStories.h>

@class SCUserSession, SCScopedAccess, NSMutableDictionary;

@interface SCBusinessStories : SCMyStories {

	SCUserSession* _userSession;
	SCScopedAccess* _scopedUserSession;
	NSMutableDictionary* _observerByStoryClientId;

}
-(void)setStories:(id)arg1 ;
-(void)_businessStoriesCommonInit;
-(void)_updateObserversWithStories:(id)arg1 ;
-(void)_removeStory:(id)arg1 ifExistInStoryManifest:(id)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)_removeObservers;
-(void)_updateObservers;
@end

