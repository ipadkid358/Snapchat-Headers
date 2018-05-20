/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:15 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCCloudUpdateEntryHighlightsSnapshot.h>
@class NSString, NSSet, SCCloudSyncTriggerUserContext;


@protocol SCCloudUpdateEntryHighlightsSnapshot <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) id<SCGalleryProfile> profile; 
@property (nonatomic,copy,readonly) NSString * entryId; 
@property (nonatomic,copy,readonly) NSSet * highlightedSnapIdSet; 
@property (nonatomic,copy,readonly) SCCloudSyncTriggerUserContext * userContext; 
@required
-(NSString *)entryId;
-(NSSet *)highlightedSnapIdSet;
-(id<SCGalleryProfile>)profile;
-(SCCloudSyncTriggerUserContext *)userContext;

@end


@protocol SCGalleryProfile;
@class NSString, NSSet, SCCloudSyncTriggerUserContext;

@interface SCCloudUpdateEntryHighlightsSnapshot : NSObject <SCCloudUpdateEntryHighlightsSnapshot> {

	id<SCGalleryProfile> _profile;
	NSString* _entryId;
	NSSet* _highlightedSnapIdSet;
	SCCloudSyncTriggerUserContext* _userContext;

}

@property (nonatomic,copy,readonly) id<SCGalleryProfile> profile;                             //@synthesize profile=_profile - In the implementation block
@property (nonatomic,copy,readonly) NSString * entryId;                                       //@synthesize entryId=_entryId - In the implementation block
@property (nonatomic,copy,readonly) NSSet * highlightedSnapIdSet;                             //@synthesize highlightedSnapIdSet=_highlightedSnapIdSet - In the implementation block
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
-(NSString *)entryId;
-(id)initWithProfile:(id)arg1 entryId:(id)arg2 highlightedSnapIdSet:(id)arg3 userContext:(id)arg4 ;
-(NSSet *)highlightedSnapIdSet;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<SCGalleryProfile>)profile;
-(SCCloudSyncTriggerUserContext *)userContext;
@end

