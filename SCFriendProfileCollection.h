/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:34 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@protocol SCPerforming;
@class SCEncryptedCache, NSDictionary;

@interface SCFriendProfileCollection : NSObject <NSCoding> {

	SCEncryptedCache* _cache;
	id<SCPerforming> _performer;
	NSDictionary* _friendProfileDict;

}

@property (retain) NSDictionary * friendProfileDict;              //@synthesize friendProfileDict=_friendProfileDict - In the implementation block
+(id)generateKeyForFriend:(id)arg1 size:(long long)arg2 ;
+(void)fetchProfilePictureFromServerForFriend:(id)arg1 withSize:(long long)arg2 contexts:(id)arg3 successQueue:(id)arg4 failureQueue:(id)arg5 successBlock:(/*^block*/id)arg6 failureBlock:(/*^block*/id)arg7 ;
+(id)collection;
-(void)putSnapchatter:(id)arg1 ;
-(void)fetchScoreForFriend:(id)arg1 completionQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_initQueue;
-(void)_removeExpiredProfileInQueue;
-(NSDictionary *)friendProfileDict;
-(void)_removeExpiredProfile;
-(BOOL)_shouldFetchProfilePictureForFriend:(id)arg1 size:(long long)arg2 ;
-(BOOL)_hasProfilePictureForFriend:(id)arg1 size:(long long)arg2 ;
-(void)_fetchProfilePictureFromCacheForFriend:(id)arg1 withSize:(long long)arg2 contexts:(id)arg3 completionQueue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_fetchProfilePictureFromServerForFriend:(id)arg1 withSize:(long long)arg2 contexts:(id)arg3 completionQueue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_updateProfilePictureMetaDataForFriend:(id)arg1 size:(long long)arg2 lastFetchedTimestamp:(long long)arg3 profilePictureTimestamp:(long long)arg4 ;
-(void)_performScoreFetchingForFriend:(id)arg1 completionQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_shouldFetchScoreForFriend:(id)arg1 ;
-(void)_updateScoreForFriend:(id)arg1 friendScore:(id)arg2 ;
-(id)_getFriendScoreForFriend:(id)arg1 ;
-(void)_updateSnapchatter:(id)arg1 snapchatter:(id)arg2 ;
-(id)_getProfilePictureMetaDataForFriend:(id)arg1 size:(long long)arg2 ;
-(id)getSnapchatterForUsername:(id)arg1 ;
-(id)_getProfileForFriend:(id)arg1 ;
-(void)setFriendProfileDict:(NSDictionary *)arg1 ;
-(void)fetchProfilePictureForFriend:(id)arg1 withSize:(long long)arg2 contexts:(id)arg3 completionQueue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)_shouldFetchSnapchatter:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)cache;
-(void)_addObservers;
-(void)_removeObservers;
@end

