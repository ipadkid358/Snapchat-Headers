/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:50 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SOJUAdIdentityResponse.h>
@class NSString;


@protocol SOJUAdIdentityResponse <NSObject,NSCoding,NSCopying>
@property (nonatomic,copy,readonly) NSString * rawUserData; 
@property (nonatomic,copy,readonly) NSString * userAdId; 
@property (nonatomic,copy,readonly) NSString * trackHostAndPath; 
@property (nonatomic,copy,readonly) NSString * thirdPartyTrackHostAndPath; 
@property (nonatomic,copy,readonly) NSString * trackRequestCookie; 
@required
-(NSString *)userAdId;
-(NSString *)rawUserData;
-(NSString *)trackHostAndPath;
-(NSString *)thirdPartyTrackHostAndPath;
-(NSString *)trackRequestCookie;

@end


@class NSString;

@interface SOJUAdIdentityResponse : NSObject <SOJUAdIdentityResponse> {

	NSString* _rawUserData;
	NSString* _userAdId;
	NSString* _trackHostAndPath;
	NSString* _thirdPartyTrackHostAndPath;
	NSString* _trackRequestCookie;

}

@property (nonatomic,copy,readonly) NSString * rawUserData;                             //@synthesize rawUserData=_rawUserData - In the implementation block
@property (nonatomic,copy,readonly) NSString * userAdId;                                //@synthesize userAdId=_userAdId - In the implementation block
@property (nonatomic,copy,readonly) NSString * trackHostAndPath;                        //@synthesize trackHostAndPath=_trackHostAndPath - In the implementation block
@property (nonatomic,copy,readonly) NSString * thirdPartyTrackHostAndPath;              //@synthesize thirdPartyTrackHostAndPath=_thirdPartyTrackHostAndPath - In the implementation block
@property (nonatomic,copy,readonly) NSString * trackRequestCookie;                      //@synthesize trackRequestCookie=_trackRequestCookie - In the implementation block
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
-(NSString *)userAdId;
-(NSString *)rawUserData;
-(NSString *)trackHostAndPath;
-(NSString *)thirdPartyTrackHostAndPath;
-(NSString *)trackRequestCookie;
-(id)initWithRawUserData:(id)arg1 userAdId:(id)arg2 trackHostAndPath:(id)arg3 thirdPartyTrackHostAndPath:(id)arg4 trackRequestCookie:(id)arg5 ;
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)toDictionary;
@end
