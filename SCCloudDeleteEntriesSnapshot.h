/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:15 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCCloudDeleteEntriesSnapshot.h>
@class NSArray, SCCloudSyncTriggerUserContext;


@protocol SCCloudDeleteEntriesSnapshot <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) id<SCGalleryProfile> profile; 
@property (nonatomic,copy,readonly) NSArray * entryIds; 
@property (nonatomic,readonly) BOOL needRunImmediately; 
@property (nonatomic,copy,readonly) SCCloudSyncTriggerUserContext * userContext; 
@required
-(NSArray *)entryIds;
-(BOOL)needRunImmediately;
-(id<SCGalleryProfile>)profile;
-(SCCloudSyncTriggerUserContext *)userContext;

@end


@protocol SCGalleryProfile;
@class NSArray, SCCloudSyncTriggerUserContext, NSString;

@interface SCCloudDeleteEntriesSnapshot : NSObject <SCCloudDeleteEntriesSnapshot> {

	BOOL _needRunImmediately;
	id<SCGalleryProfile> _profile;
	NSArray* _entryIds;
	SCCloudSyncTriggerUserContext* _userContext;

}

@property (nonatomic,copy,readonly) id<SCGalleryProfile> profile;                             //@synthesize profile=_profile - In the implementation block
@property (nonatomic,copy,readonly) NSArray * entryIds;                                       //@synthesize entryIds=_entryIds - In the implementation block
@property (nonatomic,readonly) BOOL needRunImmediately;                                       //@synthesize needRunImmediately=_needRunImmediately - In the implementation block
@property (nonatomic,copy,readonly) SCCloudSyncTriggerUserContext * userContext;              //@synthesize userContext=_userContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)fasterCodingVersion;
+(unsigned long long*)fasterCodingKeys;
-(BOOL)preferFasterCoding;
-(void)encodeWithFasterCoder:(id)arg1 ;
-(void)decodeWithFasterDecoder:(id)arg1 ;
-(void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(void)setBool:(BOOL)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(NSArray *)entryIds;
-(BOOL)needRunImmediately;
-(id)initWithProfile:(id)arg1 entryIds:(id)arg2 needRunImmediately:(BOOL)arg3 userContext:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<SCGalleryProfile>)profile;
-(SCCloudSyncTriggerUserContext *)userContext;
@end

