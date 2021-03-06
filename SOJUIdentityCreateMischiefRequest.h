/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:54 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUIdentityCreateMischiefRequest.h>
@class NSString, NSArray, SOJUIdentityMischiefMobCreationRequest;


@protocol SOJUIdentityCreateMischiefRequest <NSObject,NSCoding,NSCopying,SOJUAuthPayload>
@property (nonatomic,copy,readonly) NSString * timestamp; 
@property (nonatomic,copy,readonly) NSString * reqToken; 
@property (nonatomic,copy,readonly) NSString * username; 
@property (nonatomic,copy,readonly) NSString * uuid; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSArray * participants; 
@property (nonatomic,copy,readonly) SOJUIdentityMischiefMobCreationRequest * mischiefMobCreationRequest; 
@property (nonatomic,copy,readonly) NSString * mischiefCreationSource; 
@required
-(NSString *)reqToken;
-(SOJUIdentityMischiefMobCreationRequest *)mischiefMobCreationRequest;
-(NSString *)mischiefCreationSource;
-(NSString *)timestamp;
-(NSString *)name;
-(NSArray *)participants;
-(NSString *)uuid;
-(NSString *)username;

@end


@class NSString, NSArray, SOJUIdentityMischiefMobCreationRequest;

@interface SOJUIdentityCreateMischiefRequest : NSObject <SOJUIdentityCreateMischiefRequest> {

	NSString* _timestamp;
	NSString* _reqToken;
	NSString* _username;
	NSString* _uuid;
	NSString* _name;
	NSArray* _participants;
	SOJUIdentityMischiefMobCreationRequest* _mischiefMobCreationRequest;
	NSString* _mischiefCreationSource;

}

@property (nonatomic,copy,readonly) NSString * timestamp;                                                             //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy,readonly) NSString * reqToken;                                                              //@synthesize reqToken=_reqToken - In the implementation block
@property (nonatomic,copy,readonly) NSString * username;                                                              //@synthesize username=_username - In the implementation block
@property (nonatomic,copy,readonly) NSString * uuid;                                                                  //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSArray * participants;                                                           //@synthesize participants=_participants - In the implementation block
@property (nonatomic,copy,readonly) SOJUIdentityMischiefMobCreationRequest * mischiefMobCreationRequest;              //@synthesize mischiefMobCreationRequest=_mischiefMobCreationRequest - In the implementation block
@property (nonatomic,copy,readonly) NSString * mischiefCreationSource;                                                //@synthesize mischiefCreationSource=_mischiefCreationSource - In the implementation block
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
-(NSString *)reqToken;
-(long long)mischiefCreationSourceEnum;
-(SOJUIdentityMischiefMobCreationRequest *)mischiefMobCreationRequest;
-(NSString *)mischiefCreationSource;
-(id)initWithTimestamp:(id)arg1 reqToken:(id)arg2 username:(id)arg3 uuid:(id)arg4 name:(id)arg5 participants:(id)arg6 mischiefMobCreationRequest:(id)arg7 mischiefCreationSource:(id)arg8 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)timestamp;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)participants;
-(NSString *)uuid;
-(id)toDictionary;
-(NSString *)username;
@end

