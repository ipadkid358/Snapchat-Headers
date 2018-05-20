/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:51 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUBroadcastStoryFriendFeedRequest.h>
@class NSString;


@protocol SOJUBroadcastStoryFriendFeedRequest <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * checksum; 
@property (nonatomic,copy,readonly) NSString * syncMetadata; 
@property (nonatomic,copy,readonly) NSString * requestType; 
@required
-(NSString *)syncMetadata;
-(NSString *)checksum;
-(NSString *)requestType;

@end


@class NSString;

@interface SOJUBroadcastStoryFriendFeedRequest : NSObject <SOJUBroadcastStoryFriendFeedRequest> {

	NSString* _checksum;
	NSString* _syncMetadata;
	NSString* _requestType;

}

@property (nonatomic,copy,readonly) NSString * checksum;                  //@synthesize checksum=_checksum - In the implementation block
@property (nonatomic,copy,readonly) NSString * syncMetadata;              //@synthesize syncMetadata=_syncMetadata - In the implementation block
@property (nonatomic,copy,readonly) NSString * requestType;               //@synthesize requestType=_requestType - In the implementation block
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
-(long long)requestTypeEnum;
-(NSString *)syncMetadata;
-(id)initWithChecksum:(id)arg1 syncMetadata:(id)arg2 requestType:(id)arg3 ;
-(id)initWithProtoBinary:(id)arg1 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithProtoBuf:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)checksum;
-(id)toDictionary;
-(NSString *)requestType;
@end

