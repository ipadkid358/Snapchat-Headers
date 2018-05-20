/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:08 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSearchEventAnnouncing.h>

@class SCQueuePerformer, SCSearchCachedRequestManager, SCPreferences, NSDictionary, SCSearchEventListenerAnnouncer, NSDate, NSString;

@interface SCASTProvider : NSObject <SCSearchEventAnnouncing> {

	SCQueuePerformer* _performer;
	SCSearchCachedRequestManager* _cachedRequestManager;
	SCPreferences* _preference;
	NSDictionary* _asts;
	NSDictionary* _astVersionsToUse;
	SCSearchEventListenerAnnouncer* _eventAnnouncer;
	NSDate* _lastUpdated;

}

@property (nonatomic,copy,readonly) NSString * friendsFeedAstVersionInUse; 
@property (nonatomic,readonly) NSDate * lastUpdated;                                    //@synthesize lastUpdated=_lastUpdated - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)announcerIdentifier;
-(id)_astVersionsToUse;
-(void)_fetchASTsWithAstVersionsToUse:(id)arg1 ;
-(id)_astForKey:(id)arg1 ;
-(void)_handleCachedAsts:(id)arg1 astVersionsToUse:(id)arg2 request:(id)arg3 shouldInvalidateCachedData:(BOOL*)arg4 ;
-(void)_updateWithAsts:(id)arg1 astVersionsToUse:(id)arg2 updatedDate:(id)arg3 ;
-(void)_announceASTVersionUpdates:(id)arg1 ;
-(id)initWithSessionRequestManager:(id)arg1 preference:(id)arg2 ;
-(NSString *)friendsFeedAstVersionInUse;
-(void)fetchASTsWithAstVersionsToUse:(id)arg1 ;
-(id)astForKey:(id)arg1 ;
-(NSDate *)lastUpdated;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end
