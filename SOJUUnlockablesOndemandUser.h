/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:57 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUUnlockablesOndemandUser.h>
@class NSString, NSArray;


@protocol SOJUUnlockablesOndemandUser <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * username; 
@property (nonatomic,copy,readonly) NSString * userEmail; 
@property (nonatomic,copy,readonly) NSString * userId; 
@property (nonatomic,copy,readonly) NSArray * organizations; 
@property (nonatomic,copy,readonly) NSString * countryFromIp; 
@required
-(NSString *)countryFromIp;
-(NSString *)userEmail;
-(NSArray *)organizations;
-(NSString *)userId;
-(NSString *)username;

@end


@class NSString, NSArray;

@interface SOJUUnlockablesOndemandUser : NSObject <SOJUUnlockablesOndemandUser> {

	NSString* _username;
	NSString* _userEmail;
	NSString* _userId;
	NSArray* _organizations;
	NSString* _countryFromIp;

}

@property (nonatomic,copy,readonly) NSString * username;                   //@synthesize username=_username - In the implementation block
@property (nonatomic,copy,readonly) NSString * userEmail;                  //@synthesize userEmail=_userEmail - In the implementation block
@property (nonatomic,copy,readonly) NSString * userId;                     //@synthesize userId=_userId - In the implementation block
@property (nonatomic,copy,readonly) NSArray * organizations;               //@synthesize organizations=_organizations - In the implementation block
@property (nonatomic,copy,readonly) NSString * countryFromIp;              //@synthesize countryFromIp=_countryFromIp - In the implementation block
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
-(NSString *)countryFromIp;
-(id)initWithUsername:(id)arg1 userEmail:(id)arg2 userId:(id)arg3 organizations:(id)arg4 countryFromIp:(id)arg5 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)userEmail;
-(NSArray *)organizations;
-(NSString *)userId;
-(id)toDictionary;
-(NSString *)username;
@end

