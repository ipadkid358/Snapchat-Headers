/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:48 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSearchEventAnnouncing.h>

@protocol SCPerforming;
@class SCUserSession, NSArray, SCSUPActionableStoryKey, SCSearchEventListenerAnnouncer, NSDictionary, SCStoryMiniProfileViewController, SCMiniProfileViewController, NSString;

@interface SCMiniProfileActionHandler : NSObject <SCSearchEventAnnouncing> {

	SCUserSession* _userSession;
	id<SCPerforming> _performer;
	NSArray* _storyOptions;
	SCSUPActionableStoryKey* _storyKey;
	unsigned long long _controllerType;
	SCSearchEventListenerAnnouncer* _eventAnnouncer;
	NSDictionary* _additionalInfo;
	SCStoryMiniProfileViewController* _storyMiniProfileViewController;
	SCMiniProfileViewController* _miniProfileViewController;

}

@property (nonatomic,readonly) NSDictionary * additionalInfo;                                                         //@synthesize additionalInfo=_additionalInfo - In the implementation block
@property (nonatomic,__weak,readonly) SCStoryMiniProfileViewController * storyMiniProfileViewController;              //@synthesize storyMiniProfileViewController=_storyMiniProfileViewController - In the implementation block
@property (nonatomic,__weak,readonly) SCMiniProfileViewController * miniProfileViewController;                        //@synthesize miniProfileViewController=_miniProfileViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)announcerIdentifier;
-(SCMiniProfileViewController *)miniProfileViewController;
-(id)initWithUserSession:(id)arg1 miniProfileViewController:(id)arg2 storyOptions:(id)arg3 storyKey:(id)arg4 additionalInfo:(id)arg5 ;
-(void)shareStoryURLWithStoriesEverywhereService:(id)arg1 storyId:(id)arg2 storyType:(int)arg3 shareCompletion:(/*^block*/id)arg4 presentCompletion:(/*^block*/id)arg5 ;
-(id)initWithUserSession:(id)arg1 storyMiniProfileViewController:(id)arg2 storyOptions:(id)arg3 storyKey:(id)arg4 additionalInfo:(id)arg5 ;
-(id)initWithUserSession:(id)arg1 storyMiniProfileViewController:(id)arg2 additionalInfo:(id)arg3 ;
-(id)sendDynamicStory:(id)arg1 coverImage:(id)arg2 delegate:(id)arg3 ;
-(id)sendPromotedStory:(id)arg1 coverImage:(id)arg2 fromViewController:(id)arg3 ;
-(void)updateStoryProfileToNextSubscribeState:(unsigned long long)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(SCStoryMiniProfileViewController *)storyMiniProfileViewController;
-(void)_updateStoryProfileToSubscribeState:(unsigned long long)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(void)_sendSubscribeRequestShouldSubscribe:(BOOL)arg1 successCompletion:(/*^block*/id)arg2 failureCompletion:(/*^block*/id)arg3 ;
-(void)_handleSubscribeResponseDidSubscribe:(BOOL)arg1 success:(BOOL)arg2 successCompletion:(/*^block*/id)arg3 failureCompletion:(/*^block*/id)arg4 ;
-(void)_updateActiveProfileToIsExternallySharing:(BOOL)arg1 ;
-(id)_activePresentingViewController;
-(void)_handleShareStoryWithUrl:(id)arg1 storiesEverywhereService:(id)arg2 presentingViewController:(id)arg3 shareCompletion:(/*^block*/id)arg4 presentCompletion:(/*^block*/id)arg5 ;
-(void)_updateMiniProfileToIsExternallySharing:(BOOL)arg1 ;
-(void)_updateStoryProfileToIsExternallySharing:(BOOL)arg1 ;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(NSDictionary *)additionalInfo;
@end

