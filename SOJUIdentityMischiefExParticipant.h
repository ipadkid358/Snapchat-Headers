/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:54 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUIdentityMischiefExParticipant.h>
@class NSString, NSNumber;


@protocol SOJUIdentityMischiefExParticipant <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * userId; 
@property (nonatomic,copy,readonly) NSString * username; 
@property (nonatomic,copy,readonly) NSString * display; 
@property (nonatomic,copy,readonly) NSNumber * mischiefVersion; 
@required
-(NSNumber *)mischiefVersion;
-(NSString *)display;
-(NSString *)userId;
-(NSString *)username;

@end


@class NSString, NSNumber;

@interface SOJUIdentityMischiefExParticipant : NSObject <SOJUIdentityMischiefExParticipant> {

	NSString* _userId;
	NSString* _username;
	NSString* _display;
	NSNumber* _mischiefVersion;

}

@property (nonatomic,copy,readonly) NSString * userId;                       //@synthesize userId=_userId - In the implementation block
@property (nonatomic,copy,readonly) NSString * username;                     //@synthesize username=_username - In the implementation block
@property (nonatomic,copy,readonly) NSString * display;                      //@synthesize display=_display - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * mischiefVersion;              //@synthesize mischiefVersion=_mischiefVersion - In the implementation block
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
-(long long)mischiefVersionValue;
-(NSNumber *)mischiefVersion;
-(id)initWithUserId:(id)arg1 username:(id)arg2 display:(id)arg3 mischiefVersion:(id)arg4 ;
-(id)initWithProtoBinary:(id)arg1 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithProtoBuf:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)display;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)userId;
-(id)toDictionary;
-(NSString *)username;
@end

