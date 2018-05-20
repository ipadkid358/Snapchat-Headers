/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:13 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCChatMessageParcel.h>
@class NSString, NSData, NSArray;


@protocol SCChatMessageParcel <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * consistentId; 
@property (nonatomic,copy,readonly) NSString * type; 
@property (nonatomic,copy,readonly) NSData * payload; 
@property (nonatomic,copy,readonly) NSArray * media; 
@property (nonatomic,copy,readonly) NSString * tag; 
@property (nonatomic,copy,readonly) NSString * tagVersion; 
@required
-(NSString *)tagVersion;
-(NSString *)consistentId;
-(NSData *)payload;
-(NSString *)type;
-(NSString *)tag;
-(NSArray *)media;

@end


@class NSString, NSData, NSArray;

@interface SCChatMessageParcel : NSObject <SCChatMessageParcel> {

	NSString* _consistentId;
	NSString* _type;
	NSData* _payload;
	NSArray* _media;
	NSString* _tag;
	NSString* _tagVersion;

}

@property (nonatomic,copy,readonly) NSString * consistentId;              //@synthesize consistentId=_consistentId - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSData * payload;                     //@synthesize payload=_payload - In the implementation block
@property (nonatomic,copy,readonly) NSArray * media;                      //@synthesize media=_media - In the implementation block
@property (nonatomic,copy,readonly) NSString * tag;                       //@synthesize tag=_tag - In the implementation block
@property (nonatomic,copy,readonly) NSString * tagVersion;                //@synthesize tagVersion=_tagVersion - In the implementation block
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
-(NSString *)tagVersion;
-(NSString *)consistentId;
-(id)initWithConsistentId:(id)arg1 type:(id)arg2 payload:(id)arg3 media:(id)arg4 tag:(id)arg5 tagVersion:(id)arg6 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSData *)payload;
-(NSString *)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)tag;
-(NSArray *)media;
@end
