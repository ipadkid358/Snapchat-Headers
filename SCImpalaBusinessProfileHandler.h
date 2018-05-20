/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:17 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCDataHandler.h>
#import <Snapchat/SCSendConfirmationViewNamedRecipient.h>

@protocol SCCanceling;
@class SCImpalaService, SCDataHandler, NSString, IMPBusinessProfile, IMPBusinessStory;

@interface SCImpalaBusinessProfileHandler : SCDataHandler <SCSendConfirmationViewNamedRecipient> {

	SCImpalaService* _impalaService;
	id<SCCanceling> _subscribeRequest;
	id<SCCanceling> _unsubscribeRequest;
	SCDataHandler* _storyHandler;
	NSString* _businessId;

}

@property (nonatomic,readonly) NSString * businessId;                             //@synthesize businessId=_businessId - In the implementation block
@property (nonatomic,readonly) IMPBusinessProfile * businessProfile; 
@property (nonatomic,readonly) unsigned long long subscribeStatus; 
@property (nonatomic,readonly) IMPBusinessStory * story; 
@property (nonatomic,readonly) SCDataHandler * storyHandler; 
@property (nonatomic,readonly) BOOL canPostToStory; 
-(IMPBusinessStory *)story;
-(void)_didPostToStory:(id)arg1 ;
-(IMPBusinessProfile *)businessProfile;
-(id)businessProfileAndUserData;
-(void)_handleUpdateResponse:(id)arg1 error:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleSubscribeResponse:(id)arg1 error:(id)arg2 subscribing:(BOOL)arg3 ;
-(unsigned long long)subscribeStatus;
-(id)_doUpdateSubscribing:(BOOL)arg1 ;
-(void)setBusinessProfileAndUserData:(id)arg1 ;
-(id)initWithImpalaService:(id)arg1 businessId:(id)arg2 ;
-(SCDataHandler *)storyHandler;
-(id)storyManifestHandlerForSnapIds:(id)arg1 ;
-(BOOL)canPostToStory;
-(id)updateWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateSubscribeStatus:(BOOL)arg1 ;
-(void)updateWithBusinessProfileAndUserData:(id)arg1 ;
-(id)toJavascriptRepresentation;
-(id)sendConfirmationDisplayName;
-(void)dealloc;
-(id)copy;
-(NSString *)businessId;
-(BOOL)needsUpdate;
-(void)_cancelRequests;
@end

