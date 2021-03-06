/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:09 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCDataCoordinating.h>

@class NSString, SCSessionRequestManager, SCDataCoordinatorListenerAnnouncer, SCDocObjectContext, SCLazy;

@interface SCFriendsFeedUFSDataCoordinator : NSObject <SCDataCoordinating> {

	NSString* _currentUserId;
	NSString* _currentUsername_DO_NOT_USE;
	SCSessionRequestManager* _sessionRequestManager;
	SCDataCoordinatorListenerAnnouncer* _eventAnnouncer;
	SCDocObjectContext* _docObjectContext;
	SCLazy* _responseProcessorsLazy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dataCoordinatorIdentifier;
-(void)handleDataRequest:(id)arg1 ;
-(void)addDataUpdateListener:(id)arg1 ;
-(void)removeDataUpdateListener:(id)arg1 ;
-(void)_sendNetworkRequestWithDataRequest:(id)arg1 retryCount:(unsigned long long)arg2 ;
-(void)_handleDownloadCompletionWithRequest:(id)arg1 response:(id)arg2 parsedData:(id)arg3 ;
-(void)_handleDownloadFailureWithRequest:(id)arg1 response:(id)arg2 error:(id)arg3 retryCount:(unsigned long long)arg4 ;
-(void)_processWithRequest:(id)arg1 transactionContext:(id)arg2 parsedData:(id)arg3 ;
-(void)_announceFeedItemDatabaseUpdatesWithDataRequest:(id)arg1 ;
-(id)initWithCurrentUserId:(id)arg1 username:(id)arg2 sessionRequestManager:(id)arg3 docObjectContext:(id)arg4 ;
@end

