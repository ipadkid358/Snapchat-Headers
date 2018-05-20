/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:53 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCGtqUnlockablesDataSourceListener.h>
#import <Snapchat/SCLocationDataUnlockablesListener.h>

@class SCQueuePerformer, SCUserSession, SCExperimentManager, NSMutableDictionary, NSString;

@interface SCGtqDirectMigrationLogger : NSObject <SCGtqUnlockablesDataSourceListener, SCLocationDataUnlockablesListener> {

	SCQueuePerformer* _performer;
	SCUserSession* _userSession;
	SCExperimentManager* _experimentManager;
	NSMutableDictionary* _referenceTime;
	NSMutableDictionary* _locDataReferenceMap;
	NSMutableDictionary* _gtqReferenceMap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithUserSession:(id)arg1 ;
-(void)didFetchLocationResponse:(id)arg1 withContext:(id)arg2 forRequest:(id)arg3 ;
-(BOOL)shouldLogDoubleQueryMetrics;
-(void)_didReceiveResponseWithReferenceId:(id)arg1 unlockablesMigrationCounter:(long long)arg2 venuesMigrationCounter:(long long)arg3 startTime:(double)arg4 referenceMap:(id)arg5 filters:(id)arg6 bitmoji:(id)arg7 lens:(id)arg8 preCacheLens:(id)arg9 stickers:(id)arg10 venues:(id)arg11 ;
-(BOOL)_isLocDataSkipUnlockables;
-(BOOL)_isLocDataSkipVenues;
-(id)extractUnlockableIds:(id)arg1 ;
-(id)extractVenueIds:(id)arg1 ;
-(void)_logUnlockableMigrationCounter:(long long)arg1 referenceId:(id)arg2 filterIds:(id)arg3 bitmojiFilterIds:(id)arg4 lensIds:(id)arg5 precacheLensIds:(id)arg6 stickerIds:(id)arg7 ;
-(void)_logVenueMigrationCounter:(long long)arg1 referenceId:(id)arg2 venueIds:(id)arg3 ;
-(void)_compareAndPruneWithReferenceId:(id)arg1 ;
-(void)_prune:(id)arg1 ;
-(void)didFetchUnlockables:(id)arg1 withRequestStartTime:(double)arg2 forReferenceId:(id)arg3 ;
@end
