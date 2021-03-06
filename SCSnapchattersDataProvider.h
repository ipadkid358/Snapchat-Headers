/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:13 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCDocObjectObservationToken;
@class SCDocObjectContext, SCQueuePerformer, SCSnapchattersDataProviderListenerAnnouncer, SCDocObjectFetchedResult;

@interface SCSnapchattersDataProvider : NSObject {

	SCDocObjectContext* _docObjectContext;
	long long _suggestionSource;
	SCQueuePerformer* _performer;
	SCSnapchattersDataProviderListenerAnnouncer* _eventAnnouncer;
	SCDocObjectFetchedResult* _addedMeSnapchatters;
	SCDocObjectFetchedResult* _quickAddSnapchatters;
	id<SCDocObjectObservationToken> _addedMeSnapchattersObservationToken;
	id<SCDocObjectObservationToken> _quickAddSnapchattersObservationToken;

}
-(void)_fetchAndObserveSnapchattersAsynchronously;
-(void)_fetchAndObserveSnapchatters;
-(void)_fetchAndObserveAddedMeSnapchatters;
-(void)_fetchAndObserveQuickAddSnapchatters;
-(void)_mutateAndAnnounceAddedMeSnapchatters:(id)arg1 ;
-(void)_announceSnapchattersDataProviderUpdateAddedMeSnapchatters;
-(void)_mutateAndAnnounceQuickAddSnapchatters:(id)arg1 ;
-(void)_announceSnapchattersDataProviderUpdateQuickAddSnapchatters;
-(id)initWithDocObjectContext:(id)arg1 suggestionSource:(long long)arg2 ;
-(id)addedMeSnapchatters;
-(id)quickAddSnapchatters;
-(id)snapchattersWithUserId:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end

