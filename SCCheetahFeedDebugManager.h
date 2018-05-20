/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:30 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCFeedDebugManaging.h>
#import <Snapchat/SCSearchEventListener.h>

@class SCQueuePerformer, NSMutableDictionary, SCAstVMDebugInformation, NSString;

@interface SCCheetahFeedDebugManager : NSObject <SCFeedDebugManaging, SCSearchEventListener> {

	SCQueuePerformer* _performer;
	NSMutableDictionary* _lastRunScores;
	NSMutableDictionary* _lastRunIncrementalFeatures;
	NSMutableDictionary* _lastRunIncrementalNodes;
	NSMutableDictionary* _lastRunIncrementalRegisters;
	NSMutableDictionary* _lastRunFullFeatures;
	NSMutableDictionary* _lastRunFullNodes;
	NSMutableDictionary* _lastRunFullRegisters;
	NSMutableDictionary* _countSinceLastRunFullFeatures;
	NSMutableDictionary* _featureLoggingNameCache;
	SCAstVMDebugInformation* _astVMDebugInformation;
	SCAstVMDebugInformation* _loggedAstVMDebugInformation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3 ;
-(id)debugInfoForFeedId:(id)arg1 ;
-(id)_debugInfoIncludeAstVM:(BOOL)arg1 ;
-(id)_debugInfoForFeedId:(id)arg1 ;
-(void)_updateDebugInfoWithEventName:(id)arg1 extraData:(id)arg2 ;
-(void)_updateFriendsFeedRankerDebugInfoWithEventName:(id)arg1 extraData:(id)arg2 ;
-(void)_updateWithScores:(id)arg1 rankingDebugInfo:(id)arg2 astVMDebugInformation:(id)arg3 astVersion:(id)arg4 ;
-(id)init;
-(id)debugInfo;
@end

