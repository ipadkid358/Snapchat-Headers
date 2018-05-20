/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:36 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCGalleryProfile, SCObserving;
@class SCQueuePerformer, SCDataObjectContext, NSString;

@interface SCGalleryProfileUserSessionHandler : NSObject {

	id<SCGalleryProfile> _profile;
	SCQueuePerformer* _performer;
	id<SCObserving> _observeContext;
	SCDataObjectContext* _dataObjectContext;
	NSString* _userId;
	NSString* _username;
	NSString* _userEmail;
	long long _onceToken;

}
-(void)_updateWithProfile:(id)arg1 ;
-(void)_setupGalleryProfileOnce;
-(id)initWithUserId:(id)arg1 username:(id)arg2 userEmail:(id)arg3 ;
-(void)dealloc;
-(id)profile;
@end
