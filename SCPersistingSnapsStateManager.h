/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:43 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableDictionary;

@interface SCPersistingSnapsStateManager : NSObject <NSCoding> {

	NSMutableDictionary* _snapsNeedToBeUpdated;
	NSMutableDictionary* _storySnapsNeedToBeUpdated;

}

@property (nonatomic,retain) NSMutableDictionary * snapsNeedToBeUpdated;                   //@synthesize snapsNeedToBeUpdated=_snapsNeedToBeUpdated - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * storySnapsNeedToBeUpdated;              //@synthesize storySnapsNeedToBeUpdated=_storySnapsNeedToBeUpdated - In the implementation block
+(id)path;
+(id)shared;
+(BOOL)initialized;
-(void)_ensureNonNilObjects;
-(void)flushSnapState;
-(void)setSnapsNeedToBeUpdated:(NSMutableDictionary *)arg1 ;
-(void)setStorySnapsNeedToBeUpdated:(NSMutableDictionary *)arg1 ;
-(void)_updateSnapsNeedToBeUpdated:(id)arg1 ;
-(void)_updateStorySnapsNeedToBeUpdated;
-(NSMutableDictionary *)snapsNeedToBeUpdated;
-(NSMutableDictionary *)storySnapsNeedToBeUpdated;
-(void)_updateLocalSnapsNeedToBeUpdated:(id)arg1 ;
-(void)_updateLocalStorySnapsNeedToBeUpdated:(id)arg1 ;
-(void)_updateSnapsNeedToBeUpdatedV3:(id)arg1 ;
-(void)_removeServerUpdatedSnaps:(id)arg1 ;
-(void)_removeServerUpdatedStorySnaps:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)saveState;
-(void)networkReachabilityDidChange:(id)arg1 ;
@end

