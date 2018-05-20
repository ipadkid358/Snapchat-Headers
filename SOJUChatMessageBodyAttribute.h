/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:51 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUChatMessageBodyAttribute.h>
@class NSString;


@protocol SOJUChatMessageBodyAttribute <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * type; 
@property (nonatomic,copy,readonly) NSString * iosHref; 
@property (nonatomic,copy,readonly) NSString * itunesId; 
@property (nonatomic,copy,readonly) NSString * affiliateToken; 
@property (nonatomic,copy,readonly) NSString * campaignTracker; 
@property (nonatomic,copy,readonly) NSString * androidHref; 
@property (nonatomic,copy,readonly) NSString * href; 
@property (nonatomic,copy,readonly) NSString * formatType; 
@required
-(NSString *)iosHref;
-(NSString *)itunesId;
-(NSString *)affiliateToken;
-(NSString *)campaignTracker;
-(NSString *)androidHref;
-(NSString *)type;
-(NSString *)href;
-(NSString *)formatType;

@end


@class NSString;

@interface SOJUChatMessageBodyAttribute : NSObject <SOJUChatMessageBodyAttribute> {

	NSString* _type;
	NSString* _iosHref;
	NSString* _itunesId;
	NSString* _affiliateToken;
	NSString* _campaignTracker;
	NSString* _androidHref;
	NSString* _href;
	NSString* _formatType;

}

@property (nonatomic,copy,readonly) NSString * type;                         //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * iosHref;                      //@synthesize iosHref=_iosHref - In the implementation block
@property (nonatomic,copy,readonly) NSString * itunesId;                     //@synthesize itunesId=_itunesId - In the implementation block
@property (nonatomic,copy,readonly) NSString * affiliateToken;               //@synthesize affiliateToken=_affiliateToken - In the implementation block
@property (nonatomic,copy,readonly) NSString * campaignTracker;              //@synthesize campaignTracker=_campaignTracker - In the implementation block
@property (nonatomic,copy,readonly) NSString * androidHref;                  //@synthesize androidHref=_androidHref - In the implementation block
@property (nonatomic,copy,readonly) NSString * href;                         //@synthesize href=_href - In the implementation block
@property (nonatomic,copy,readonly) NSString * formatType;                   //@synthesize formatType=_formatType - In the implementation block
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
-(long long)formatTypeEnum;
-(NSString *)iosHref;
-(NSString *)itunesId;
-(NSString *)affiliateToken;
-(NSString *)campaignTracker;
-(NSString *)androidHref;
-(id)initWithType:(id)arg1 iosHref:(id)arg2 itunesId:(id)arg3 affiliateToken:(id)arg4 campaignTracker:(id)arg5 androidHref:(id)arg6 href:(id)arg7 formatType:(id)arg8 ;
-(id)initWithProtoBinary:(id)arg1 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithProtoBuf:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)href;
-(id)toDictionary;
-(NSString *)formatType;
@end

