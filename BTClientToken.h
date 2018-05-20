/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:22 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BTJSON, NSString, NSURL;

@interface BTClientToken : NSObject <NSCoding, NSCopying> {

	BTJSON* _json;
	NSString* _authorizationFingerprint;
	NSURL* _configURL;
	NSString* _originalValue;

}

@property (nonatomic,copy) NSString * authorizationFingerprint;              //@synthesize authorizationFingerprint=_authorizationFingerprint - In the implementation block
@property (nonatomic,retain) NSURL * configURL;                              //@synthesize configURL=_configURL - In the implementation block
@property (nonatomic,copy) NSString * originalValue;                         //@synthesize originalValue=_originalValue - In the implementation block
@property (nonatomic,retain) BTJSON * json;                                  //@synthesize json=_json - In the implementation block
-(BTJSON *)json;
-(id)initWithClientToken:(id)arg1 error:(id*)arg2 ;
-(NSURL *)configURL;
-(NSString *)authorizationFingerprint;
-(id)decodeClientToken:(id)arg1 error:(id*)arg2 ;
-(BOOL)validateClientToken:(id*)arg1 ;
-(id)parseJSONString:(id)arg1 error:(id*)arg2 ;
-(void)setJson:(BTJSON *)arg1 ;
-(void)setAuthorizationFingerprint:(NSString *)arg1 ;
-(void)setConfigURL:(NSURL *)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)originalValue;
-(void)setOriginalValue:(NSString *)arg1 ;
@end
