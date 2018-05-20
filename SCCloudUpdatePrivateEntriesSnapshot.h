/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:15 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCCloudUpdatePrivateEntriesSnapshot.h>
@class NSString, NSArray, NSDictionary, SCCloudSyncTriggerUserContext;


@protocol SCCloudUpdatePrivateEntriesSnapshot <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) id<SCGalleryProfile> profile; 
@property (nonatomic,copy,readonly) NSString * entryId; 
@property (nonatomic,copy,readonly) NSArray * addSnapEntities; 
@property (nonatomic,readonly) BOOL isPrivate; 
@property (nonatomic,copy,readonly) NSDictionary * dataVaultEncryption; 
@property (nonatomic,copy,readonly) SCCloudSyncTriggerUserContext * userContext; 
@required
-(NSString *)entryId;
-(NSDictionary *)dataVaultEncryption;
-(NSArray *)addSnapEntities;
-(id<SCGalleryProfile>)profile;
-(SCCloudSyncTriggerUserContext *)userContext;
-(BOOL)isPrivate;

@end


@protocol SCGalleryProfile;
@class NSString, NSArray, NSDictionary, SCCloudSyncTriggerUserContext;

@interface SCCloudUpdatePrivateEntriesSnapshot : NSObject <SCCloudUpdatePrivateEntriesSnapshot> {

	BOOL _isPrivate;
	id<SCGalleryProfile> _profile;
	NSString* _entryId;
	NSArray* _addSnapEntities;
	NSDictionary* _dataVaultEncryption;
	SCCloudSyncTriggerUserContext* _userContext;

}

@property (nonatomic,copy,readonly) id<SCGalleryProfile> profile;                             //@synthesize profile=_profile - In the implementation block
@property (nonatomic,copy,readonly) NSString * entryId;                                       //@synthesize entryId=_entryId - In the implementation block
@property (nonatomic,copy,readonly) NSArray * addSnapEntities;                                //@synthesize addSnapEntities=_addSnapEntities - In the implementation block
@property (nonatomic,readonly) BOOL isPrivate;                                                //@synthesize isPrivate=_isPrivate - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dataVaultEncryption;                       //@synthesize dataVaultEncryption=_dataVaultEncryption - In the implementation block
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
-(NSString *)entryId;
-(NSDictionary *)dataVaultEncryption;
-(id)initWithProfile:(id)arg1 entryId:(id)arg2 addSnapEntities:(id)arg3 isPrivate:(BOOL)arg4 dataVaultEncryption:(id)arg5 userContext:(id)arg6 ;
-(NSArray *)addSnapEntities;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<SCGalleryProfile>)profile;
-(SCCloudSyncTriggerUserContext *)userContext;
-(BOOL)isPrivate;
@end

