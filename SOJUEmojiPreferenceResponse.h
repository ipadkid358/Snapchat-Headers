/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:52 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUEmojiPreferenceResponse.h>
@class NSString, NSNumber, NSDictionary;


@protocol SOJUEmojiPreferenceResponse <NSObject,NSCoding,NSCopying,SOJUMessage>
@property (nonatomic,copy,readonly) NSString * type; 
@property (nonatomic,copy,readonly) NSString * idValue; 
@property (nonatomic,copy,readonly) NSString * appEngineTarget; 
@property (nonatomic,copy,readonly) NSNumber * success; 
@property (nonatomic,copy,readonly) NSDictionary * friendmojiDictionary; 
@required
-(NSString *)idValue;
-(NSString *)appEngineTarget;
-(NSDictionary *)friendmojiDictionary;
-(NSString *)type;
-(NSNumber *)success;

@end


@class NSString, NSNumber, NSDictionary;

@interface SOJUEmojiPreferenceResponse : NSObject <SOJUEmojiPreferenceResponse> {

	NSString* _type;
	NSString* _idValue;
	NSString* _appEngineTarget;
	NSNumber* _success;
	NSDictionary* _friendmojiDictionary;

}

@property (nonatomic,copy,readonly) NSString * type;                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * idValue;                               //@synthesize idValue=_idValue - In the implementation block
@property (nonatomic,copy,readonly) NSString * appEngineTarget;                       //@synthesize appEngineTarget=_appEngineTarget - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * success;                               //@synthesize success=_success - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * friendmojiDictionary;              //@synthesize friendmojiDictionary=_friendmojiDictionary - In the implementation block
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
-(long long)typeEnum;
-(NSString *)idValue;
-(NSString *)appEngineTarget;
-(BOOL)successValue;
-(NSDictionary *)friendmojiDictionary;
-(id)initWithType:(id)arg1 idValue:(id)arg2 appEngineTarget:(id)arg3 success:(id)arg4 friendmojiDictionary:(id)arg5 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)toDictionary;
-(NSNumber *)success;
@end

