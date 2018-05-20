/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:52 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUConversationState.h>
@class NSDictionary, NSArray;


@protocol SOJUConversationState <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSDictionary * userSequences; 
@property (nonatomic,copy,readonly) NSDictionary * updateSequences; 
@property (nonatomic,copy,readonly) NSDictionary * snapSequences; 
@property (nonatomic,copy,readonly) NSArray * userChatReleasesV2; 
@property (nonatomic,copy,readonly) NSArray * userSnapReleasesV2; 
@property (nonatomic,copy,readonly) NSDictionary * userChatReleases; 
@property (nonatomic,copy,readonly) NSDictionary * userSnapReleases; 
@required
-(NSDictionary *)userSequences;
-(NSDictionary *)updateSequences;
-(NSDictionary *)snapSequences;
-(NSArray *)userChatReleasesV2;
-(NSArray *)userSnapReleasesV2;
-(NSDictionary *)userChatReleases;
-(NSDictionary *)userSnapReleases;

@end


@class NSDictionary, NSArray, NSString;

@interface SOJUConversationState : NSObject <SOJUConversationState> {

	NSDictionary* _userSequences;
	NSDictionary* _updateSequences;
	NSDictionary* _snapSequences;
	NSArray* _userChatReleasesV2;
	NSArray* _userSnapReleasesV2;
	NSDictionary* _userChatReleases;
	NSDictionary* _userSnapReleases;

}

@property (nonatomic,copy,readonly) NSDictionary * userSequences;                 //@synthesize userSequences=_userSequences - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * updateSequences;               //@synthesize updateSequences=_updateSequences - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * snapSequences;                 //@synthesize snapSequences=_snapSequences - In the implementation block
@property (nonatomic,copy,readonly) NSArray * userChatReleasesV2;                 //@synthesize userChatReleasesV2=_userChatReleasesV2 - In the implementation block
@property (nonatomic,copy,readonly) NSArray * userSnapReleasesV2;                 //@synthesize userSnapReleasesV2=_userSnapReleasesV2 - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * userChatReleases;              //@synthesize userChatReleases=_userChatReleases - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * userSnapReleases;              //@synthesize userSnapReleases=_userSnapReleases - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)fasterCodingVersion;
+(unsigned long long*)fasterCodingKeys;
+(BOOL)canInitFromProto;
-(BOOL)preferFasterCoding;
-(void)encodeWithFasterCoder:(id)arg1 ;
-(void)decodeWithFasterDecoder:(id)arg1 ;
-(void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(id)toJson;
-(NSDictionary *)userSequences;
-(NSDictionary *)updateSequences;
-(NSDictionary *)snapSequences;
-(NSArray *)userChatReleasesV2;
-(NSArray *)userSnapReleasesV2;
-(NSDictionary *)userChatReleases;
-(NSDictionary *)userSnapReleases;
-(id)initWithUserSequences:(id)arg1 updateSequences:(id)arg2 snapSequences:(id)arg3 userChatReleasesV2:(id)arg4 userSnapReleasesV2:(id)arg5 userChatReleases:(id)arg6 userSnapReleases:(id)arg7 ;
-(id)initWithProtoBinary:(id)arg1 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithProtoBuf:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)toDictionary;
@end
